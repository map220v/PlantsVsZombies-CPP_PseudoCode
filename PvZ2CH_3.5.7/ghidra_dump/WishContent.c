// Class: WishContent


/* WishContent::GetProps() const */

RtWeakPtr<Sexy::SoundResource> * WishContent::GetProps(void)

{
  long in_x0;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)(in_x0 + 0xe8));
  return in_x8;
}


/* WishContent::~WishContent() */

void __thiscall WishContent::~WishContent(WishContent *this)

{
  *(undefined ***)this = &PTR_GetClass_068440b0;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0xf8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* WishContent::~WishContent() */

void __thiscall WishContent::~WishContent(WishContent *this)

{
  ~WishContent(this);
  AK::FreeHook(this);
  return;
}


/* WishContent::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall WishContent::DrawAll(WishContent *this,ModalFlags *param_1,Graphics *param_2)

{
  RtMixedPtrBase *this_00;
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar7;
  Image *pIVar8;
  
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (this[0x110] != (WishContent)0x0) {
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b036f0);
    iVar6 = FUN_043bb090(0);
    Sexy::Graphics::DrawImage(param_2,pIVar8,iVar6,iVar6);
  }
  this_00 = (RtMixedPtrBase *)(this + 0xe8);
  cVar3 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar3 != '\0') {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar4 = std::operator==((string *)(lVar7 + 0x78),"avatar");
    if (bVar4) {
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar3 = PlayerInfo::GetIsPlantUnlocked(this_02,(string *)(lVar7 + 0x80));
      if (cVar3 == '\0') {
        pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b039d0);
        iVar6 = *(int *)(this + 0x50);
        lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b039d0);
        iVar1 = *(int *)(lVar7 + 0x38);
        iVar5 = FUN_043bb090(0);
        lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b039d0);
        iVar2 = *(int *)(lVar7 + 0x38);
        lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b039d0);
        Sexy::Graphics::DrawImage
                  (param_2,pIVar8,iVar6 - iVar1 / 2,iVar5,iVar2 / 2,*(int *)(lVar7 + 0x3c) / 2);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishContent::Resize(int, int, int, int) */

void __thiscall
WishContent::Resize(WishContent *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LotteryResultProgressBar *pLVar8;
  SalesProgressBar *this_00;
  long *plVar9;
  Insets aIStack_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar9 = *(long **)(this + 0xd8);
  if (plVar9 != (long *)0x0) {
    uVar2 = FUN_043bb090(0);
    (**(code **)(*plVar9 + 0x198))(plVar9,uVar2,uVar2,param_3,param_4);
  }
  iVar3 = FUN_043bb090(0);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_043bb090(10);
  Sexy::Insets::Insets(aIStack_28,iVar3,iVar3,iVar1,iVar1 - iVar4);
  plVar9 = *(long **)(this + 0xe0);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x1a0))(plVar9,aIStack_28);
  }
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03650);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar1 = *(int *)(this + 0x50);
  iVar4 = FUN_043bb090(10);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03650);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  iVar6 = FUN_043bb090(3);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03930);
  iVar7 = SalesProgressBar::GetCurrentLevel(this_00);
  Sexy::Insets::Insets((Insets *)&local_18,iVar3,iVar1 - iVar4,(iVar1 - iVar5) - iVar6,iVar7);
  *(undefined8 *)(this + 0x100) = local_18;
  *(undefined8 *)(this + 0x108) = uStack_10;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishContent::WishContent(Sexy::RtWeakPtr<MagentoProductProps>, int, Sexy::ButtonListener*) */

void __thiscall
WishContent::WishContent(WishContent *this,RtWeakPtr *param_2,int param_3,ButtonListener *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  PVZ2UIButton *this_00;
  string *psVar5;
  long lVar6;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  MagentoProductProps *this_03;
  PVZ2UIGameObjectCard *pPVar7;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_04;
  uint uVar8;
  float fVar9;
  undefined1 auStack_30 [8];
  wstring awStack_28 [8];
  Color aCStack_20 [4];
  uint local_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  this_04 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8);
  *(undefined ***)this = &PTR_GetClass_068440b0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_04)
  ;
  FUN_05476574(this + 0xf8);
  Sexy::Insets::Insets((Insets *)(this + 0x100));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_04,param_2);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  this[0x110] = (WishContent)0x0;
  *(undefined4 *)(this + 0xf0) = 0;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)this_04);
  if (cVar1 == '\0') goto LAB_043bd9c8;
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)awStack_28,(RtWeakPtrBase *)aCStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aCStack_20);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)awStack_28);
  if (cVar1 != '\0') {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
    bVar2 = std::operator==((string *)(lVar6 + 0x78),"avatar");
    if (bVar2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aCStack_20,(RtWeakPtrBase *)awStack_28);
      pPVar7 = ::operator_new(0x160);
      PVZ2UIGameObjectCard::PVZ2UIGameObjectCard
                (pPVar7,(RtWeakPtr<Sexy::ResourceInfo> *)aCStack_20,1,0,0,1);
      *(PVZ2UIGameObjectCard **)(this + 0xe0) = pPVar7;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aCStack_20);
      PVZ2UIGameObjectCard::SetAvatarIndex(*(PVZ2UIGameObjectCard **)(this + 0xe0),0);
    }
    else {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aCStack_20,(RtWeakPtrBase *)awStack_28);
      pPVar7 = ::operator_new(0x160);
      PVZ2UIGameObjectCard::PVZ2UIGameObjectCard
                (pPVar7,(RtWeakPtr<Sexy::ResourceInfo> *)aCStack_20,1,0xffffffff,0,1);
      *(PVZ2UIGameObjectCard **)(this + 0xe0) = pPVar7;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aCStack_20);
    }
    NewYearGoodsSelectItem::SelectItem(*(NewYearGoodsSelectItem **)(this + 0xe0),false);
    PVZ2UIGameObjectCard::SetShowLock(*(PVZ2UIGameObjectCard **)(this + 0xe0),false);
    PVZ2UIGameObjectCard::SetShowPlantPrice(*(PVZ2UIGameObjectCard **)(this + 0xe0),false);
    PVZ2UIGameObjectCard::SetSmallLevelRank(*(PVZ2UIGameObjectCard **)(this + 0xe0));
    PVZ2UIGameObjectCard::SetItemOffset(*(PVZ2UIGameObjectCard **)(this + 0xe0),0.85);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xe0));
  }
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
  if (0 < *(int *)(lVar6 + 0x90)) {
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
    bVar2 = std::operator==((string *)(lVar6 + 0x78),"avatar");
    if (bVar2) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
      iVar3 = PlayerInfo::GetAvatarPiecesCount(this_02,lVar6 + 0x80,0,0);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
      fVar9 = (float)NEON_fminnm((float)iVar3 / (float)*(int *)(lVar6 + 0x90),0x3f800000);
      *(float *)(this + 0xf0) = fVar9;
      if (fVar9 < 1.0) {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
        uVar4 = PlayerInfo::GetAvatarPiecesCount(this_02,lVar6 + 0x80,0,0);
      }
      else {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
        uVar4 = *(uint *)(lVar6 + 0x90);
      }
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
      uVar8 = *(uint *)(lVar6 + 0x90);
    }
    else {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
      iVar3 = PlayerInfo::GetPlantStarLevel(this_02,(string *)(lVar6 + 0x80),false);
      if (iVar3 < 1) {
LAB_043bdd34:
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
        uVar8 = *(uint *)(lVar6 + 0x90);
      }
      else {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
        iVar3 = PlayerInfo::GetPlantStarLevel(this_02,(string *)(lVar6 + 0x80),false);
        GachaItemInfo::GachaItemInfo((GachaItemInfo *)aCStack_20);
        this_03 = (MagentoProductProps *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04)
        ;
        MagentoProductProps::GetCurrentLevelPriceData(this_03,iVar3,(LevelUpPriceData *)aCStack_20);
        uVar8 = local_1c;
        if (local_1c == 0) goto LAB_043bdd34;
      }
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
      iVar3 = PlayerInfo::GetPlantPieceCount(this_02,(string *)(lVar6 + 0x80),false);
      fVar9 = (float)NEON_fminnm((float)iVar3 / (float)(int)uVar8,0x3f800000);
      *(float *)(this + 0xf0) = fVar9;
      uVar4 = uVar8;
      if (fVar9 < 1.0) {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_04);
        uVar4 = PlayerInfo::GetPlantPieceCount(this_02,(string *)(lVar6 + 0x80),false);
      }
    }
    Sexy::StrFormat(L"%d/%d",(RtWeakPtr<Sexy::ResourceInfo> *)aCStack_20,(ulong)uVar4,(ulong)uVar8);
    FUN_054766c8(this + 0xf8,(RtWeakPtr<Sexy::ResourceInfo> *)aCStack_20);
    FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)aCStack_20);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)awStack_28);
LAB_043bd9c8:
  FUN_05478178(awStack_28,&DAT_056f11a8,auStack_30);
  Sexy::Color::Color(aCStack_20,1);
  this_00 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton(this_00,param_3,param_4,awStack_28,aCStack_20);
  *(PVZ2UIButton **)(this + 0xd8) = this_00;
  FUN_05476c50(awStack_28);
  nop();
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0xd8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishContent::Draw(Sexy::Graphics*) */

void __thiscall WishContent::Draw(WishContent *this,Graphics *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Image *pIVar7;
  long lVar8;
  LotteryResultProgressBar *pLVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  Image *local_40;
  int local_38;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03930);
  iVar3 = FUN_043bb090(3);
  iVar4 = FUN_043bb090(4);
  Sexy::Graphics::DrawImage
            (param_1,pIVar7,iVar3,*(int *)(this + 0x104),*(int *)(this + 0x50) - iVar4,
             *(int *)(this + 0x10c));
  pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03d40);
  iVar5 = FUN_043bb090(5);
  iVar3 = *(int *)(this + 0x104);
  iVar4 = *(int *)(this + 0x100);
  iVar10 = *(int *)(this + 0x10c);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03d40);
  iVar6 = *(int *)(lVar8 + 0x3c);
  iVar1 = *(int *)(this + 0x108);
  lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03d40);
  Sexy::Graphics::DrawImage
            (param_1,pIVar7,iVar4 - iVar5,iVar3 + (iVar10 - iVar6) / 2,iVar1,*(int *)(lVar8 + 0x3c))
  ;
  if (0.0 < *(float *)(this + 0xf0)) {
    iVar5 = FUN_043bb090(5);
    iVar3 = *(int *)(this + 0x10c);
    iVar4 = *(int *)(this + 0x100);
    iVar10 = *(int *)(this + 0x104);
    lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03980);
    iVar6 = *(int *)(lVar8 + 0x3c);
    iVar1 = *(int *)(this + 0x108);
    fVar11 = *(float *)(this + 0xf0);
    lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03980);
    Sexy::Insets::Insets
              (aIStack_28,iVar4 - iVar5,iVar10 + (iVar3 - iVar6) / 2,(int)((float)iVar1 * fVar11),
               *(int *)(lVar8 + 0x3c));
    lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03980);
    iVar3 = *(int *)(lVar8 + 0x38);
    fVar11 = *(float *)(this + 0xf0);
    lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03980);
    iVar4 = *(int *)(lVar8 + 0x38);
    fVar12 = *(float *)(this + 0xf0);
    lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03980);
    Sexy::Insets::Insets
              (aIStack_18,(int)((1.0 - fVar11) * (float)iVar3),0,(int)((float)iVar4 * fVar12),
               *(int *)(lVar8 + 0x3c));
    pIVar7 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03980);
    Sexy::Graphics::DrawImage(param_1,pIVar7,(TRect *)aIStack_28,(TRect *)aIStack_18);
  }
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  bVar2 = std::operator==((string *)(lVar8 + 0x78),"avatar");
  if (bVar2) {
    local_40 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03c20);
    iVar3 = *(int *)(this + 0x100);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03c20);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    local_38 = FUN_043bb090(1);
    local_38 = (iVar3 - iVar4) + local_38;
    iVar3 = *(int *)(this + 0x104);
    iVar4 = *(int *)(this + 0x10c);
    lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03c20);
    iVar10 = *(int *)(lVar8 + 0x3c);
  }
  else {
    local_40 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03650);
    iVar3 = *(int *)(this + 0x100);
    pLVar9 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03650);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
    local_38 = FUN_043bb090(1);
    local_38 = (iVar3 - iVar4) + local_38;
    iVar3 = *(int *)(this + 0x104);
    iVar4 = *(int *)(this + 0x10c);
    lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b03650);
    iVar10 = *(int *)(lVar8 + 0x3c);
  }
  iVar6 = FUN_043bb090(0);
  Sexy::Graphics::DrawImage(param_1,local_40,local_38,(iVar3 + (iVar4 - iVar10) / 2) - iVar6);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

