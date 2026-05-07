// Class: ArtifactCultivationItem


/* ArtifactCultivationItem::~ArtifactCultivationItem() */

void __thiscall ArtifactCultivationItem::~ArtifactCultivationItem(ArtifactCultivationItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06698820;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ArtifactCultivationItem::~ArtifactCultivationItem() */

void __thiscall ArtifactCultivationItem::~ArtifactCultivationItem(ArtifactCultivationItem *this)

{
  ~ArtifactCultivationItem(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactCultivationItem::OnSelectArtifact(int) */

void __thiscall ArtifactCultivationItem::OnSelectArtifact(ArtifactCultivationItem *this,int param_1)

{
  int iVar1;
  NameMapperBase *this_00;
  long lVar2;
  
  this_00 = (NameMapperBase *)ArtifactMapper::GetInstance();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  iVar1 = NameMapperBase::GetIdForName(this_00,(string *)(lVar2 + 0x10));
  this[0xd8] = (ArtifactCultivationItem)(param_1 == iVar1);
  return;
}


/* ArtifactCultivationItem::ArtifactCultivationItem() */

void __thiscall ArtifactCultivationItem::ArtifactCultivationItem(ArtifactCultivationItem *this)

{
  undefined *puVar1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xe8) = 0;
  this[0xd8] = (ArtifactCultivationItem)0x0;
  *(undefined ***)this = &PTR_GetClass_06698820;
  this[0xd9] = (ArtifactCultivationItem)0x0;
  this[0xda] = (ArtifactCultivationItem)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSelectArtifact);
  local_90 = local_68;
  local_a0 = local_78;
  uStack_98 = uStack_70;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ArtifactCultivationItem,void(ArtifactCultivationItem::*)(int)>>
            ((MessageRouter *)puVar1,Message::SelectArtifact,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnEquipArtifact);
  local_a0 = local_60;
  uStack_98 = uStack_58;
  local_90 = local_50;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ArtifactCultivationItem,void(ArtifactCultivationItem::*)(int)>>
            ((MessageRouter *)puVar1,Message::EquipArtifact,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUnEquipArtifact);
  local_90 = local_38;
  local_a0 = local_48;
  uStack_98 = uStack_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<ArtifactCultivationItem,void(ArtifactCultivationItem::*)(int)>>
            ((MessageRouter *)puVar1,Message::UnEquipArtifact,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnArtifactLevelUp);
  local_c0 = local_30;
  uStack_b8 = uStack_28;
  local_b0 = local_20;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<ArtifactCultivationItem,void(ArtifactCultivationItem::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::ArtifactLevelUp,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnArtifactRankUp);
  local_b0 = local_8;
  local_c0 = local_18;
  uStack_b8 = uStack_10;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<ArtifactCultivationItem,void(ArtifactCultivationItem::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::ArtifactRankUp,&local_c0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationItem::RefreshData() */

void __thiscall ArtifactCultivationItem::RefreshData(ArtifactCultivationItem *this)

{
  ArtifactCultivationItem AVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  long lVar4;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  this_02 = (NameMapperBase *)ArtifactMapper::GetInstance();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  iVar2 = NameMapperBase::GetIdForName(this_02,(string *)(lVar4 + 0x10));
  lVar4 = LawnApp::GetArtifactCultivationListView(gLawnApp);
  if (lVar4 == 0) {
    AVar1 = (ArtifactCultivationItem)0x0;
  }
  else {
    iVar3 = FUN_037ac538(*(undefined4 *)(lVar4 + 0xe8));
    AVar1 = (ArtifactCultivationItem)(iVar2 == iVar3);
  }
  this[0xd8] = AVar1;
  iVar3 = PlayerInfo::GetCurrentArtifact(this_01);
  this[0xd9] = (ArtifactCultivationItem)(iVar2 == iVar3);
  PlayerInfo::GetArtifactInfoByID((int)this_01);
  if (local_48 == iVar2) {
    *(undefined4 *)(this + 0xdc) = local_44;
    *(undefined4 *)(this + 0xe0) = local_40;
  }
  this[0xda] = (ArtifactCultivationItem)(local_48 == iVar2);
  ArtifactInfo::~ArtifactInfo((ArtifactInfo *)&local_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationItem::InitView(Sexy::RtWeakPtr<ArtifactProperties>) */

void __thiscall ArtifactCultivationItem::InitView(ArtifactCultivationItem *this,RtWeakPtr *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xf0),param_2);
  auVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::StringToUpper((Sexy *)(auVar2._0_8_ + 0x10),auVar2._8_8_);
  std::operator+("IMAGE_UI_ARTIFACT_",asStack_18);
  uVar1 = StringHelper::ToImage(asStack_10,false);
  *(undefined8 *)(this + 0xe8) = uVar1;
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  RefreshData(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationItem::OnEquipArtifact(int) */

void ArtifactCultivationItem::OnEquipArtifact(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  NameMapperBase *this_01;
  long lVar4;
  ulong uVar5;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  long lStack_8;
  
  uVar5 = (ulong)(uint)param_1;
  lStack_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  this_01 = (NameMapperBase *)ArtifactMapper::GetInstance();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(uVar5 + 0xf0));
  iVar2 = NameMapperBase::GetIdForName(this_01,(string *)(lVar4 + 0x10));
  lVar4 = LawnApp::GetArtifactCultivationListView(gLawnApp);
  if (lVar4 == 0) {
    bVar1 = false;
  }
  else {
    iVar3 = FUN_037ac538(*(undefined4 *)(lVar4 + 0xe8));
    bVar1 = iVar2 == iVar3;
  }
  *(bool *)(uVar5 + 0xd8) = bVar1;
  iVar3 = PlayerInfo::GetCurrentArtifact(this_00);
  *(bool *)(uVar5 + 0xd9) = iVar2 == iVar3;
  PlayerInfo::GetArtifactInfoByID((int)this_00);
  if (iStack_48 == iVar2) {
    *(undefined4 *)(uVar5 + 0xdc) = uStack_44;
    *(undefined4 *)(uVar5 + 0xe0) = uStack_40;
  }
  *(bool *)(uVar5 + 0xda) = iStack_48 == iVar2;
  ArtifactInfo::~ArtifactInfo((ArtifactInfo *)&iStack_48);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationItem::OnUnEquipArtifact(int) */

void ArtifactCultivationItem::OnUnEquipArtifact(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  NameMapperBase *this_01;
  long lVar4;
  ulong uVar5;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  long lStack_8;
  
  uVar5 = (ulong)(uint)param_1;
  lStack_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  this_01 = (NameMapperBase *)ArtifactMapper::GetInstance();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(uVar5 + 0xf0));
  iVar2 = NameMapperBase::GetIdForName(this_01,(string *)(lVar4 + 0x10));
  lVar4 = LawnApp::GetArtifactCultivationListView(gLawnApp);
  if (lVar4 == 0) {
    bVar1 = false;
  }
  else {
    iVar3 = FUN_037ac538(*(undefined4 *)(lVar4 + 0xe8));
    bVar1 = iVar2 == iVar3;
  }
  *(bool *)(uVar5 + 0xd8) = bVar1;
  iVar3 = PlayerInfo::GetCurrentArtifact(this_00);
  *(bool *)(uVar5 + 0xd9) = iVar2 == iVar3;
  PlayerInfo::GetArtifactInfoByID((int)this_00);
  if (iStack_48 == iVar2) {
    *(undefined4 *)(uVar5 + 0xdc) = uStack_44;
    *(undefined4 *)(uVar5 + 0xe0) = uStack_40;
  }
  *(bool *)(uVar5 + 0xda) = iStack_48 == iVar2;
  ArtifactInfo::~ArtifactInfo((ArtifactInfo *)&iStack_48);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationItem::OnArtifactLevelUp(bool, int) */

void ArtifactCultivationItem::OnArtifactLevelUp(bool param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  NameMapperBase *this_01;
  long lVar4;
  ulong uVar5;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  long lStack_8;
  
  uVar5 = (ulong)param_1;
  lStack_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  this_01 = (NameMapperBase *)ArtifactMapper::GetInstance();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(uVar5 + 0xf0));
  iVar2 = NameMapperBase::GetIdForName(this_01,(string *)(lVar4 + 0x10));
  lVar4 = LawnApp::GetArtifactCultivationListView(gLawnApp);
  if (lVar4 == 0) {
    bVar1 = false;
  }
  else {
    iVar3 = FUN_037ac538(*(undefined4 *)(lVar4 + 0xe8));
    bVar1 = iVar2 == iVar3;
  }
  *(bool *)(uVar5 + 0xd8) = bVar1;
  iVar3 = PlayerInfo::GetCurrentArtifact(this_00);
  *(bool *)(uVar5 + 0xd9) = iVar2 == iVar3;
  PlayerInfo::GetArtifactInfoByID((int)this_00);
  if (iStack_48 == iVar2) {
    *(undefined4 *)(uVar5 + 0xdc) = uStack_44;
    *(undefined4 *)(uVar5 + 0xe0) = uStack_40;
  }
  *(bool *)(uVar5 + 0xda) = iStack_48 == iVar2;
  ArtifactInfo::~ArtifactInfo((ArtifactInfo *)&iStack_48);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationItem::OnArtifactRankUp(bool, int) */

void ArtifactCultivationItem::OnArtifactRankUp(bool param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  NameMapperBase *this_01;
  long lVar4;
  ulong uVar5;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  long lStack_8;
  
  uVar5 = (ulong)param_1;
  lStack_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  this_01 = (NameMapperBase *)ArtifactMapper::GetInstance();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(uVar5 + 0xf0));
  iVar2 = NameMapperBase::GetIdForName(this_01,(string *)(lVar4 + 0x10));
  lVar4 = LawnApp::GetArtifactCultivationListView(gLawnApp);
  if (lVar4 == 0) {
    bVar1 = false;
  }
  else {
    iVar3 = FUN_037ac538(*(undefined4 *)(lVar4 + 0xe8));
    bVar1 = iVar2 == iVar3;
  }
  *(bool *)(uVar5 + 0xd8) = bVar1;
  iVar3 = PlayerInfo::GetCurrentArtifact(this_00);
  *(bool *)(uVar5 + 0xd9) = iVar2 == iVar3;
  PlayerInfo::GetArtifactInfoByID((int)this_00);
  if (iStack_48 == iVar2) {
    *(undefined4 *)(uVar5 + 0xdc) = uStack_44;
    *(undefined4 *)(uVar5 + 0xe0) = uStack_40;
  }
  *(bool *)(uVar5 + 0xda) = iStack_48 == iVar2;
  ArtifactInfo::~ArtifactInfo((ArtifactInfo *)&iStack_48);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactCultivationItem::TouchEnded(Sexy::Touch const&) */

void __thiscall ArtifactCultivationItem::TouchEnded(ArtifactCultivationItem *this,Touch *param_1)

{
  undefined *this_00;
  int iVar1;
  NameMapperBase *this_01;
  long lVar2;
  
  this_00 = gMessageRouter;
  if (*(int *)(this + 0xd4) != (int)*(undefined8 *)param_1) {
    return;
  }
  this_01 = (NameMapperBase *)ArtifactMapper::GetInstance();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  iVar1 = NameMapperBase::GetIdForName(this_01,(string *)(lVar2 + 0x10));
  MessageRouter::Post<int,int>((MessageRouter *)this_00,Message::SelectArtifact,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactCultivationItem::Draw(Sexy::Graphics*) */

void __thiscall ArtifactCultivationItem::Draw(ArtifactCultivationItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  undefined8 uVar6;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  Image *local_60;
  string asStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab03e8);
  Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  if (*(long *)(this + 0xe8) != 0) {
    iVar1 = FUN_037ad3c8(5);
    iVar2 = FUN_037ad3c8(10);
    Sexy::Insets::Insets
              (aIStack_18,iVar1,iVar1,*(int *)(this + 0x50) - iVar2,*(int *)(this + 0x54) - iVar2);
    DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe8));
  }
  if (this[0xda] == (ArtifactCultivationItem)0x0) goto LAB_037ba1d0;
  iVar1 = *(int *)(this + 0xdc);
  if (iVar1 == 1) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0520;
    goto LAB_037ba290;
  }
  if (iVar1 == 2) {
    local_60 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab06f0);
    iVar1 = FUN_037ad3c8(0x20);
    iVar1 = *(int *)(this + 0x50) - iVar1;
LAB_037ba2b0:
    iVar2 = FUN_037ad3c8(2);
    iVar3 = FUN_037ad3c8(0x1e);
    iVar4 = FUN_037ad3c8(0x23);
    Sexy::Graphics::DrawImage(param_1,local_60,iVar1,iVar2,iVar3,iVar4);
  }
  else {
    if (iVar1 == 3) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0620;
LAB_037ba290:
      local_60 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
      iVar1 = FUN_037ad3c8(0x20);
      iVar1 = *(int *)(this + 0x50) - iVar1;
      goto LAB_037ba2b0;
    }
    if (iVar1 == 4) {
      this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0888;
      goto LAB_037ba290;
    }
  }
  std::to_string<ActivityTypeID>((ActivityTypeID *)(this + 0xe0));
  Sexy::ToWString(asStack_38);
  iVar1 = FUN_037ad3c8(0x1e);
  Sexy::Insets::Insets
            (aIStack_28,*(int *)(this + 0x50) - iVar1,*(int *)(this + 0x54) - iVar1,iVar1,iVar1);
  uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_30,aIStack_28,uVar6,(Color *)aIStack_18,5,1);
  FUN_05476c50(auStack_30);
  std::string::~string(asStack_38);
LAB_037ba1d0:
  if (this[0xd8] != (ArtifactCultivationItem)0x0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0410);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  if (this[0xd9] != (ArtifactCultivationItem)0x0) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ab0498);
    iVar1 = FUN_037ad3c8(10);
    iVar2 = FUN_037ad3c8(0x14);
    Sexy::Graphics::DrawImage
              (param_1,pIVar5,iVar1,iVar1,*(int *)(this + 0x50) - iVar2,
               *(int *)(this + 0x54) - iVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

