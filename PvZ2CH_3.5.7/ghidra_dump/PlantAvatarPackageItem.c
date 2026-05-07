// Class: PlantAvatarPackageItem


/* PlantAvatarPackageItem::TouchBegan(Sexy::Touch const&) */

void __thiscall PlantAvatarPackageItem::TouchBegan(PlantAvatarPackageItem *this,Touch *param_1)

{
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)param_1;
  return;
}


/* PlantAvatarPackageItem::~PlantAvatarPackageItem() */

void __thiscall PlantAvatarPackageItem::~PlantAvatarPackageItem(PlantAvatarPackageItem *this)

{
  *(undefined ***)this = &PTR_GetClass_06840ae0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x120);
  FUN_05476c50(this + 0x118);
  FUN_05476c50(this + 0x108);
  FUN_05476c50(this + 0x100);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantAvatarPackageItem::~PlantAvatarPackageItem() */

void __thiscall PlantAvatarPackageItem::~PlantAvatarPackageItem(PlantAvatarPackageItem *this)

{
  ~PlantAvatarPackageItem(this);
  AK::FreeHook(this);
  return;
}


/* PlantAvatarPackageItem::UpdateState() */

void __thiscall PlantAvatarPackageItem::UpdateState(PlantAvatarPackageItem *this)

{
  RtMixedPtrBase *pRVar1;
  char cVar2;
  PlantAvatarPackageItem PVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *pNVar5;
  long lVar6;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this[0x110] == (PlantAvatarPackageItem)0x0) {
    pRVar1 = (RtMixedPtrBase *)(this + 0xf0);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
    if (cVar2 != '\0') {
      pNVar5 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      iVar4 = NameMapperBase::GetIdForName(pNVar5,(string *)(lVar6 + 0x20));
      PVar3 = (PlantAvatarPackageItem)PlayerInfo::IsPlantNewAvatarUnLocked(this_01,iVar4);
      this[0x111] = PVar3;
      PVar3 = (PlantAvatarPackageItem)PlayerInfo::IsEquipAvatar(this_01,iVar4);
      this[0x112] = PVar3;
      if (this[0x111] == (PlantAvatarPackageItem)0x0) {
        pNVar5 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        iVar4 = NameMapperBase::GetIdForName(pNVar5,(string *)(lVar6 + 0x20));
        iVar4 = PlayerInfo::GetNewAvatarPiecesCount(this_01,iVar4);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        this[0x113] = (PlantAvatarPackageItem)(*(int *)(lVar6 + 0x28) <= iVar4);
      }
    }
  }
  else {
    pRVar1 = (RtMixedPtrBase *)(this + 0xe8);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(pRVar1);
    if (cVar2 != '\0') {
      pNVar5 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      iVar4 = NameMapperBase::GetIdForName(pNVar5,(string *)(lVar6 + 0x80));
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      PVar3 = (PlantAvatarPackageItem)PlayerInfo::IsPlantAvatarUnLocked(this_01,lVar6 + 0x80,0,0);
      this[0x111] = PVar3;
      PVar3 = (PlantAvatarPackageItem)PlayerInfo::IsEquipAvatar(this_01,iVar4);
      this[0x112] = PVar3;
      if (this[0x111] == (PlantAvatarPackageItem)0x0) {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
        PVar3 = (PlantAvatarPackageItem)
                PlayerInfo::IsPlantAvatarPiecesFull(this_01,lVar6 + 0x80,0,0);
        this[0x113] = PVar3;
      }
    }
  }
  return;
}


/* PlantAvatarPackageItem::OnSelectItem() */

void __thiscall PlantAvatarPackageItem::OnSelectItem(PlantAvatarPackageItem *this)

{
  this[0x128] = (PlantAvatarPackageItem)0x0;
  UpdateState(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarPackageItem::InitDialog() */

void __thiscall PlantAvatarPackageItem::InitDialog(PlantAvatarPackageItem *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  string *psVar7;
  NameMapperBase *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  long lVar9;
  bool extraout_w1;
  undefined1 auVar10 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_60 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  wstring awStack_50 [8];
  wstring awStack_48 [8];
  wstring awStack_40 [8];
  wstring awStack_38 [8];
  wstring awStack_30 [8];
  wstring awStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this[0x110] == (PlantAvatarPackageItem)0x0) {
    auVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
    Sexy::StringToUpper((Sexy *)(auVar10._0_8_ + 0x20),auVar10._8_8_);
    std::operator+("IMAGE_UI_NEWAVATAR_AVATARS_",(string *)&local_18);
    uVar4 = StringHelper::ToImage((string *)&local_10,false);
    *(undefined8 *)(this + 0xe0) = uVar4;
    std::string::~string((string *)&local_10);
    std::string::~string((string *)&local_18);
    this_02 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0))
    ;
    iVar3 = NameMapperBase::GetIdForName(this_02,(string *)(lVar5 + 0x20));
    NewAvatar::GetAvatarInfoByAvatarPieceId(iVar3);
    uVar6 = PlayerInfo::GetNewAvatarPiecesCount(this_01,iVar3);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    Sexy::StrFormat(L"%02d / %02d",(string *)&local_10,uVar6 & 0xffffffff,
                    (ulong)*(uint *)(lVar5 + 0x28));
    FUN_054766c8(this + 0x100,(string *)&local_10);
    FUN_05476c50((string *)&local_10);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    Sexy::ToWString((string *)(lVar5 + 0x48));
    TodStringTranslate((wstring *)&local_18);
    FUN_054766c8(this + 0x108,(string *)&local_10);
    FUN_05476c50((string *)&local_10);
    FUN_05476c50((string *)&local_18);
    iVar3 = PlayerInfo::GetNewAvatarPiecesCount(this_01,iVar3);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    *(float *)(this + 0xf8) = (float)iVar3 / (float)*(int *)(lVar5 + 0x28);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_60);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_58);
    Magento::GetPlantPieceProductsData((Magento *)0x1,extraout_w1);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_58,(RtWeakPtr *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar5 + 0x60));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(lVar5 + 0x60));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      cVar2 = std::operator==((string *)(lVar5 + 0x80),(string *)(lVar9 + 0x18));
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_60,(RtWeakPtr *)pRVar8);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    Sexy::StrFormat(L"\n",awStack_50);
    TodStringTranslate(L"[NEW_AVATAR_BUFF]");
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    Sexy::ToWString((string *)(lVar5 + 0x50));
    TodStringTranslate(awStack_40);
    std::operator+(awStack_48,awStack_38);
    std::operator+(awStack_30,awStack_50);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_60);
    psVar7 = (string *)FUN_043a1440(*(undefined8 *)(lVar5 + 0x38));
    Sexy::ToWString(psVar7);
    TodStringTranslate((wstring *)asStack_20);
    std::operator+(awStack_28,(wstring *)&local_18);
    FUN_054766c8(this + 0x118,(string *)&local_10);
    FUN_05476c50((string *)&local_10);
    FUN_05476c50((string *)&local_18);
    FUN_05476c50((wstring *)asStack_20);
    FUN_05476c50(awStack_28);
    FUN_05476c50(awStack_30);
    FUN_05476c50(awStack_38);
    FUN_05476c50(awStack_40);
    FUN_05476c50(awStack_48);
    TodStringTranslate(L"[NEW_AVATAR_GET]");
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    Sexy::ToWString((string *)(lVar5 + 0x58));
    TodStringTranslate((wstring *)asStack_20);
    std::operator+(awStack_28,(wstring *)&local_18);
    FUN_054766c8(this + 0x120,(string *)&local_10);
    FUN_05476c50((string *)&local_10);
    FUN_05476c50((string *)&local_18);
    FUN_05476c50((wstring *)asStack_20);
    FUN_05476c50(awStack_28);
    FUN_05476c50(awStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  }
  else {
    pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8);
    auVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
    Sexy::StringToUpper((Sexy *)(auVar10._0_8_ + 0x80),auVar10._8_8_);
    std::operator+("IMAGE_UI_NEWAVATAR_AVATARS_",(string *)&local_18);
    uVar4 = StringHelper::ToImage((string *)&local_10,false);
    *(undefined8 *)(this + 0xe0) = uVar4;
    std::string::~string((string *)&local_10);
    std::string::~string((string *)&local_18);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
    uVar6 = PlayerInfo::GetAvatarPiecesCount(this_01,lVar5 + 0x80,0,0);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
    Sexy::StrFormat(L"%02d / %02d",(string *)&local_10,uVar6 & 0xffffffff,
                    (ulong)*(uint *)(lVar5 + 0x90));
    FUN_054766c8(this + 0x100,(string *)&local_10);
    FUN_05476c50((string *)&local_10);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
    iVar3 = PlayerInfo::GetAvatarPiecesCount(this_01,lVar5 + 0x80,0,0);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
    *(float *)(this + 0xf8) = (float)iVar3 / (float)*(int *)(lVar5 + 0x90);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
    MagentoProductProps::GetLocalizedShortDescription();
    Sexy::ToWString(asStack_20);
    TodStringTranslate((wstring *)&local_18);
    FUN_054766c8(this + 0x108,(string *)&local_10);
    FUN_05476c50((string *)&local_10);
    FUN_05476c50((string *)&local_18);
    std::string::~string(asStack_20);
    TodStringTranslate(L"[NEW_AVATAR_BUFF]");
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
    psVar7 = (string *)FUN_043a1440(*(undefined8 *)(lVar5 + 0x38));
    Sexy::ToWString(psVar7);
    TodStringTranslate((wstring *)asStack_20);
    std::operator+(awStack_28,(wstring *)&local_18);
    FUN_054766c8(this + 0x118,(string *)&local_10);
    FUN_05476c50((string *)&local_10);
    FUN_05476c50((string *)&local_18);
    FUN_05476c50(asStack_20);
    FUN_05476c50(awStack_28);
    TodStringTranslate(L"[NEW_AVATAR_GET]");
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
    Sexy::ToWString((string *)(lVar5 + 0xe8));
    TodStringTranslate((wstring *)asStack_20);
    std::operator+(awStack_28,(wstring *)&local_18);
    FUN_054766c8(this + 0x120,(string *)&local_10);
    FUN_05476c50((string *)&local_10);
    FUN_05476c50((string *)&local_18);
    FUN_05476c50(asStack_20);
    FUN_05476c50(awStack_28);
  }
  if (1.0 < *(float *)(this + 0xf8)) {
    *(undefined4 *)(this + 0xf8) = 0x3f800000;
  }
  if (*(long *)(this + 0xe0) == 0) {
    std::string::string((string *)&local_10,"IMAGE_UI_NEWAVATAR_AVATARS_DEFAULT");
    uVar4 = StringHelper::ToImage((string *)&local_10,false);
    *(undefined8 *)(this + 0xe0) = uVar4;
    std::string::~string((string *)&local_10);
    nop();
  }
  UpdateState(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAvatarPackageItem::setOldInfo(Sexy::RtWeakPtr<MagentoProductProps>) */

void __thiscall PlantAvatarPackageItem::setOldInfo(PlantAvatarPackageItem *this,RtWeakPtr *param_2)

{
  this[0x110] = (PlantAvatarPackageItem)0x1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xe8),param_2);
  InitDialog(this);
  return;
}


/* PlantAvatarPackageItem::setNewInfo(Sexy::RtWeakPtr<PlantNewAvatar>) */

void __thiscall PlantAvatarPackageItem::setNewInfo(PlantAvatarPackageItem *this,RtWeakPtr *param_2)

{
  this[0x110] = (PlantAvatarPackageItem)0x0;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xf0),param_2);
  InitDialog(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarPackageItem::PlantAvatarPackageItem() */

void __thiscall PlantAvatarPackageItem::PlantAvatarPackageItem(PlantAvatarPackageItem *this)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  CBMemberTranslatorX aCStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06840ae0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xf0));
  FUN_05476574(this + 0x100);
  FUN_05476574(this + 0x108);
  FUN_05476574(this + 0x118);
  FUN_05476574(this + 0x120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,UpdateState);
  Sexy::Delegate0::Delegate0<PlantAvatarPackageItem,void(PlantAvatarPackageItem::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::RefreshAvatarItemData,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifityRequsetExchangeNewAvatar);
  local_90 = local_58;
  local_a0 = local_68;
  uStack_98 = uStack_60;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<PlantAvatarPackageItem,void(PlantAvatarPackageItem::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::NotifyUnlockNewAvatar,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifityRequsetTicketExchangeNewAvatar);
  local_a0 = local_50;
  uStack_98 = uStack_48;
  local_90 = local_40;
  MessageRouter::
  Subscribe<bool,int,Sexy::CBMemberTranslatorX<PlantAvatarPackageItem,void(PlantAvatarPackageItem::*)(bool,int)>>
            ((MessageRouter *)puVar1,Message::NotifyExchangeNewAvatar,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnSelectItem);
  Sexy::Delegate0::Delegate0<PlantAvatarPackageItem,void(PlantAvatarPackageItem::*)()>
            (aDStack_38,aCStack_80);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::SelectItemAvatar,aDStack_38);
  this[0x110] = (PlantAvatarPackageItem)0x0;
  lVar2 = ___stack_chk_guard;
  this[0x111] = (PlantAvatarPackageItem)0x0;
  this[0x112] = (PlantAvatarPackageItem)0x0;
  this[0x113] = (PlantAvatarPackageItem)0x0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  this[0x128] = (PlantAvatarPackageItem)0x0;
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAvatarPackageItem::selectAvatar() */

void __thiscall PlantAvatarPackageItem::selectAvatar(PlantAvatarPackageItem *this)

{
  UpdateState(this);
  MessageRouter::Post<PlantAvatarPackageItem*,PlantAvatarPackageItem*>
            ((MessageRouter *)gMessageRouter,Message::SelectAvatarItem,this);
  MessageRouter::Post((_func_void *)gMessageRouter);
  this[0x128] = (PlantAvatarPackageItem)0x1;
  return;
}


/* PlantAvatarPackageItem::TouchEnded(Sexy::Touch const&) */

void __thiscall PlantAvatarPackageItem::TouchEnded(PlantAvatarPackageItem *this,Touch *param_1)

{
  if (*(long *)(this + 0xd8) != *(long *)param_1) {
    return;
  }
  selectAvatar(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarPackageItem::EquipAvatar() */

void __thiscall PlantAvatarPackageItem::EquipAvatar(PlantAvatarPackageItem *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *pNVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this[0x110] == (PlantAvatarPackageItem)0x0) {
    pNVar2 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0))
    ;
    iVar1 = NameMapperBase::GetIdForName(pNVar2,(string *)(lVar3 + 0x20));
    PlayerInfo::EquipAvatar(this_01,iVar1);
    NewAvatar::GetAvatarInfoByAvatarId(iVar1);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::EquipAvatar,*(int *)(lVar3 + 0x10));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    pNVar2 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8))
    ;
    iVar1 = NameMapperBase::GetIdForName(pNVar2,(string *)(lVar3 + 0x80));
    PlayerInfo::EquipAvatar(this_01,iVar1);
    MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::EquipAvatar,0);
  }
  selectAvatar(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAvatarPackageItem::UnEquipAvatar() */

void __thiscall PlantAvatarPackageItem::UnEquipAvatar(PlantAvatarPackageItem *this)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  NameMapperBase *this_02;
  long lVar2;
  string *psVar3;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this[0x110] == (PlantAvatarPackageItem)0x0) {
    this_02 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0))
    ;
    psVar3 = (string *)(lVar2 + 0x20);
  }
  else {
    this_02 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8))
    ;
    psVar3 = (string *)(lVar2 + 0x80);
  }
  iVar1 = NameMapperBase::GetIdForName(this_02,psVar3);
  PlayerInfo::UnEquipAvatar(this_01,iVar1);
  MessageRouter::Post<int,int>((MessageRouter *)gMessageRouter,Message::EquipAvatar,-1);
  selectAvatar(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarPackageItem::ExchangeAvatar() */

void __thiscall PlantAvatarPackageItem::ExchangeAvatar(PlantAvatarPackageItem *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  LawnApp *pLVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ProfileMgr *this_01;
  PlayerInfo *pPVar5;
  long lVar6;
  string *psVar7;
  NameMapperBase *pNVar8;
  NetworkMgr *pNVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  string *in_x4;
  RtMixedPtrBase aRStack_28 [8];
  string asStack_20 [8];
  int local_18 [2];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar5 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this[0x110] == (PlantAvatarPackageItem)0x0) {
    pNVar8 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0))
    ;
    uVar3 = NameMapperBase::GetIdForName(pNVar8,(string *)(lVar6 + 0x20));
    pNVar9 = (NetworkMgr *)NetworkMgr::Instance();
    plVar10 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar9);
    (**(code **)(*plVar10 + 0x1b0))(plVar10,uVar3);
  }
  else {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PlayerInfo::UnlockPlantAvatar(pPVar5,lVar6 + 0x80,0);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PlayerInfo::SetPlantAvatar(pPVar5,lVar6 + 0x80,0);
    std::string::string(asStack_20,"iOS PvZ2 Avatar Store");
    std::string::string((string *)local_18,"Avatars");
    std::string::string((string *)local_10,"avatar");
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    Magento::FindStoreProduct
              ((Magento *)asStack_20,(string *)local_18,(string *)local_10,(string *)(lVar6 + 0x80),
               in_x4);
    std::string::~string((string *)local_10);
    nop();
    std::string::~string((string *)local_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar2 != '\0') {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      iVar4 = PlayerInfo::GetAvatarPiecesCount(pPVar5,lVar11 + 0x80,0,0);
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
      ;
      local_18[0] = iVar4 - *(int *)(lVar11 + 0x90);
      local_10[0] = 0;
      piVar12 = eastl::max_alt<int>(local_18,(int *)local_10);
      PlayerInfo::SetAvatarPieces(pPVar5,lVar6 + 0x80,0,*piVar12,1,1);
    }
    pLVar1 = gLawnApp;
    psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    MagentoProductProps::GetLocalizedShortDescription();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    MagentoProductProps::GetLocalizedDescription();
    LawnApp::ShowAvatarRewardDialog(pLVar1,asStack_20,(string *)local_18,(string *)local_10,0,0,0,0)
    ;
    std::string::~string((string *)local_10);
    std::string::~string((string *)local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
    selectAvatar(this);
    pNVar8 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar3 = NameMapperBase::GetIdForName(pNVar8,(string *)(lVar6 + 0x80));
    pNVar9 = (NetworkMgr *)NetworkMgr::Instance();
    plVar10 = (long *)NetworkMgr::GetNewNetWorkProcess(pNVar9);
    (**(code **)(*plVar10 + 0x1b0))(plVar10,uVar3);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarPackageItem::Draw(Sexy::Graphics*) */

void __thiscall PlantAvatarPackageItem::Draw(PlantAvatarPackageItem *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Image *pIVar6;
  long lVar7;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  CachedUIResourcePtr<Sexy::Image> *this_00;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_043a19d8(0x82);
  iVar2 = FUN_043a19d8(0x14);
  Sexy::Insets::Insets(aIStack_28,0,0,iVar1,iVar2);
  uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_18);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x108,aIStack_28,uVar5,aIStack_18,2,1);
  if (this[0x111] == (PlantAvatarPackageItem)0x0) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00b98;
  }
  else if (this[0x112] == (PlantAvatarPackageItem)0x0) {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b011b0;
  }
  else {
    this_00 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01490;
  }
  pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(this_00);
  iVar1 = FUN_043a19d8(0x14);
  iVar2 = FUN_043a19d8(0x19);
  iVar3 = FUN_043a19d8(0x5a);
  Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar3);
  iVar1 = FUN_043a19d8(0x1e);
  iVar2 = FUN_043a19d8(0x28);
  iVar3 = FUN_043a19d8(0x46);
  Sexy::Insets::Insets(aIStack_18,iVar1,iVar2,iVar3,iVar3);
  DrawAdaptiveImage(param_1,aIStack_18,*(undefined8 *)(this + 0xe0));
  if (this[0x111] == (PlantAvatarPackageItem)0x0) {
    TodStringTranslate(L"[NEW_AVATAR_NOT_ACQUIRED]");
    iVar1 = FUN_043a19d8(0);
    iVar2 = FUN_043a19d8(0x32);
    iVar3 = FUN_043a19d8(0x1e);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_20_Outline);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,5,1);
    FUN_05476c50(auStack_30);
  }
  else {
    if (this[0x112] == (PlantAvatarPackageItem)0x0) goto LAB_043aaf7c;
    TodStringTranslate(L"[NEW_AVATAR_EQUIPED]");
    iVar1 = FUN_043a19d8(0);
    iVar2 = FUN_043a19d8(0x32);
    iVar3 = FUN_043a19d8(0x1e);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,*(int *)(this + 0x50),iVar3);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_20_Outline);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar5,aIStack_18,5,1);
    FUN_05476c50(auStack_30);
  }
  if (this[0x111] == (PlantAvatarPackageItem)0x0) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b019a0);
    iVar1 = FUN_043a19d8(10);
    iVar2 = FUN_043a19d8(0x6e);
    iVar3 = FUN_043a19d8(0x14);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar3);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b019a0);
    iVar1 = *(int *)(lVar7 + 0x38);
    lVar7 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b019a0);
    Sexy::Insets::Insets(aIStack_18,0,0,iVar1,*(int *)(lVar7 + 0x3c));
    Sexy::Graphics::DrawImage(param_1,pIVar6,(TRect *)aIStack_28,(TRect *)aIStack_18);
    if (0.0 <= *(float *)(this + 0xf8)) {
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01468);
      iVar1 = FUN_043a19d8(0x1e);
      iVar2 = FUN_043a19d8(0x6e);
      iVar3 = FUN_043a19d8(0x5a);
      iVar4 = FUN_043a19d8(0x14);
      Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar4);
      pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b00f60);
      iVar1 = FUN_043a19d8(0x1e);
      iVar2 = FUN_043a19d8(0x6e);
      iVar3 = FUN_043a19d8(0x5a);
      iVar4 = FUN_043a19d8(0x14);
      Sexy::Graphics::DrawImage
                (param_1,pIVar6,iVar1,iVar2,(int)((float)iVar3 * *(float *)(this + 0xf8)),iVar4);
    }
    iVar1 = FUN_043a19d8(0x1e);
    iVar2 = FUN_043a19d8(0x6e);
    iVar3 = FUN_043a19d8(0x5a);
    iVar4 = FUN_043a19d8(0x14);
    Sexy::Insets::Insets(aIStack_28,iVar1,iVar2,iVar3,iVar4);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_26);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,this + 0x100,aIStack_28,uVar5,aIStack_18,5,1);
  }
LAB_043aaf7c:
  if (this[0x128] != (PlantAvatarPackageItem)0x0) {
    pIVar6 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b01318);
    iVar1 = FUN_043a19d8(0xf);
    iVar2 = FUN_043a19d8(0x14);
    iVar3 = FUN_043a19d8(100);
    Sexy::Graphics::DrawImage(param_1,pIVar6,iVar1,iVar2,iVar3,iVar3);
  }
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarPackageItem::OnNotifityRequsetExchangeNewAvatar(bool, int) */

void __thiscall
PlantAvatarPackageItem::OnNotifityRequsetExchangeNewAvatar
          (PlantAvatarPackageItem *this,bool param_1,int param_2)

{
  uint uVar1;
  LawnApp *pLVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  NameMapperBase *pNVar6;
  long lVar7;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  char *pcVar8;
  TGALogMgr *this_02;
  string *psVar9;
  long lVar10;
  long lVar11;
  size_t __n;
  int local_64;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [16];
  string asStack_48 [8];
  string asStack_40 [16];
  string asStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x110] == (PlantAvatarPackageItem)0x0) {
    pNVar6 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0))
    ;
    iVar3 = NameMapperBase::GetIdForName(pNVar6,(string *)(lVar7 + 0x20));
  }
  else {
    pNVar6 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
    lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8))
    ;
    iVar3 = NameMapperBase::GetIdForName(pNVar6,(string *)(lVar7 + 0x80));
  }
  if (param_2 == iVar3) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar3 = PlayerInfo::GetWhichAvatarType((int)this_01);
    if (iVar3 == 2) {
      if (param_1) {
        MessageRouter::Post((_func_void *)gMessageRouter);
        PlayerInfo::UnlockNewAvatar(this_01,param_2);
        NewAvatar::GetAvatarInfoByAvatarId(param_2);
        pNVar6 = (NameMapperBase *)PlantNewAvatarPieceMapper::GetInstance();
        iVar4 = PlantNewAvatarMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar4);
        iVar4 = NameMapperBase::GetIdForName(pNVar6,asStack_48);
        std::string::~string(asStack_48);
        iVar5 = PlayerInfo::GetNewAvatarPiecesCount(this_01,iVar4);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        uVar1 = iVar5 - *(int *)(lVar7 + 0x28);
        __n = (size_t)uVar1;
        PlayerInfo::SetNewAvatarPiecesCount(this_01,iVar4,uVar1);
        TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)asStack_48);
        local_64 = iVar3;
        FUN_043a125c(asStack_58,&local_64);
        FUN_05474278(asStack_48,asStack_58);
        std::string::~string(asStack_58);
        DString::DString((DString *)asStack_58,iVar4);
        pcVar8 = (char *)DString::c_str((DString *)asStack_58);
        std::string::append(asStack_40,pcVar8,__n);
        DString::~DString((DString *)asStack_58);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        DString::DString((DString *)asStack_58,*(int *)(lVar7 + 0x28));
        pcVar8 = (char *)DString::c_str((DString *)asStack_58);
        std::string::append(asStack_30,pcVar8,__n);
        DString::~DString((DString *)asStack_58);
        this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogDecorateData(this_02,(TGALogPlantDecorate *)asStack_48);
        selectAvatar(this);
        pLVar2 = gLawnApp;
        psVar9 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar9);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        LawnApp::ShowAvatarRewardDialog
                  (pLVar2,asStack_58,lVar7 + 0x48,lVar10 + 0x50,0,0,0,*(undefined4 *)(lVar11 + 0x10)
                  );
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58)
        ;
        TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)asStack_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      }
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAvatarPackageItem::OnNotifityRequsetTicketExchangeNewAvatar(bool, int) */

void __thiscall
PlantAvatarPackageItem::OnNotifityRequsetTicketExchangeNewAvatar
          (PlantAvatarPackageItem *this,bool param_1,int param_2)

{
  LawnApp *pLVar1;
  int iVar2;
  NameMapperBase *pNVar3;
  long lVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  char *__s;
  TGALogMgr *this_02;
  string *psVar5;
  long lVar6;
  long lVar7;
  size_t sVar8;
  int local_64;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [16];
  TGAPlantWarsData aTStack_48 [24];
  string asStack_30 [40];
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  sVar8 = ___stack_chk_guard;
  if (this[0x110] == (PlantAvatarPackageItem)0x0) {
    pNVar3 = (NameMapperBase *)PlantNewAvatarMapper::GetInstance();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0))
    ;
    iVar2 = NameMapperBase::GetIdForName(pNVar3,(string *)(lVar4 + 0x20));
  }
  else {
    pNVar3 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe8))
    ;
    iVar2 = NameMapperBase::GetIdForName(pNVar3,(string *)(lVar4 + 0x80));
  }
  if (param_2 == iVar2) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar2 = PlayerInfo::GetWhichAvatarType((int)this_01);
    if (iVar2 == 2) {
      if (param_1) {
        MessageRouter::Post((_func_void *)gMessageRouter);
        PlayerInfo::UnlockNewAvatar(this_01,param_2);
        NewAvatar::GetAvatarInfoByAvatarId(param_2);
        TGAPlantWarsData::TGAPlantWarsData(aTStack_48);
        local_64 = iVar2;
        FUN_043a125c(asStack_58,&local_64);
        FUN_05474278(aTStack_48,asStack_58);
        std::string::~string(asStack_58);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        DString::DString((DString *)asStack_58,*(int *)(lVar4 + 0x28));
        __s = (char *)DString::c_str((DString *)asStack_58);
        std::string::append(asStack_30,__s,sVar8);
        DString::~DString((DString *)asStack_58);
        this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogDecorateData(this_02,(TGALogPlantDecorate *)aTStack_48);
        selectAvatar(this);
        pLVar1 = gLawnApp;
        psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        LawnApp::ShowAvatarRewardDialog
                  (pLVar1,asStack_58,lVar4 + 0x48,lVar6 + 0x50,0,0,0,*(undefined4 *)(lVar7 + 0x10));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58)
        ;
        TGAPlantWarsData::~TGAPlantWarsData(aTStack_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      }
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

