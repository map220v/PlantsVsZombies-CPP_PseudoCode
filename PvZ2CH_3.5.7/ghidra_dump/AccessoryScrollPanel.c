// Class: AccessoryScrollPanel


/* AccessoryScrollPanel::~AccessoryScrollPanel() */

void __thiscall AccessoryScrollPanel::~AccessoryScrollPanel(AccessoryScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_06914000;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
  std::vector<AccessoryContent*,std::allocator<AccessoryContent*>>::~vector
            ((vector<AccessoryContent*,std::allocator<AccessoryContent*>> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AccessoryScrollPanel::~AccessoryScrollPanel() */

void __thiscall AccessoryScrollPanel::~AccessoryScrollPanel(AccessoryScrollPanel *this)

{
  ~AccessoryScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* AccessoryScrollPanel::SelectDefaultContent() */

void __thiscall AccessoryScrollPanel::SelectDefaultContent(AccessoryScrollPanel *this)

{
  undefined *this_00;
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = std::vector<AccessoryContent*,std::allocator<AccessoryContent*>>::empty
                    ((vector<AccessoryContent*,std::allocator<AccessoryContent*>> *)(this + 0xd8));
  if (cVar1 != '\0') {
    return;
  }
  puVar2 = (undefined8 *)FUN_0494fc04(*(undefined8 *)(this + 0xd8),0);
  AccessoryContent::SetSelected((AccessoryContent *)*puVar2,true);
  puVar2 = (undefined8 *)FUN_0494fc04(*(undefined8 *)(this + 0xd8),0);
  AccessoryContent::UnselectOtherContents((AccessoryContent *)*puVar2);
  this_00 = gMessageRouter;
  puVar2 = (undefined8 *)FUN_0494fc04(*(undefined8 *)(this + 0xd8),0);
  MessageRouter::Post<AccessoryContent*,AccessoryContent*>
            ((MessageRouter *)this_00,Message::NoticeMainUI,(AccessoryContent *)*puVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessoryScrollPanel::LinkContents(std::vector<AccessoryContent*,
   std::allocator<AccessoryContent*> >) */

void __thiscall AccessoryScrollPanel::LinkContents(undefined8 param_1,vector *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  AccessoryContent *pAVar4;
  undefined8 uVar5;
  vector<AccessoryContent*,std::allocator<AccessoryContent*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)param_2;
    uVar2 = FUN_0494fbf8(uVar5,*(undefined8 *)(param_2 + 8));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_0494fc0c(uVar5,uVar3);
    pAVar4 = (AccessoryContent *)*puVar1;
    std::vector<AccessoryContent*,std::allocator<AccessoryContent*>>::vector(avStack_20,param_2);
    AccessoryContent::LinkContents(pAVar4,avStack_20);
    std::vector<AccessoryContent*,std::allocator<AccessoryContent*>>::~vector(avStack_20);
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AccessoryScrollPanel::InitView() */

void __thiscall AccessoryScrollPanel::InitView(AccessoryScrollPanel *this)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  RtWeakPtrBase *pRVar13;
  string *psVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  PlantAccessoryMgr *pPVar19;
  AccessoryContent *pAVar20;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  undefined8 *puVar21;
  PlantNameMapperServerID *pPVar22;
  int *piVar23;
  int iVar24;
  ulong uVar25;
  RtWeakPtr<Sexy::SoundResource> aRStack_70 [8];
  AccessoryContent *local_68;
  string asStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  AccessoryPieceUIInfo aAStack_40 [8];
  undefined4 local_38;
  undefined1 auStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71608);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b71608);
  iVar5 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar6 = FUN_04950334(5);
  iVar1 = *(int *)(this + 0x50);
  iVar7 = FUN_04950334(4);
  iVar1 = iVar1 + iVar6 * -2 + iVar4 * -6 + iVar7 * -5;
  if ((*(int *)(this + 0xf8) - 3U < 2) || (*(int *)(this + 0xf8) == 1)) {
    this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
    if ((this_03 != (PlayerInfo *)0x0) &&
       (iVar7 = PlayerInfo::GetAccessoryInfosSize(this_03), 0 < iVar7)) {
      puVar21 = (undefined8 *)PlayerInfo::GetPlantAccessoryInfos(this_03);
      pPVar22 = (PlantNameMapperServerID *)PlantNameMapper::GetInstance();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aAStack_40,(RtWeakPtrBase *)(this + 0x100));
      iVar7 = PlantNameMapperServerID::GetIdForType
                        (pPVar22,(RtWeakPtr<Sexy::SoundResource> *)aAStack_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aAStack_40);
      if (0 < *(int *)(this + 0xd4)) {
        uVar25 = 0;
        iVar9 = 0;
        iVar10 = iVar1;
        do {
          pPVar19 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
          iVar24 = (int)uVar25;
          lVar15 = FUN_0494fc14(*puVar21,uVar25);
          PlantAccessoryMgr::GetAccessoryUIInfo(pPVar19,(string *)(lVar15 + 8));
          piVar23 = (int *)FUN_0494fc14(*puVar21,uVar25);
          if (*piVar23 < 1) {
            iVar12 = *(int *)(this + 0xf8);
            iVar11 = 0;
            if (iVar12 == 1) goto LAB_04957bbc;
LAB_04957b48:
            uVar2 = iVar11 != 0;
          }
          else {
            iVar11 = 2;
            if (iVar7 != *piVar23) {
              iVar11 = 1;
            }
            iVar12 = *(int *)(this + 0xf8);
            if (iVar12 != 1) goto LAB_04957b48;
LAB_04957bbc:
            uVar17 = Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)(this + 0x100));
            lVar15 = FUN_0494fc14(*puVar21,uVar25);
            uVar2 = PlantAccessoryMgr::IsTargetPlantDisabled
                              (uVar17,(AccessoryPieceUIInfo *)&local_58,lVar15 + 8);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
            iVar12 = *(int *)(this + 0xf8);
          }
          if (iVar12 == 4) {
            psVar14 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
            FUN_0494fc14(*puVar21,uVar25);
            PlantAccessoryMgr::GetAccessoryByType(psVar14);
            bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_58);
            if ((!bVar3) ||
               (lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58),
               *(int *)(lVar15 + 0x80) == 5)) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
              goto LAB_049579d8;
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
            TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aAStack_40)
            ;
          }
          else {
LAB_049579d8:
            AccessoryPieceUIInfo::AccessoryPieceUIInfo((AccessoryPieceUIInfo *)&local_58);
            lVar15 = FUN_0494fc14(*puVar21,uVar25);
            FUN_05475d88(asStack_60,lVar15 + 8);
            pAVar20 = ::operator_new(0x180);
            AccessoryContent::AccessoryContent
                      (pAVar20,uVar25 & 0xffffffff,iVar11,
                       (RtWeakPtr<Sexy::SoundResource> *)aAStack_40,1,asStack_60,uVar2,
                       (AccessoryPieceUIInfo *)&local_58,*(undefined4 *)(this + 0xf8));
            local_68 = pAVar20;
            std::string::~string(asStack_60);
            if ((iVar9 == (iVar9 / 6) * 6) && (iVar9 != 0)) {
              iVar10 = FUN_04950334(6);
              iVar6 = iVar6 + iVar5 + iVar10;
              iVar10 = iVar1;
            }
            iVar9 = iVar9 + 1;
            (**(code **)(*(long *)local_68 + 0x198))(local_68,iVar10,iVar6,iVar4,iVar5);
            (**(code **)(*(long *)this + 0x60))(this,local_68);
            std::vector<AccessoryContent*,std::allocator<AccessoryContent*>>::push_back
                      ((vector<AccessoryContent*,std::allocator<AccessoryContent*>> *)(this + 0xd8),
                       &local_68);
            iVar11 = FUN_04950334(4);
            iVar10 = iVar10 + iVar4 + iVar11;
            AccessoryPieceUIInfo::~AccessoryPieceUIInfo((AccessoryPieceUIInfo *)&local_58);
            TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aAStack_40)
            ;
          }
          uVar25 = uVar25 + 1;
        } while (iVar24 + 1 < *(int *)(this + 0xd4));
      }
    }
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58);
    uVar25 = 0;
    while( true ) {
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
      uVar16 = FUN_0494fc1c(*(undefined8 *)(lVar15 + 0x60),*(undefined8 *)(lVar15 + 0x68));
      if (uVar16 <= uVar25) break;
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xf0));
      pRVar13 = (RtWeakPtrBase *)FUN_0494fc28(*(undefined8 *)(lVar15 + 0x60),uVar25);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_70,pRVar13);
      lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
      ;
      FUN_05475d88((string *)&local_68,lVar15 + 0x80);
      pPVar19 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
      uVar8 = PlantAccessoryMgr::GetOwnedPieces(pPVar19,(string *)&local_68);
      AccessoryPieceUIInfo::AccessoryPieceUIInfo(aAStack_40);
      thunk_FUN_05475e00(aAStack_40,(string *)&local_68);
      local_38 = uVar8;
      psVar14 = (string *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
      PlantAccessoryMgr::GetAccessoryPieceDisplayImage(psVar14);
      thunk_FUN_05475e00(auStack_30,asStack_60);
      std::string::~string(asStack_60);
      std::vector<AccessoryPieceUIInfo,std::allocator<AccessoryPieceUIInfo>>::push_back
                ((vector<AccessoryPieceUIInfo,std::allocator<AccessoryPieceUIInfo>> *)&local_58,
                 aAStack_40);
      AccessoryPieceUIInfo::~AccessoryPieceUIInfo(aAStack_40);
      std::string::~string((string *)&local_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      uVar25 = uVar25 + 1;
    }
    uVar25 = 0;
    uVar17 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_58);
    uVar18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_58);
    std::
    sort<__gnu_cxx::__normal_iterator<AccessoryPieceUIInfo*,std::vector<AccessoryPieceUIInfo,std::allocator<AccessoryPieceUIInfo>>>,bool(*)(AccessoryPieceUIInfo,AccessoryPieceUIInfo)>
              (uVar17,uVar18,accessoryPieceLesser);
    iVar7 = iVar1;
    while( true ) {
      uVar17 = local_58;
      iVar9 = (int)uVar25;
      uVar16 = FUN_0494fc30(local_58,local_50);
      if (uVar16 <= uVar25) break;
      uVar17 = FUN_0494fc44(uVar17,uVar25);
      FUN_05475d88((string *)aRStack_70,uVar17);
      pPVar19 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
      PlantAccessoryMgr::GetAccessoryUIInfo(pPVar19,(string *)aRStack_70);
      pPVar19 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
      uVar8 = PlantAccessoryMgr::IsAccessoryPiecesFull(pPVar19,(string *)aRStack_70);
      FUN_05475d88(asStack_60,(string *)aRStack_70);
      uVar17 = FUN_0494fc44(local_58,uVar25);
      pAVar20 = ::operator_new(0x180);
      AccessoryContent::AccessoryContent
                (pAVar20,uVar25 & 0xffffffff,0,aAStack_40,uVar8,asStack_60,0,uVar17,
                 *(undefined4 *)(this + 0xf8));
      local_68 = pAVar20;
      std::string::~string(asStack_60);
      if ((iVar9 == (iVar9 / 6) * 6) && (iVar9 != 0)) {
        iVar7 = FUN_04950334(6);
        iVar6 = iVar6 + iVar5 + iVar7;
        iVar7 = iVar1;
      }
      uVar25 = uVar25 + 1;
      (**(code **)(*(long *)local_68 + 0x198))(local_68,iVar7,iVar6,iVar4,iVar5);
      (**(code **)(*(long *)this + 0x60))(this,local_68);
      std::vector<AccessoryContent*,std::allocator<AccessoryContent*>>::push_back
                ((vector<AccessoryContent*,std::allocator<AccessoryContent*>> *)(this + 0xd8),
                 &local_68);
      iVar9 = FUN_04950334(4);
      iVar7 = iVar7 + iVar4 + iVar9;
      TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aAStack_40);
      std::string::~string((string *)aRStack_70);
    }
    std::vector<AccessoryPieceUIInfo,std::allocator<AccessoryPieceUIInfo>>::~vector
              ((vector<AccessoryPieceUIInfo,std::allocator<AccessoryPieceUIInfo>> *)&local_58);
  }
  *(int *)(this + 0x54) = iVar6 + iVar5;
  std::vector<AccessoryContent*,std::allocator<AccessoryContent*>>::vector
            ((vector<AccessoryContent*,std::allocator<AccessoryContent*>> *)aAStack_40,
             (vector *)(this + 0xd8));
  LinkContents(this,(vector<AccessoryContent*,std::allocator<AccessoryContent*>> *)aAStack_40);
  std::vector<AccessoryContent*,std::allocator<AccessoryContent*>>::~vector
            ((vector<AccessoryContent*,std::allocator<AccessoryContent*>> *)aAStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AccessoryScrollPanel::AccessoryScrollPanel(Sexy::TRect<int>&, int,
   Sexy::RtWeakPtr<MagentoCategoryProps> const&, PlantAccessoryUITabPanel, Sexy::RtWeakPtr<PlantType
   const>) */

void __thiscall
AccessoryScrollPanel::AccessoryScrollPanel
          (AccessoryScrollPanel *this,TRect *param_1,undefined4 param_2,RtWeakPtrBase *param_3,
          undefined4 param_5,RtWeakPtrBase *param_6)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined4 *)(this + 0xd4) = param_2;
  *(undefined ***)this = &PTR_GetClass_06914000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0xf0),param_3);
  *(undefined4 *)(this + 0xf8) = param_5;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x100),param_6);
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  std::vector<AccessoryContent*,std::allocator<AccessoryContent*>>::clear
            ((vector<AccessoryContent*,std::allocator<AccessoryContent*>> *)(this + 0xd8));
  InitView(this);
  return;
}

