// Class: UIBag


/* UIBag::ScrollTargetReached(Sexy::ScrollWidget*) */

void UIBag::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIBag::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall UIBag::ScrollTargetReached(UIBag *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UIBag::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UIBag::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UIBag::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall UIBag::ScrollTargetInterrupted(UIBag *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBag::GetLayoutName() */

void __thiscall UIBag::GetLayoutName(UIBag *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIBag");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIBag::onStartMission(std::string const&, std::string const&, int) */

void UIBag::onStartMission(string *param_1,string *param_2,int param_3)

{
  if (UISingletonDialog<UIBag>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<UIBag>::m_pInstance + 0x318))
              (UISingletonDialog<UIBag>::m_pInstance,
               *(code **)(*UISingletonDialog<UIBag>::m_pInstance + 0x318),param_3);
    UISingletonDialog<UIBag>::m_pInstance = (long *)0x0;
  }
  return;
}


/* UIBag::ButtonDepress(int) */

void __thiscall UIBag::ButtonDepress(UIBag *this,int param_1)

{
  if (param_1 != 1000) {
    return;
  }
  UISingletonDialog<UIBag>::CloseDialog();
  return;
}


/* non-virtual thunk to UIBag::ButtonDepress(int) */

void __thiscall UIBag::ButtonDepress(UIBag *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIBag::CalcItemCatagoryCount(BAG_ITEM_TYPE) */

undefined8 __thiscall UIBag::CalcItemCatagoryCount(undefined8 param_1,int param_2)

{
  ProfileMgr *this;
  PlayerInfo *this_00;
  undefined8 uVar1;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (param_2 == 0) {
    uVar1 = PlayerInfo::GetPlantPieceCatagoryCount(this_00);
    return uVar1;
  }
  if (param_2 == 1) {
    uVar1 = PlayerInfo::GetAvatarPieceCatagoryCount(this_00,0);
    return uVar1;
  }
  if (param_2 == 2) {
    uVar1 = PlayerInfo::GetAccessoryPieceCatagoryCount(this_00);
    return uVar1;
  }
  if (param_2 != 3) {
    return 0;
  }
  uVar1 = PlayerInfo::GetMaterialCatagoryCount(this_00);
  return uVar1;
}


/* UIBag::UIBag() */

void __thiscall UIBag::UIBag(UIBag *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIBag>::UISingletonDialog((UISingletonDialog<UIBag> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  UI::TabControlListener::TabControlListener((TabControlListener *)(this + 0x140));
  *(undefined ***)this = &PTR_GetClass_069c3a40;
  *(undefined **)(this + 0xd8) = &DAT_069c3da8;
  *(undefined ***)(this + 0x138) = &PTR__UIBag_069c3df0;
  *(undefined **)(this + 0x140) = &DAT_069c3e38;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x148));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x160));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 400));
  this[0x1a8] = (UIBag)0x0;
  this[0x1a9] = (UIBag)0x0;
  this[0x1aa] = (UIBag)0x0;
  this[0x1ab] = (UIBag)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<UIBag,void(UIBag::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onStartMission);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<std::string_const&,std::string_const&,int,Sexy::CBMemberTranslatorX<UIBag,void(UIBag::*)(std::string_const&,std::string_const&,int)>>
            ((MessageRouter *)puVar1,Message::MissionStart,&local_70);
  return;
}


/* UIBag::~UIBag() */

void __thiscall UIBag::~UIBag(UIBag *this)

{
  *(undefined ***)this = &PTR_GetClass_069c3a40;
  *(undefined **)(this + 0x140) = &DAT_069c3e38;
  *(undefined **)(this + 0xd8) = &DAT_069c3da8;
  *(undefined ***)(this + 0x138) = &PTR__UIBag_069c3df0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>>::~vector
            ((vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>> *)(this + 400));
  std::vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>>::~vector
            ((vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>> *)(this + 0x178));
  std::vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>>::~vector
            ((vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>> *)(this + 0x160));
  std::vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>>::~vector
            ((vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>> *)(this + 0x148));
  UISingletonDialog<UIBag>::~UISingletonDialog((UISingletonDialog<UIBag> *)this);
  return;
}


/* non-virtual thunk to UIBag::~UIBag() */

void __thiscall UIBag::~UIBag(UIBag *this)

{
  ~UIBag(this + -0x138);
  return;
}


/* UIBag::~UIBag() */

void __thiscall UIBag::~UIBag(UIBag *this)

{
  ~UIBag(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UIBag::~UIBag() */

void __thiscall UIBag::~UIBag(UIBag *this)

{
  ~UIBag(this + -0x138);
  return;
}


/* UIBag::SortItemIDsForRare(BAG_ITEM_TYPE, std::vector<BagItemData, std::allocator<BagItemData> >&)
    */

void __thiscall
UIBag::SortItemIDsForRare
          (undefined8 param_1,int param_2,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar1 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(param_3);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(param_3);
    FUN_04dc4ea8(uVar1,uVar2);
    return;
  }
  if (param_2 == 1) {
    uVar1 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(param_3);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(param_3);
    FUN_04dc50d0(uVar1,uVar2);
  }
  else if (param_2 == 2) {
    uVar1 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(param_3);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(param_3);
    FUN_04dc52f8(uVar1,uVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBag::InitMaterialActivityMap() */

void UIBag::InitMaterialActivityMap(void)

{
  NameMapperBase *this;
  string *psVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (uVar4 = 0; uVar3 = FUN_04dbf7c8(DAT_06b9a5a0,DAT_06b9a5a8), uVar4 < uVar3; uVar4 = uVar4 + 1)
  {
    this = (NameMapperBase *)MaterialItemMapper::GetInstance();
    psVar1 = (string *)FUN_04dbf7d4(DAT_06b9a5a0,uVar4);
    local_c = NameMapperBase::GetIdForName(this,psVar1);
    puVar2 = (undefined4 *)
             std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        _materialActivityMap,&local_c);
    *puVar2 = (&DAT_05755ba0)[uVar4];
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBag::FindMaterialActivity(int) */

void UIBag::FindMaterialActivity(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  local_18 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        _materialActivityMap,local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)_materialActivityMap);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    puVar3 = (undefined4 *)
             std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                       ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                        _materialActivityMap,local_24);
    uVar2 = *puVar3;
  }
  else {
    uVar2 = 0xfffffffa;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBag::GetItemIDs(BAG_ITEM_TYPE) */

void UIBag::GetItemIDs(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
                      undefined8 param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this;
  PlayerInfo *this_00;
  ulong uVar5;
  NameMapperBase *pNVar6;
  string *psVar7;
  int *piVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  LevelEditorCardPlantInterface aLStack_38 [8];
  LevelEditorCardPlantInterface aLStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  if (param_3 == 0) {
    LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_30);
    while (bVar2 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                             ((ObjectTypeDirectoryIterator *)aLStack_30), bVar2) {
      ObjectTypeDirectoryIterator<PlantType>::operator*
                ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_30);
      cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)&local_28);
      if ((cVar1 == '\0') &&
         (lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28),
         *(char *)(lVar9 + 0x30) != '\0')) {
        pNVar6 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28)
        ;
        iVar3 = NameMapperBase::GetIdForName(pNVar6,(string *)(lVar9 + 8));
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_28)
        ;
        iVar4 = PlayerInfo::GetPlantPieceCount(this_00,(string *)(lVar9 + 8),false);
        if (0 < iVar4) {
          UnchartedModePlantNumData::UnchartedModePlantNumData
                    ((UnchartedModePlantNumData *)&local_20,iVar3,iVar4);
          std::vector<BagItemData,std::allocator<BagItemData>>::push_back
                    ((vector<BagItemData,std::allocator<BagItemData>> *)param_1,
                     (BagItemData *)&local_20);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
      ObjectTypeDirectoryIterator<PlantType>::operator++
                ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_30);
    }
  }
  else if (param_3 == 1) {
    LevelEditorCardPlantInterface::LevelEditorCardPlantInterface(aLStack_38);
    while (bVar2 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                             ((ObjectTypeDirectoryIterator *)aLStack_38), bVar2) {
      ObjectTypeDirectoryIterator<PlantType>::operator*
                ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_38);
      cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)aLStack_30);
      if ((cVar1 == '\0') &&
         (lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aLStack_30),
         *(char *)(lVar9 + 0x30) != '\0')) {
        lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aLStack_30);
        cVar1 = NewAvatar::IsPlantAvatarExistence((string *)(lVar9 + 8));
        if (cVar1 == '\0') goto LAB_04dc58dc;
        uVar10 = 0;
        auVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aLStack_30);
        NewAvatar::Common_GetPlantAvatarPiecesIdList((NewAvatar *)(auVar12._0_8_ + 8),auVar12._8_8_)
        ;
        uVar11 = local_20;
        lVar9 = FUN_04dbf730(local_20,local_18);
        if (lVar9 != 0) {
          do {
            piVar8 = (int *)FUN_04dbf73c(uVar11,uVar10);
            iVar3 = NewAvatar::Common_GetAvatarPieceNum(*piVar8);
            if (0 < iVar3) {
              piVar8 = (int *)FUN_04dbf73c(local_20,uVar10);
              UnchartedModePlantNumData::UnchartedModePlantNumData
                        ((UnchartedModePlantNumData *)&local_28,*piVar8,iVar3);
              std::vector<BagItemData,std::allocator<BagItemData>>::push_back
                        ((vector<BagItemData,std::allocator<BagItemData>> *)param_1,
                         (BagItemData *)&local_28);
            }
            uVar11 = local_20;
            uVar10 = uVar10 + 1;
            uVar5 = FUN_04dbf730(local_20,local_18);
          } while (uVar10 < uVar5);
        }
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aLStack_30)
        ;
      }
      else {
LAB_04dc58dc:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aLStack_30)
        ;
      }
      ObjectTypeDirectoryIterator<PlantType>::operator++
                ((ObjectTypeDirectoryIterator<PlantType> *)aLStack_38);
    }
  }
  else if (param_3 == 2) {
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)PlantAccessoryPieceMapper::GetInstance();
    auVar12 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_end(this_01);
    std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_28,auVar12._8_8_);
    local_28 = std::
               map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
               ::begin(auVar12._0_8_);
    while( true ) {
      local_20 = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)auVar12._0_8_);
      bVar2 = eastl::operator!=((rbtree_iterator *)&local_28,(rbtree_iterator *)&local_20);
      if (!bVar2) break;
      psVar7 = (string *)
               std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                         ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
      iVar3 = PlayerInfo::GetAccessoryPieceCount(this_00,psVar7,false);
      if (0 < iVar3) {
        lVar9 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                          ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_28);
        UnchartedModePlantNumData::UnchartedModePlantNumData
                  ((UnchartedModePlantNumData *)&local_20,*(int *)(lVar9 + 8),iVar3);
        std::vector<BagItemData,std::allocator<BagItemData>>::push_back
                  ((vector<BagItemData,std::allocator<BagItemData>> *)param_1,
                   (BagItemData *)&local_20);
      }
      FUN_04dbf798((exception_ptr *)&local_28);
    }
  }
  else if (param_3 == 3) {
    for (uVar10 = 0; uVar5 = FUN_04dbf7c8(DAT_06b9a5a0,DAT_06b9a5a8), uVar10 < uVar5;
        uVar10 = uVar10 + 1) {
      pNVar6 = (NameMapperBase *)MaterialItemMapper::GetInstance();
      psVar7 = (string *)FUN_04dbf7d4(DAT_06b9a5a0,uVar10);
      iVar3 = NameMapperBase::GetIdForName(pNVar6,psVar7);
      iVar4 = PlayerInfo::GetMaterialNum(this_00,iVar3);
      if (0 < iVar4) {
        UnchartedModePlantNumData::UnchartedModePlantNumData
                  ((UnchartedModePlantNumData *)&local_20,iVar3,iVar4);
        std::vector<BagItemData,std::allocator<BagItemData>>::push_back
                  ((vector<BagItemData,std::allocator<BagItemData>> *)param_1,
                   (BagItemData *)&local_20);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* UIBag::AttachItem(BAG_ITEM_TYPE, BagItemButtonBase*) */

void __thiscall UIBag::AttachItem(UIBag *this,int param_2,BagItemButtonBase *param_3)

{
  BagItemButtonBase *local_8;
  
  local_8 = param_3;
  if (param_2 == 0) {
    std::vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>>::push_back
              ((vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>> *)(this + 0x148),
               &local_8);
    return;
  }
  if (param_2 == 1) {
    std::vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>>::push_back
              ((vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>> *)(this + 0x160),
               &local_8);
  }
  else if (param_2 == 2) {
    std::vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>>::push_back
              ((vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>> *)(this + 0x178),
               &local_8);
  }
  else if (param_2 == 3) {
    std::vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>>::push_back
              ((vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>> *)(this + 400),
               &local_8);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBag::CreateBagItems(BAG_ITEM_TYPE, Sexy::Widget*) */

void __thiscall UIBag::CreateBagItems(UIBag *this,int param_2,long *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ProfileMgr *pPVar7;
  PlayerInfo *pPVar8;
  PVZ2UIScrollingWidget *pPVar9;
  Widget *pWVar10;
  ulong uVar11;
  int *piVar12;
  BagItemButtonBase *pBVar13;
  ulong uVar14;
  float fVar15;
  Insets aIStack_58 [16];
  Insets aIStack_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04dc0484();
  iVar4 = FUN_04dbf6cc((int)param_3[10]);
  iVar5 = FUN_04dbf6d0(*(undefined4 *)((long)param_3 + 0x54));
  iVar1 = (iVar4 + iVar3 * -2 + iVar3 * -6) / 7;
  iVar6 = CalcItemCatagoryCount(this,param_2);
  if (iVar6 == 0) {
    Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
    TrialCardManager::GetPlayerTrialCardList();
    cVar2 = std::vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>>::empty
                      ((vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>> *)&local_20)
    ;
    std::vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>>::~vector
              ((vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>> *)&local_20);
    if (cVar2 != '\0') {
      if (param_2 == 3) {
        pPVar9 = ::operator_new(0x248);
        PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar9,(ScrollWidgetListener *)(this + 0x138));
        Sexy::Insets::Insets((Insets *)&local_38,0,0,iVar4,iVar5);
        (**(code **)(*(long *)pPVar9 + 0x1a0))(pPVar9,(Insets *)&local_38);
        Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)pPVar9,2);
        (**(code **)(*param_3 + 0x60))(param_3,pPVar9);
        pWVar10 = ::operator_new(0xd8);
        Sexy::Widget::Widget(pWVar10);
        (**(code **)(*(long *)pWVar10 + 0x198))(pWVar10,0,0,iVar4,iVar1 + iVar3 * 2);
        (**(code **)(*(long *)pPVar9 + 0x60))(pPVar9,pWVar10);
        pPVar7 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar8 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar7);
        cVar2 = PlayerInfo::HasCollection(pPVar8,0xf231);
        if (cVar2 != '\0') {
          Sexy::Insets::Insets((Insets *)&local_20,iVar3,iVar3,iVar1,iVar1);
          pBVar13 = (BagItemButtonBase *)BagItemButtonBase::CreateBagItem(0xf231,1,true);
          (**(code **)(*(long *)pBVar13 + 0x1a0))
                    (pBVar13,(vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>> *)
                             &local_20);
          BagItemButtonBase::CreateButton(pBVar13);
          (**(code **)(*(long *)pWVar10 + 0x60))(pWVar10,pBVar13);
          AttachItem(this,3,pBVar13);
        }
      }
      goto LAB_04dc5f58;
    }
  }
  pPVar7 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar8 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar7);
  cVar2 = PlayerInfo::HasCollection(pPVar8,0xf231);
  fVar15 = (float)iVar6;
  if (cVar2 == '\0') {
    fVar15 = fVar15 * 0.14285715;
  }
  iVar6 = iVar3 + iVar1;
  pPVar9 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar9,(ScrollWidgetListener *)(this + 0x138));
  Sexy::Insets::Insets(aIStack_58,0,0,iVar4,iVar5);
  (**(code **)(*(long *)pPVar9 + 0x1a0))(pPVar9,aIStack_58);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)pPVar9,2);
  (**(code **)(*param_3 + 0x60))(param_3,pPVar9);
  pWVar10 = ::operator_new(0xd8);
  Sexy::Widget::Widget(pWVar10);
  (**(code **)(*(long *)pWVar10 + 0x198))(pWVar10,0,0,iVar4,iVar3 + iVar6 * (int)fVar15);
  (**(code **)(*(long *)pPVar9 + 0x60))(pPVar9,pWVar10);
  GetItemIDs((vector<BagItemData,std::allocator<BagItemData>> *)&local_38,this,param_2);
  SortItemIDsForRare(this,param_2,(vector<BagItemData,std::allocator<BagItemData>> *)&local_38);
  uVar14 = 0;
  while( true ) {
    uVar11 = FUN_04dbf764(local_38,local_30);
    if (uVar11 <= uVar14) break;
    Sexy::Insets::Insets
              ((Insets *)&local_20,iVar3 + iVar6 * ((int)uVar14 % 7),
               iVar3 + iVar6 * ((int)uVar14 / 7),iVar1,iVar1);
    piVar12 = (int *)FUN_04dbf770(local_38,uVar14);
    pBVar13 = (BagItemButtonBase *)BagItemButtonBase::CreateBagItem(*piVar12,piVar12[1],true);
    (**(code **)(*(long *)pBVar13 + 0x1a0))(pBVar13,(Insets *)&local_20);
    BagItemButtonBase::CreateButton(pBVar13);
    (**(code **)(*(long *)pWVar10 + 0x60))(pWVar10,pBVar13);
    AttachItem(this,param_2,pBVar13);
    uVar14 = uVar14 + 1;
  }
  if (param_2 == 3) {
    pPVar7 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar8 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar7);
    cVar2 = PlayerInfo::HasCollection(pPVar8,0xf231);
    if (cVar2 != '\0') {
      iVar4 = FUN_04dbf764(local_38,local_30);
      Sexy::Insets::Insets
                ((Insets *)&local_20,iVar3 + iVar6 * (iVar4 % 7),iVar3 + iVar6 * (iVar4 / 7),iVar1,
                 iVar1);
      pBVar13 = (BagItemButtonBase *)BagItemButtonBase::CreateBagItem(0xf231,1,true);
      (**(code **)(*(long *)pBVar13 + 0x1a0))(pBVar13,(Insets *)&local_20);
      BagItemButtonBase::CreateButton(pBVar13);
      (**(code **)(*(long *)pWVar10 + 0x60))(pWVar10,pBVar13);
      AttachItem(this,3,pBVar13);
    }
    Sexy::LazySingleton<TrialCardManager>::GetInstancePtr();
    TrialCardManager::GetPlayerTrialCardList();
    iVar4 = FUN_04dbf778(*(undefined8 *)(this + 400),*(undefined8 *)(this + 0x198));
    for (uVar14 = 0; uVar11 = FUN_04dbf784(local_20,local_18), uVar14 < uVar11; uVar14 = uVar14 + 1)
    {
      iVar5 = iVar4 + (int)uVar14;
      Sexy::Insets::Insets
                (aIStack_48,iVar3 + iVar6 * (iVar5 % 7),iVar3 + iVar6 * (iVar5 / 7),iVar1,iVar1);
      piVar12 = (int *)FUN_04dbf790(local_20,uVar14);
      pBVar13 = (BagItemButtonBase *)BagItemButtonBase::CreateBagItem(*piVar12,piVar12[1],true);
      (**(code **)(*(long *)pBVar13 + 0x1a0))(pBVar13,aIStack_48);
      BagItemButtonBase::CreateButton(pBVar13);
      (**(code **)(*(long *)pWVar10 + 0x60))(pWVar10,pBVar13);
      AttachItem(this,3,pBVar13);
    }
    *(int *)(pWVar10 + 0x54) = iVar3 + iVar6 * (int)((float)(uVar11 + (long)iVar4) * 0.14285715);
    Sexy::ScrollWidget::ClientSizeChanged((ScrollWidget *)pPVar9);
    std::vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>>::~vector
              ((vector<PlayerTrialCardInfo,std::allocator<PlayerTrialCardInfo>> *)&local_20);
  }
  std::vector<BagItemData,std::allocator<BagItemData>>::~vector
            ((vector<BagItemData,std::allocator<BagItemData>> *)&local_38);
LAB_04dc5f58:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBag::TabSelectionChanged(int) */

void __thiscall UIBag::TabSelectionChanged(UIBag *this,int param_1)

{
  UIWidgetImage *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 1) {
    if (this[0x1a8] == (UIBag)0x0) {
      this[0x1a8] = (UIBag)0x1;
      std::string::string(asStack_10,"Widget_0");
      pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
      std::string::~string(asStack_10);
      nop();
      CreateBagItems(this,0,pUVar1);
    }
  }
  else if (param_1 == 2) {
    if (this[0x1a9] == (UIBag)0x0) {
      this[0x1a9] = (UIBag)0x1;
      std::string::string(asStack_10,"Widget_1");
      pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
      std::string::~string(asStack_10);
      nop();
      CreateBagItems(this,1,pUVar1);
    }
  }
  else if (param_1 == 3) {
    if (this[0x1aa] == (UIBag)0x0) {
      this[0x1aa] = (UIBag)0x1;
      std::string::string(asStack_10,"Widget_2");
      pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
      std::string::~string(asStack_10);
      nop();
      CreateBagItems(this,2,pUVar1);
    }
  }
  else if ((param_1 == 4) && (this[0x1ab] == (UIBag)0x0)) {
    this[0x1ab] = (UIBag)0x1;
    std::string::string(asStack_10,"Widget_3");
    pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    CreateBagItems(this,3,pUVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to UIBag::TabSelectionChanged(int) */

void __thiscall UIBag::TabSelectionChanged(UIBag *this,int param_1)

{
  TabSelectionChanged(this + -0x140,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBag::RefreshTab(BAG_ITEM_TYPE) */

void __thiscall UIBag::RefreshTab(UIBag *this,int param_2)

{
  UIBag *this_00;
  UIWidgetImage *pUVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == 0) {
    std::string::string(asStack_10,"Widget_0");
    pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pUVar1 + 0x80))(pUVar1,1,1);
    this_00 = this + 0x148;
  }
  else if (param_2 == 1) {
    std::string::string(asStack_10,"Widget_1");
    pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pUVar1 + 0x80))(pUVar1,1,1);
    this_00 = this + 0x160;
  }
  else if (param_2 == 2) {
    std::string::string(asStack_10,"Widget_2");
    pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pUVar1 + 0x80))(pUVar1,1,1);
    this_00 = this + 0x178;
  }
  else {
    if (param_2 != 3) goto LAB_04dc656c;
    std::string::string(asStack_10,"Widget_3");
    pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_10);
    std::string::~string(asStack_10);
    nop();
    (**(code **)(*(long *)pUVar1 + 0x80))(pUVar1,1,1);
    this_00 = this + 400;
  }
  std::vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>>::clear
            ((vector<BagItemButtonBase*,std::allocator<BagItemButtonBase*>> *)this_00);
  CreateBagItems(this,param_2,pUVar1);
LAB_04dc656c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBag::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>, std::allocator<int> >
   const&) */

void __thiscall UIBag::onNotifyRefreshActivityList(UIBag *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CornucopiaMgr *this_00;
  PartyAssistMgr *this_01;
  int local_1dc;
  undefined8 local_1d8;
  ActiveItem aAStack_1d0 [8];
  undefined4 local_1c8;
  char local_1b8;
  undefined8 local_150 [41];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_1dc = 0x2a31;
    local_1d8 = std::set<int,std::less<int>,std::allocator<int>>::find
                          ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1dc);
    local_150[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_1d8,(rbtree_iterator *)local_150);
    if (bVar1) {
      UISingletonDialog<UIBagItemBox>::CloseDialog();
      UISingletonDialog<UIBag>::CloseDialog();
      UISingletonDialog<UILimitLottery>::ShowDialog();
    }
    else {
      local_1dc = 0x2a2f;
      local_1d8 = std::set<int,std::less<int>,std::allocator<int>>::find
                            ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1dc);
      local_150[0] = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_2);
      bVar1 = eastl::operator!=((rbtree_iterator *)&local_1d8,(rbtree_iterator *)local_150);
      if (bVar1) {
        UISingletonDialog<UIBagItemBox>::CloseDialog();
        UISingletonDialog<UIBag>::CloseDialog();
        BossChallenge::ShowDialog();
      }
      else {
        local_1dc = 0x2a66;
        local_1d8 = std::set<int,std::less<int>,std::allocator<int>>::find
                              ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1dc);
        local_150[0] = std::
                       map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_2);
        bVar1 = eastl::operator!=((rbtree_iterator *)&local_1d8,(rbtree_iterator *)local_150);
        if (bVar1) {
          UISingletonDialog<UIBagItemBox>::CloseDialog();
          UISingletonDialog<UIBag>::CloseDialog();
          UISingletonDialog<UILimitedSummon>::ShowDialog();
        }
        else {
          local_1dc = 0x2a6b;
          local_1d8 = std::set<int,std::less<int>,std::allocator<int>>::find
                                ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1dc);
          local_150[0] = std::
                         map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)param_2);
          bVar1 = eastl::operator!=((rbtree_iterator *)&local_1d8,(rbtree_iterator *)local_150);
          if (bVar1) {
            UISingletonDialog<UIBagItemBox>::CloseDialog();
            UISingletonDialog<UIBag>::CloseDialog();
          }
          else {
            local_1dc = 0x2a6f;
            local_1d8 = std::set<int,std::less<int>,std::allocator<int>>::find
                                  ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1dc
                                  );
            local_150[0] = std::
                           map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)param_2);
            bVar1 = eastl::operator!=((rbtree_iterator *)&local_1d8,(rbtree_iterator *)local_150);
            if (bVar1) {
              UISingletonDialog<UIBagItemBox>::CloseDialog();
              UISingletonDialog<UIBag>::CloseDialog();
              iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
              ActivityManager::GetActiveItem(iVar3);
              cVar2 = FUN_04dbf724(local_1c8);
              if ((cVar2 != '\0') && (local_1b8 != '\0')) {
                CornucopiaData::CornucopiaData((CornucopiaData *)local_150);
                cVar2 = ActiveItem::GetDataSerialized(aAStack_1d0,(RtObject *)local_150);
                if (cVar2 != '\0') {
                  this_00 = (CornucopiaMgr *)Sexy::LazySingleton<CornucopiaMgr>::GetInstancePtr();
                  CornucopiaMgr::LoadData(this_00,(CornucopiaData *)local_150);
                  UISingletonDialog<UICornucopia>::ShowDialog();
                }
                CornucopiaData::~CornucopiaData((CornucopiaData *)local_150);
              }
            }
            else {
              local_1dc = 0x2a79;
              local_1d8 = std::set<int,std::less<int>,std::allocator<int>>::find
                                    ((set<int,std::less<int>,std::allocator<int>> *)param_2,
                                     &local_1dc);
              local_150[0] = std::
                             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)param_2);
              bVar1 = eastl::operator!=((rbtree_iterator *)&local_1d8,(rbtree_iterator *)local_150);
              if (!bVar1) goto LAB_04dc6bb4;
              UISingletonDialog<UIBagItemBox>::CloseDialog();
              UISingletonDialog<UIBag>::CloseDialog();
              iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
              ActivityManager::GetActiveItem(iVar3);
              cVar2 = FUN_04dbf724(local_1c8);
              if ((cVar2 != '\0') && (local_1b8 != '\0')) {
                PartyAssistMainData::PartyAssistMainData((PartyAssistMainData *)local_150);
                cVar2 = ActiveItem::GetDataSerialized(aAStack_1d0,(RtObject *)local_150);
                if (cVar2 != '\0') {
                  this_01 = (PartyAssistMgr *)Sexy::LazySingleton<PartyAssistMgr>::GetInstancePtr();
                  PartyAssistMgr::LoadData(this_01,(PartyAssistMainData *)local_150);
                  UISingletonDialog<UIPartyAssist>::ShowDialog();
                }
                PartyAssistMainData::~PartyAssistMainData((PartyAssistMainData *)local_150);
              }
            }
            ActiveItem::~ActiveItem(aAStack_1d0);
          }
        }
      }
    }
  }
LAB_04dc6bb4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBag::InitView() */

void __thiscall UIBag::InitView(UIBag *this)

{
  UIWidgetImage *pUVar1;
  UITabControl *this_00;
  char *__s;
  TGALogMgr *pTVar2;
  TGABagData *__n;
  TGABagData aTStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"Background_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,(Widget *)pUVar1,true);
  std::string::string(asStack_18,"Widget_0");
  pUVar1 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  CreateBagItems(this,0,pUVar1);
  this[0x1a8] = (UIBag)0x1;
  __n = aTStack_20;
  std::string::string(asStack_18,"UITabControl_0");
  this_00 = UI::Dialog::GetWidget<UITabControl>((Dialog *)this,asStack_18);
  std::string::~string(asStack_18);
  nop();
  UITabControl::SetListener(this_00,(TabControlListener *)(this + 0x140));
  TGABagData::TGABagData(aTStack_20);
  DString::DString((DString *)asStack_18,1);
  __s = (char *)DString::c_str((DString *)asStack_18);
  std::string::append((string *)aTStack_20,__s,(size_t)__n);
  DString::~DString((DString *)asStack_18);
  pTVar2 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGABagData::TGABagData((TGABagData *)asStack_18,aTStack_20);
  TGALogMgr::LogBag(pTVar2,asStack_18);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)asStack_18);
  InitMaterialActivityMap();
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)aTStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIBag::OnCreate() */

undefined8 __thiscall UIBag::OnCreate(UIBag *this)

{
  UI::Dialog::OnCreate((Dialog *)this);
  InitView(this);
  return 1;
}

