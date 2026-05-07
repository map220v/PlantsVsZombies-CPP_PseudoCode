// Class: AvatarPackageItem


/* AvatarPackageItem::~AvatarPackageItem() */

void __thiscall AvatarPackageItem::~AvatarPackageItem(AvatarPackageItem *this)

{
  *(undefined ***)this = &PTR_GetClass_066a31f0;
  FUN_05476c50(this + 0xf0);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AvatarPackageItem::~AvatarPackageItem() */

void __thiscall AvatarPackageItem::~AvatarPackageItem(AvatarPackageItem *this)

{
  ~AvatarPackageItem(this);
  AK::FreeHook(this);
  return;
}


/* AvatarPackageItem::AvatarPackageItem() */

void __thiscall AvatarPackageItem::AvatarPackageItem(AvatarPackageItem *this)

{
  Sexy::Widget::Widget((Widget *)this);
  this[0xe0] = (AvatarPackageItem)0x0;
  *(undefined ***)this = &PTR_GetClass_066a31f0;
  FUN_05476574(this + 0xf0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AvatarPackageItem::Refresh() */

void __thiscall AvatarPackageItem::Refresh(AvatarPackageItem *this)

{
  AvatarPackageItem AVar1;
  undefined4 uVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  undefined1 auVar3 [12];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
  AVar1 = (AvatarPackageItem)NameMapperBase::ContainsId(this_02,*(int *)(this + 0xe4));
  this[0xe8] = AVar1;
  AVar1 = (AvatarPackageItem)NewAvatar::IsAvatarUnlocked(*(int *)(this + 0xe4));
  this[0xe9] = AVar1;
  AVar1 = (AvatarPackageItem)PlayerInfo::IsEquipAvatar(this_01,*(int *)(this + 0xe4));
  this[0xea] = AVar1;
  auVar3 = NewAvatar::GetAvatarTinyImage(*(int *)(this + 0xe4));
  *(long *)(this + 0xf8) = auVar3._0_8_;
  NewAvatar::GetAvatarName((NewAvatar *)(ulong)*(uint *)(this + 0xe4),auVar3._8_4_);
  FUN_054766c8(this + 0xf0,auStack_10);
  FUN_05476c50(auStack_10);
  uVar2 = NewAvatar::GetAvatarPieceNum(*(int *)(this + 0xe4));
  *(undefined4 *)(this + 0x100) = uVar2;
  uVar2 = NewAvatar::GetAvatarPieceMaxNum(*(int *)(this + 0xe4));
  *(undefined4 *)(this + 0x104) = uVar2;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AvatarPackageItem::InitView(int, AvatarPackageItem::AvatarLevel) */

void __thiscall
AvatarPackageItem::InitView(AvatarPackageItem *this,undefined4 param_1,undefined4 param_3)

{
  *(undefined4 *)(this + 0xe4) = param_1;
  *(undefined4 *)(this + 0x108) = param_3;
  Refresh(this);
  return;
}


/* AvatarPackageItem::SelectPackageItem(bool) */

void __thiscall AvatarPackageItem::SelectPackageItem(AvatarPackageItem *this,bool param_1)

{
  this[0xe0] = (AvatarPackageItem)param_1;
  Refresh(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AvatarPackageItem::Draw(Sexy::Graphics*) */

void __thiscall AvatarPackageItem::Draw(AvatarPackageItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  Image *pIVar7;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  float fVar8;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_03814ff8(0x1e);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),iVar1);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
  Sexy::Color::Color(aCStack_18,0x66,0x37,0);
  WriteWordInRect(param_1,this + 0xf0,aIStack_28,uVar6,aCStack_18,5,1);
  iVar1 = *(int *)(this + 0x108);
  if (iVar1 == 1) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3488;
  }
  else if (iVar1 == 0) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab30e8;
  }
  else {
    if (iVar1 != 2) goto LAB_0381a750;
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab32d0;
  }
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  iVar1 = FUN_03814ff8(5);
  iVar2 = FUN_03814ff8(0x1e);
  iVar3 = FUN_03814ff8(0x32);
  Sexy::Graphics::DrawImage(param_1,pIVar7,iVar1,iVar2,iVar3,iVar3);
LAB_0381a750:
  iVar1 = FUN_03814ff8(5);
  iVar2 = FUN_03814ff8(0x1e);
  iVar3 = FUN_03814ff8(0x32);
  Sexy::Insets::Insets((Insets *)aCStack_18,iVar1,iVar2,iVar3,iVar3);
  DrawAdaptiveImage(param_1,aCStack_18,*(undefined8 *)(this + 0xf8));
  if (this[0xe9] == (AvatarPackageItem)0x0) {
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab32f8);
    iVar1 = FUN_03814ff8(0);
    iVar2 = FUN_03814ff8(0x50);
    iVar3 = FUN_03814ff8(10);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar1,iVar2,iVar3,iVar3);
    iVar1 = *(int *)(this + 0x104);
    iVar2 = *(int *)(this + 0x100);
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3230);
    iVar3 = FUN_03814ff8(10);
    iVar4 = FUN_03814ff8(0x50);
    iVar5 = FUN_03814ff8(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar3,iVar4,iVar5,iVar3);
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3720);
    iVar3 = FUN_03814ff8(10);
    iVar4 = FUN_03814ff8(0x50);
    iVar5 = FUN_03814ff8(0x32);
    fVar8 = (float)NEON_fminnm((float)iVar2 / (float)iVar1,0x3f800000);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar3,iVar4,(int)((float)iVar5 * fVar8),iVar3);
    Sexy::StrFormat("%d/%d",asStack_38,(ulong)*(uint *)(this + 0x100),(ulong)*(uint *)(this + 0x104)
                   );
    Sexy::ToWString(asStack_38);
    iVar1 = FUN_03814ff8(10);
    iVar2 = FUN_03814ff8(0x50);
    iVar3 = FUN_03814ff8(0x32);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar1);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    std::string::~string(asStack_38);
  }
  if (this[0xea] != (AvatarPackageItem)0x0) {
    TodStringTranslate(L"[NEW_AVATAR_EQUIPED]");
    iVar1 = FUN_03814ff8(5);
    iVar2 = FUN_03814ff8(0x1e);
    iVar3 = FUN_03814ff8(0x32);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar3);
    uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
  }
  if (this[0xe0] != (AvatarPackageItem)0x0) {
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab3620);
    iVar1 = FUN_03814ff8(5);
    iVar2 = FUN_03814ff8(0x1e);
    iVar3 = FUN_03814ff8(0x32);
    Sexy::Graphics::DrawImage(param_1,pIVar7,iVar1,iVar2,iVar3,iVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AvatarPackageItem::TouchEnded(Sexy::Touch const&) */

void __thiscall AvatarPackageItem::TouchEnded(AvatarPackageItem *this,Touch *param_1)

{
  UINewPlantView_AvatarPackage *this_00;
  
  if (*(long *)(this + 0xd8) != *(long *)param_1) {
    return;
  }
  this_00 = (UINewPlantView_AvatarPackage *)
            UISingletonDialog<UINewPlantView_AvatarPackage>::GetSingletonPtr();
  UINewPlantView_AvatarPackage::FocusAvatar(this_00,*(int *)(this + 0xe4));
  return;
}

