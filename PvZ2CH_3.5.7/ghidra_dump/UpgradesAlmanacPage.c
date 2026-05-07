// Class: UpgradesAlmanacPage


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UpgradesAlmanacPage::GetScrollOffset() const */

void __thiscall UpgradesAlmanacPage::GetScrollOffset(UpgradesAlmanacPage *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  int local_18;
  int local_14;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = 0;
  do {
    uVar8 = uVar6;
    uVar9 = *(undefined8 *)(this + 0x108);
    uVar6 = FUN_03b461bc(uVar9,*(undefined8 *)(this + 0x110));
    if (uVar6 <= uVar8) {
      iVar2 = 0;
      goto LAB_03b46900;
    }
    plVar3 = (long *)FUN_03b461c8(uVar9,uVar8);
    lVar4 = FUN_03b461b4(*(undefined8 *)(*plVar3 + 0xe8));
    AlmanacPage::GetObjectType();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    cVar1 = std::operator==((string *)(lVar4 + 8),(string *)(lVar5 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
    uVar6 = uVar8 + 1;
  } while (cVar1 == '\0');
  local_18 = 0;
  iVar2 = *(int *)(*(long *)(this + 0x20) + 0x50);
  plVar3 = (long *)FUN_03b461c8(*(undefined8 *)(this + 0x108),uVar8);
  local_14 = (-*(int *)(*plVar3 + 0x48) - *(int *)(*plVar3 + 0x50) / 2) + iVar2 / 2;
  piVar7 = eastl::min_alt<int>(&local_18,&local_14);
  local_10[0] = iVar2 - *(int *)(this + 0x50);
  piVar7 = eastl::max_alt<int>(piVar7,local_10);
  iVar2 = *piVar7;
LAB_03b46900:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* UpgradesAlmanacPage::~UpgradesAlmanacPage() */

void __thiscall UpgradesAlmanacPage::~UpgradesAlmanacPage(UpgradesAlmanacPage *this)

{
  *(undefined ***)this = &PTR_GetClass_06731670;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067319b0;
  *(undefined ***)(this + 0xe0) = &PTR__UpgradesAlmanacPage_067319f8;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,false);
  std::vector<UpgradesAlmanacButton*,std::allocator<UpgradesAlmanacButton*>>::~vector
            ((vector<UpgradesAlmanacButton*,std::allocator<UpgradesAlmanacButton*>> *)(this + 0x108)
            );
  AlmanacPage::~AlmanacPage((AlmanacPage *)this);
  return;
}


/* non-virtual thunk to UpgradesAlmanacPage::~UpgradesAlmanacPage() */

void __thiscall UpgradesAlmanacPage::~UpgradesAlmanacPage(UpgradesAlmanacPage *this)

{
  ~UpgradesAlmanacPage(this + -0xe0);
  return;
}


/* UpgradesAlmanacPage::~UpgradesAlmanacPage() */

void __thiscall UpgradesAlmanacPage::~UpgradesAlmanacPage(UpgradesAlmanacPage *this)

{
  ~UpgradesAlmanacPage(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UpgradesAlmanacPage::~UpgradesAlmanacPage() */

void __thiscall UpgradesAlmanacPage::~UpgradesAlmanacPage(UpgradesAlmanacPage *this)

{
  ~UpgradesAlmanacPage(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UpgradesAlmanacPage::UpgradesAlmanacPage(AlmanacWidget*, Sexy::RtWeakPtr<ObjectTypeDescriptor
   const>, Sexy::TRect<int>) */

void __thiscall
UpgradesAlmanacPage::UpgradesAlmanacPage
          (UpgradesAlmanacPage *this,undefined8 param_1,RtWeakPtrBase *param_3,Insets *param_4)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  LawnApp *pLVar1;
  Widget *pWVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  RtWeakPtrBase *pRVar12;
  GameFeatureType *pGVar13;
  long lVar14;
  long lVar15;
  ProfileMgr *this_01;
  PlayerInfo *pPVar16;
  WorldDataManager *this_02;
  char *__s;
  UpgradesAlmanacButton *pUVar17;
  long *plVar18;
  int extraout_w1;
  int iVar19;
  undefined8 local_58;
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  Widget *local_48;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [24];
  undefined8 local_28 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,param_3);
  this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108);
  Sexy::Insets::Insets((Insets *)local_28,param_4);
  AlmanacPage::AlmanacPage((AlmanacPage *)this,param_1,aRStack_40,(Insets *)local_28,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  *(undefined ***)this = &PTR_GetClass_06731670;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_067319b0;
  *(undefined ***)(this + 0xe0) = &PTR__UpgradesAlmanacPage_067319f8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  iVar5 = FUN_03b4642c(10);
  iVar6 = FUN_03b4642c(6);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_40);
  uVar10 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable((Insets *)local_28,uVar10,0x16);
  while (bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)local_28), bVar3) {
    Sexy::RtDbTable::Iterator::operator*((Iterator *)local_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)&local_48);
    std::vector<Sexy::RtWeakPtr<GameFeatureType>,std::allocator<Sexy::RtWeakPtr<GameFeatureType>>>::
    push_back((vector<Sexy::RtWeakPtr<GameFeatureType>,std::allocator<Sexy::RtWeakPtr<GameFeatureType>>>
               *)aRStack_40,(RtWeakPtr *)aRStack_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    Sexy::RtId::~RtId((RtId *)&local_48);
    Sexy::RtDbTable::Iterator::operator++((Iterator *)local_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator((Iterator *)local_28);
  uVar10 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aRStack_40);
  uVar11 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)aRStack_40);
  std::
  sort<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,bool(*)(Sexy::RtWeakPtr<BoardEntity>,Sexy::RtWeakPtr<BoardEntity>)>
            (uVar10,uVar11,mapGreater);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)aRStack_40);
  iVar19 = iVar5;
  do {
    local_28[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)aRStack_40);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)local_28);
    if (!bVar3) {
      iVar6 = *(int *)(this + 0x4c);
      plVar18 = (long *)std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)this_00);
      iVar19 = *(int *)(*plVar18 + 0x48);
      plVar18 = (long *)std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)this_00);
      Sexy::Widget::Resize
                ((Widget *)this,*(int *)(this + 0x48),iVar6,
                 (iVar19 + *(int *)(*plVar18 + 0x50) + iVar5) - *(int *)(this + 0x48),
                 *(int *)(this + 0x54));
      std::vector<Sexy::RtWeakPtr<GameFeatureType>,std::allocator<Sexy::RtWeakPtr<GameFeatureType>>>
      ::~vector((vector<Sexy::RtWeakPtr<GameFeatureType>,std::allocator<Sexy::RtWeakPtr<GameFeatureType>>>
                 *)aRStack_40);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pRVar12 = (RtWeakPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,pRVar12);
    pGVar13 = (GameFeatureType *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    cVar4 = GameFeatureType::IsFeatureEnabled(pGVar13);
    pLVar1 = (LawnApp *)gLawnApp;
    if (cVar4 != '\0') {
      lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50)
      ;
      cVar4 = LawnApp::HasPlayerUnlockedFeature(pLVar1,*(undefined4 *)(lVar14 + 0x30));
      if (cVar4 == '\0') {
        lVar14 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
        lVar15 = FUN_05474184((string *)(lVar14 + 0x28));
        if (lVar15 != 0) {
          this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          pPVar16 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
          cVar4 = ProfileUtils::HasUnlockedWorld((string *)(lVar14 + 0x28),pPVar16);
          if (cVar4 != '\0') {
            this_02 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
            pGVar13 = (GameFeatureType *)
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
            __s = (char *)GameFeatureType::ToString(pGVar13);
            std::string::string((string *)local_28,__s);
            lVar14 = WorldDataManager::FindEventByDataName(this_02,(string *)local_28);
            std::string::~string((string *)local_28);
            nop();
            if (lVar14 != 0) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
              cVar4 = EA::Text::GlyphCache_Memory::EndUpdate(gLawnApp);
              goto joined_r0x03b4b6b0;
            }
          }
        }
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
        cVar4 = EA::Text::GlyphCache_Memory::EndUpdate(gLawnApp);
joined_r0x03b4b6b0:
        if (cVar4 != '\0') {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)local_28,(RtWeakPtrBase *)aRStack_50);
          pUVar17 = ::operator_new(0x100);
          UpgradesAlmanacButton::UpgradesAlmanacButton(pUVar17,(Insets *)local_28,0);
          local_48 = (Widget *)pUVar17;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28)
          ;
          std::vector<UpgradesAlmanacButton*,std::allocator<UpgradesAlmanacButton*>>::push_back
                    ((vector<UpgradesAlmanacButton*,std::allocator<UpgradesAlmanacButton*>> *)
                     this_00,(UpgradesAlmanacButton **)&local_48);
          Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,local_48);
          pWVar2 = local_48;
          uVar7 = FUN_03b4642c(0xf);
          uVar8 = FUN_03b4642c(0x104);
          uVar9 = FUN_03b4642c(0x1cc);
          (**(code **)(*(long *)pWVar2 + 0x198))(pWVar2,iVar19,uVar7,uVar8,uVar9);
          iVar19 = iVar19 + iVar6 + *(int *)(local_48 + 0x50);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    FUN_03b47088((__normal_iterator *)&local_58);
  } while( true );
}

