// Class: ProfilesListContainer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfilesListContainer::AddWidget(Sexy::Widget*) */

void __thiscall ProfilesListContainer::AddWidget(ProfilesListContainer *this,Widget *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,param_1);
  iVar4 = FUN_03e98680(0x41);
  pcVar6 = *(code **)(*(long *)this + 0x198);
  uVar1 = *(undefined4 *)(this + 0x48);
  local_c = FUN_03e980c4(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  uVar2 = *(undefined4 *)(this + 0x4c);
  uVar3 = *(undefined4 *)(this + 0x50);
  piVar5 = eastl::max_alt<int>(&local_c,(int *)&DAT_057529a0);
  (*pcVar6)(this,uVar1,uVar2,uVar3,iVar4 * *piVar5);
  if (local_8 == ___stack_chk_guard) {
    Sexy::ScrollWidget::ClientSizeChanged(*(ScrollWidget **)(this + 0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfilesListContainer::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
ProfilesListContainer::DrawAll(ProfilesListContainer *this,ModalFlags *param_1,Graphics *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  SalesProgressBar *this_00;
  long lVar9;
  Image *pIVar10;
  ProfileMgr *this_01;
  ResourceInfo *pRVar11;
  ResourceInfo *pRVar12;
  ulong uVar13;
  undefined8 *puVar14;
  CachedUIResourcePtr<Sexy::Image> *this_02;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  Insets aIStack_28 [16];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  local_18[0] = FUN_03e980c4(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  piVar8 = eastl::max_alt<int>((int *)local_18,(int *)&DAT_057529a0);
  iVar1 = *piVar8;
  iVar3 = FUN_03e98680(0x41);
  this_00 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae06c8);
  iVar4 = SalesProgressBar::GetCurrentLevel(this_00);
  iVar3 = iVar3 - iVar4 / 2;
  if (1 < iVar1) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
      iVar5 = FUN_03e98680(2);
      iVar6 = FUN_03e98680(4);
      iVar7 = *(int *)(this + 0x50);
      lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae06c8);
      Sexy::Insets::Insets(aIStack_28,iVar5,iVar3,iVar7 - iVar6,*(int *)(lVar9 + 0x3c));
      pIVar10 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae06c8);
      lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae06c8);
      iVar7 = *(int *)(lVar9 + 0x38);
      lVar9 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae06c8);
      Sexy::Insets::Insets((Insets *)local_18,0,0,iVar7,*(int *)(lVar9 + 0x3c));
      Sexy::Graphics::DrawImage(param_2,pIVar10,(TRect *)aIStack_28,(TRect *)local_18);
      iVar7 = FUN_03e98680(0x41);
      iVar3 = iVar3 + iVar7;
    } while (iVar4 != iVar1 + -1);
  }
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  uVar15 = 0;
  cVar2 = ProfileMgr::HasValidProfile(this_01);
  if (cVar2 != '\0') {
    uVar16 = *(undefined8 *)(this + 0xe0);
    uVar17 = 0;
    lVar9 = FUN_03e980c4(uVar16,*(undefined8 *)(this + 0xe8));
    if (lVar9 != 0) {
      do {
        FUN_03e980d8(uVar16,uVar15);
        ProfilesListEntry::GetPlayerInfo();
        pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_18);
        pRVar12 = (ResourceInfo *)ProfileUtils::Profile();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
        if (pRVar11 == pRVar12) {
          if (uVar15 == 0) {
            puVar14 = (undefined8 *)FUN_03e980d8(*(undefined8 *)(this + 0xe0),0);
            (**(code **)(*(long *)*puVar14 + 0x48))((Insets *)local_18,(long *)*puVar14);
            this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0d70;
          }
          else {
            uVar16 = *(undefined8 *)(this + 0xe0);
            local_18[0] = FUN_03e980c4(uVar16,*(undefined8 *)(this + 0xe8));
            piVar8 = eastl::max_alt<int>((int *)local_18,(int *)&DAT_057529a0);
            if ((int)uVar17 == *piVar8 + -1) {
              puVar14 = (undefined8 *)FUN_03e980d8(uVar16,uVar15);
              (**(code **)(*(long *)*puVar14 + 0x48))((Insets *)local_18,(long *)*puVar14);
              this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0cf8;
            }
            else {
              puVar14 = (undefined8 *)FUN_03e980d8(uVar16,uVar15);
              (**(code **)(*(long *)*puVar14 + 0x48))((Insets *)local_18,(long *)*puVar14);
              this_02 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06ae0990;
            }
          }
          uVar16 = CachedUIResourcePtr<Sexy::Image>::operator->(this_02);
          Draw3SliceImage(param_2,(Insets *)local_18,uVar16);
        }
        uVar15 = uVar15 + 1;
        uVar16 = *(undefined8 *)(this + 0xe0);
        uVar17 = uVar15 & 0xffffffff;
        uVar13 = FUN_03e980c4(uVar16,*(undefined8 *)(this + 0xe8));
      } while (uVar15 < uVar13);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* ProfilesListContainer::ProfilesListContainer(ProfilesDialog*) */

void __thiscall
ProfilesListContainer::ProfilesListContainer(ProfilesListContainer *this,ProfilesDialog *param_1)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06790e10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06791140;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  *(ProfilesDialog **)(this + 0xf8) = param_1;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onProfileCreated);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<Sexy::RtWeakPtr<PlayerInfo>const&,Sexy::CBMemberTranslatorX<ProfilesListContainer,void(ProfilesListContainer::*)(Sexy::RtWeakPtr<PlayerInfo>const&)>>
            ((MessageRouter *)puVar1,Message::ProfileCreated,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onProfileAboutToBeDeleted);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Subscribe<Sexy::RtWeakPtr<PlayerInfo>const&,Sexy::CBMemberTranslatorX<ProfilesListContainer,void(ProfilesListContainer::*)(Sexy::RtWeakPtr<PlayerInfo>const&)>>
            ((MessageRouter *)puVar1,Message::ProfileAboutToBeDeleted,&local_50);
  return;
}


/* ProfilesListContainer::~ProfilesListContainer() */

void __thiscall ProfilesListContainer::~ProfilesListContainer(ProfilesListContainer *this)

{
  *(undefined ***)this = &PTR_GetClass_06790e10;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06791140;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<ProfilesListEntry*,std::allocator<ProfilesListEntry*>>::~vector
            ((vector<ProfilesListEntry*,std::allocator<ProfilesListEntry*>> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* ProfilesListContainer::~ProfilesListContainer() */

void __thiscall ProfilesListContainer::~ProfilesListContainer(ProfilesListContainer *this)

{
  ~ProfilesListContainer(this);
  AK::FreeHook(this);
  return;
}


/* ProfilesListContainer::ButtonPress(int) */

void ProfilesListContainer::ButtonPress(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"Play_UI_Button_Click_Press");
  return;
}


/* non-virtual thunk to ProfilesListContainer::ButtonPress(int) */

void __thiscall ProfilesListContainer::ButtonPress(ProfilesListContainer *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfilesListContainer::createPlaceholderEntry() */

void __thiscall ProfilesListContainer::createPlaceholderEntry(ProfilesListContainer *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  ProfilesListEntry *pPVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  ProfilesListEntry *local_28;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = FUN_03e980c4(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  if (uVar4 == 0) {
    iVar3 = FUN_03e98680(0x41);
    iVar9 = 0;
  }
  else {
    if (4 < uVar4) goto LAB_03ea0e1c;
    puVar6 = (undefined8 *)
             std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0xe0));
    cVar1 = ProfilesListEntry::IsPlaceholder((ProfilesListEntry *)*puVar6);
    if (cVar1 != '\0') goto LAB_03ea0e1c;
    iVar3 = FUN_03e98680(0x41);
    lVar7 = FUN_03e980c4(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
    iVar9 = (int)lVar7;
    if (lVar7 != 0) {
      plVar8 = (long *)std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)(this + 0xe0));
      iVar9 = iVar3 + *(int *)(*plVar8 + 0x4c);
    }
  }
  Sexy::Insets::Insets(aIStack_18,0,iVar9,*(int *)(this + 0x50),iVar3);
  uVar2 = FUN_03e980c4(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_20);
  pPVar5 = ::operator_new(0x310);
  ProfilesListEntry::ProfilesListEntry(pPVar5,aIStack_18,uVar2,this + 0xd8,a_Stack_20);
  local_28 = pPVar5;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_20);
  std::vector<ProfilesListEntry*,std::allocator<ProfilesListEntry*>>::push_back
            ((vector<ProfilesListEntry*,std::allocator<ProfilesListEntry*>> *)(this + 0xe0),
             &local_28);
  (**(code **)(*(long *)this + 0x60))(this,local_28);
LAB_03ea0e1c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfilesListContainer::onProfileCreated(Sexy::RtWeakPtr<PlayerInfo> const&) */

void __thiscall
ProfilesListContainer::onProfileCreated(ProfilesListContainer *this,RtWeakPtr *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  ProfilesListEntry *pPVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<ProfilesListEntry*,std::allocator<ProfilesListEntry*>>::empty
                    ((vector<ProfilesListEntry*,std::allocator<ProfilesListEntry*>> *)(this + 0xe0))
  ;
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)
             std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0xe0));
    pPVar3 = (ProfilesListEntry *)*puVar2;
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_1);
    ProfilesListEntry::SetPlayerInfo(pPVar3,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    createPlaceholderEntry(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfilesListContainer::onProfileAboutToBeDeleted(Sexy::RtWeakPtr<PlayerInfo> const&) */

void __thiscall
ProfilesListContainer::onProfileAboutToBeDeleted(ProfilesListContainer *this,RtWeakPtr *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar7 = 0;
  do {
    uVar11 = uVar7;
    uVar14 = *(undefined8 *)(this + 0xe0);
    iVar6 = (int)uVar11;
    uVar7 = FUN_03e980c4(uVar14,*(undefined8 *)(this + 0xe8));
    if (uVar7 <= uVar11) goto LAB_03ea1088;
    FUN_03e980d8(uVar14,uVar11);
    ProfilesListEntry::GetPlayerInfo();
    cVar4 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)&local_10,(RtWeakPtrBase *)param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    uVar7 = uVar11 + 1;
  } while (cVar4 == '\0');
  uVar14 = *(undefined8 *)(this + 0xe0);
  iVar5 = FUN_03e980c4(uVar14,*(undefined8 *)(this + 0xe8));
  if (iVar6 < iVar5 + -1) {
    lVar15 = (long)(iVar5 + -1);
    plVar8 = (long *)FUN_03e980d8(uVar14,lVar15);
    lVar16 = *plVar8;
    lVar12 = lVar15 + -1;
    do {
      lVar17 = lVar12 + -1;
      plVar8 = (long *)FUN_03e980d8(uVar14,lVar12);
      lVar12 = *plVar8;
      *(undefined4 *)(lVar16 + 0x4c) = *(undefined4 *)(lVar12 + 0x4c);
      *(int *)(lVar16 + 0xd4) = *(int *)(lVar16 + 0xd4) + -1;
      lVar16 = lVar12;
      lVar12 = lVar17;
    } while (lVar17 != (lVar15 + -2) - (ulong)(uint)((iVar5 + -2) - iVar6));
  }
  puVar9 = (undefined8 *)FUN_03e980d8(uVar14,uVar11);
  (**(code **)(*(long *)this + 0x68))(this,*puVar9);
  plVar8 = (long *)FUN_03e980d8(*(undefined8 *)(this + 0xe0),uVar11);
  if ((long *)*plVar8 != (long *)0x0) {
    (**(code **)(*(long *)*plVar8 + 0x18))();
  }
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xe0));
  local_18 = __gnu_cxx::
             __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
             ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_20,(long)iVar6);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  std::vector<ProfilesListEntry*,std::allocator<ProfilesListEntry*>>::erase
            ((vector<ProfilesListEntry*,std::allocator<ProfilesListEntry*>> *)(this + 0xe0),
             CONCAT44(uStack_c,local_10));
  uVar1 = *(undefined4 *)(this + 0x48);
  uVar2 = *(undefined4 *)(this + 0x4c);
  pcVar13 = *(code **)(*(long *)this + 0x198);
  iVar6 = FUN_03e98680(0x41);
  uVar3 = *(undefined4 *)(this + 0x50);
  local_10 = FUN_03e980c4(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
  piVar10 = eastl::max_alt<int>((int *)&local_10,(int *)&DAT_057529a0);
  (*pcVar13)(this,uVar1,uVar2,uVar3,iVar6 * *piVar10);
  Sexy::ScrollWidget::ClientSizeChanged(*(ScrollWidget **)(this + 0x20));
LAB_03ea1088:
  createPlaceholderEntry(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfilesListContainer::Initialize(int, int, int, int) */

void __thiscall
ProfilesListContainer::Initialize
          (ProfilesListContainer *this,int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RtWeakPtrBase *pRVar6;
  ProfilesListEntry *pPVar7;
  ulong uVar8;
  int extraout_w1;
  ulong uVar9;
  int iVar10;
  ProfilesListEntry *local_50;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x37);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)&local_50);
    std::vector<Sexy::RtWeakPtr<PlayerInfo>,std::allocator<Sexy::RtWeakPtr<PlayerInfo>>>::push_back
              ((vector<Sexy::RtWeakPtr<PlayerInfo>,std::allocator<Sexy::RtWeakPtr<PlayerInfo>>> *)
               &local_40,(RtWeakPtr *)aRStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    Sexy::RtId::~RtId((RtId *)&local_50);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_40);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_40);
  std::
  sort<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<PlayerInfo>*,std::vector<Sexy::RtWeakPtr<PlayerInfo>,std::allocator<Sexy::RtWeakPtr<PlayerInfo>>>>,bool(*)(PlayerInfo*,PlayerInfo*)>
            (uVar4,uVar5,FUN_03e98008);
  iVar2 = FUN_03e98680(0x41);
  uVar9 = 0;
  iVar10 = 0;
  while( true ) {
    uVar8 = FUN_03e980b8(local_40,local_38);
    if (uVar8 <= uVar9) break;
    Sexy::Insets::Insets((Insets *)aIStack_28,0,iVar10,*(int *)(this + 0x50),iVar2);
    uVar3 = FUN_03e980c4(*(undefined8 *)(this + 0xe0),*(undefined8 *)(this + 0xe8));
    pRVar6 = (RtWeakPtrBase *)FUN_03e980d0(local_40,uVar9);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,pRVar6);
    pPVar7 = ::operator_new(0x310);
    ProfilesListEntry::ProfilesListEntry(pPVar7,aIStack_28,uVar3,this + 0xd8,aRStack_48);
    local_50 = pPVar7;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    std::vector<ProfilesListEntry*,std::allocator<ProfilesListEntry*>>::push_back
              ((vector<ProfilesListEntry*,std::allocator<ProfilesListEntry*>> *)(this + 0xe0),
               &local_50);
    (**(code **)(*(long *)this + 0x60))(this,local_50);
    uVar9 = uVar9 + 1;
    iVar10 = iVar10 + iVar2;
  }
  createPlaceholderEntry(this);
  std::vector<Sexy::RtWeakPtr<PlayerInfo>,std::allocator<Sexy::RtWeakPtr<PlayerInfo>>>::~vector
            ((vector<Sexy::RtWeakPtr<PlayerInfo>,std::allocator<Sexy::RtWeakPtr<PlayerInfo>>> *)
             &local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProfilesListContainer::ButtonDepress(int) */

void __thiscall ProfilesListContainer::ButtonDepress(ProfilesListContainer *this,int param_1)

{
  char cVar1;
  undefined8 *puVar2;
  char *pcVar3;
  MainMenu *pMVar4;
  wstring *pwVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)FUN_03e980d8(*(undefined8 *)(this + 0xe0),(long)param_1);
  cVar1 = ProfilesListEntry::IsPlaceholder((ProfilesListEntry *)*puVar2);
  if (cVar1 == '\0') {
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Click_Release");
    pwVar5 = (wstring *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    FUN_03e980d8(*(undefined8 *)(this + 0xe0),(long)param_1);
    ProfilesListEntry::GetPlayerName();
    ProfileMgr::SetCurrentProfile(pwVar5);
    FUN_05476c50(a_Stack_10);
    MessageRouter::Post((_func_void *)gMessageRouter);
    pMVar4 = (MainMenu *)LawnApp::GetMainMenu(gLawnApp);
    MainMenu::ScrollLeft(pMVar4);
  }
  else {
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Button_AddPlayer_Press");
    pcVar3 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar3,"Play_UI_Button_Settings_Tab_Release");
    pMVar4 = (MainMenu *)LawnApp::GetMainMenu(gLawnApp);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    MainMenu::CreateWelcomeDialog(pMVar4,a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ProfilesListContainer::ButtonDepress(int) */

void __thiscall ProfilesListContainer::ButtonDepress(ProfilesListContainer *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

