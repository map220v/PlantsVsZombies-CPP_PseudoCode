// Class: TGTableScrollPanel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGTableScrollPanel::GetTGPieceButtonId(int) */

void __thiscall TGTableScrollPanel::GetTGPieceButtonId(TGTableScrollPanel *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  TenYearRecordInfoPage *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xf8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0xf8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (TenYearRecordInfoPage *)*puVar3;
    iVar2 = TenYearRecordInfoPage::GetPageIndex(this_00);
    if (iVar2 == param_1) goto LAB_04bc91f0;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  this_00 = (TenYearRecordInfoPage *)0x0;
LAB_04bc91f0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* TGTableScrollPanel::RemoveLastSelect() */

void __thiscall TGTableScrollPanel::RemoveLastSelect(TGTableScrollPanel *this)

{
  TGPiece *this_00;
  
  if ((*(int *)(this + 0xe4) != -1) &&
     (this_00 = (TGPiece *)GetTGPieceButtonId(this,*(int *)(this + 0xe4)), this_00 != (TGPiece *)0x0
     )) {
    TGPiece::SetSelected(this_00,false);
    *(undefined4 *)(this + 0xe4) = 0xffffffff;
  }
  return;
}


/* TGTableScrollPanel::OnRemoveFromBox(int) */

void TGTableScrollPanel::OnRemoveFromBox(int param_1)

{
  TGPiece *this;
  TGTableScrollPanel *this_00;
  
  this_00 = (TGTableScrollPanel *)(ulong)(uint)param_1;
  if ((*(int *)(this_00 + 0xe4) != -1) &&
     (this = (TGPiece *)GetTGPieceButtonId(this_00,*(int *)(this_00 + 0xe4)), this != (TGPiece *)0x0
     )) {
    TGPiece::SetSelected(this,false);
    *(undefined4 *)(this_00 + 0xe4) = 0xffffffff;
  }
  return;
}


/* TGTableScrollPanel::~TGTableScrollPanel() */

void __thiscall TGTableScrollPanel::~TGTableScrollPanel(TGTableScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_0697b080;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0697b3a8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<TGPiece*,std::allocator<TGPiece*>>::~vector
            ((vector<TGPiece*,std::allocator<TGPiece*>> *)(this + 0xf8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TGTableScrollPanel::~TGTableScrollPanel() */

void __thiscall TGTableScrollPanel::~TGTableScrollPanel(TGTableScrollPanel *this)

{
  ~TGTableScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* TGTableScrollPanel::GetTGPiece() */

vector<TGPiece*,std::allocator<TGPiece*>> * TGTableScrollPanel::GetTGPiece(void)

{
  long in_x0;
  vector<TGPiece*,std::allocator<TGPiece*>> *in_x8;
  
  std::vector<TGPiece*,std::allocator<TGPiece*>>::vector(in_x8,(vector *)(in_x0 + 0xf8));
  return in_x8;
}


/* TGTableScrollPanel::IsSelectedValid(int) */

undefined8 __thiscall TGTableScrollPanel::IsSelectedValid(TGTableScrollPanel *this,int param_1)

{
  int iVar1;
  TGPiece *this_00;
  
  this_00 = (TGPiece *)GetTGPieceButtonId(this,param_1);
  if ((this_00 != (TGPiece *)0x0) && (iVar1 = TGPiece::GetQuantity(this_00), 0 < iVar1)) {
    return 1;
  }
  return 0;
}


/* TGTableScrollPanel::OnAddToBox(int, bool, bool) */

void TGTableScrollPanel::OnAddToBox(int param_1,bool param_2,bool param_3)

{
  int iVar1;
  TGPiece *this;
  
  this = (TGPiece *)GetTGPieceButtonId((TGTableScrollPanel *)(ulong)(uint)param_1,(uint)param_2);
  if (((this != (TGPiece *)0x0) && (iVar1 = TGPiece::GetQuantity(this), 0 < iVar1)) && (param_3)) {
    TGPiece::SetSelected(this,true);
    return;
  }
  return;
}


/* TGTableScrollPanel::SolveCurrentSelect(int) */

void __thiscall TGTableScrollPanel::SolveCurrentSelect(TGTableScrollPanel *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = gLawnApp;
  cVar1 = LawnApp::IsTGPieceTableUIValid(gLawnApp);
  if (cVar1 == '\0') {
    cVar1 = LawnApp::IsTGAvatarPieceTableUIValid(this_00);
    if (cVar1 == '\0') goto LAB_04bd4a50;
    plVar2 = (long *)LawnApp::GetTGAvatarPieceTableUI(this_00);
  }
  else {
    plVar2 = (long *)LawnApp::GetTGPieceTableUI(this_00);
  }
  (**(code **)(*plVar2 + 0x348))(plVar2,param_1);
LAB_04bd4a50:
  OnAddToBox((int)this,SUB41(param_1,0),true);
  *(int *)(this + 0xe4) = param_1;
  return;
}


/* TGTableScrollPanel::SelectPiece(int) */

void __thiscall TGTableScrollPanel::SelectPiece(TGTableScrollPanel *this,int param_1)

{
  char cVar1;
  
  if (param_1 == -1) {
    *(undefined4 *)(this + 0xe4) = 0xffffffff;
    return;
  }
  cVar1 = IsSelectedValid(this,param_1 + -1000000);
  if (cVar1 == '\0') {
    return;
  }
  RemoveLastSelect(this);
  SolveCurrentSelect(this,param_1 + -1000000);
  return;
}


/* TGTableScrollPanel::ButtonDepress(int) */

void __thiscall TGTableScrollPanel::ButtonDepress(TGTableScrollPanel *this,int param_1)

{
  char cVar1;
  
  if (param_1 == -1) {
    *(undefined4 *)(this + 0xe4) = 0xffffffff;
    return;
  }
  cVar1 = IsSelectedValid(this,param_1 + -1000000);
  if (cVar1 == '\0') {
    return;
  }
  RemoveLastSelect(this);
  SolveCurrentSelect(this,param_1 + -1000000);
  return;
}


/* non-virtual thunk to TGTableScrollPanel::ButtonDepress(int) */

void __thiscall TGTableScrollPanel::ButtonDepress(TGTableScrollPanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TGTableScrollPanel::InitView() */

void __thiscall TGTableScrollPanel::InitView(TGTableScrollPanel *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LawnApp *pLVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  string *psVar12;
  undefined8 uVar13;
  NameMapperBase *this_04;
  TGPiece *pTVar14;
  RtWeakPtrBase *pRVar15;
  ResourceInfo *pRVar16;
  long lVar17;
  int *piVar18;
  TGPieceTableUI *pTVar19;
  undefined8 uVar20;
  ulong uVar21;
  string *extraout_x1;
  ulong uVar22;
  int iVar23;
  int iVar24;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  TGPiece *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar7 = FUN_04bc5564(0xf);
  *(int *)(this + 0x54) = iVar7 << 1;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ad60);
  iVar8 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  iVar1 = iVar8 + iVar7;
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ad60);
  iVar9 = SalesProgressBar::GetCurrentLevel(this_01);
  iVar11 = *(int *)(this + 0xf0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = (iVar11 - iVar7) / iVar1;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  pLVar4 = gLawnApp;
  if (this[0xe0] == (TGTableScrollPanel)0x0) {
    cVar5 = LawnApp::IsTGPieceTableUIValid(gLawnApp);
    if (cVar5 == '\0') {
      cVar5 = LawnApp::IsTGAvatarPieceTableUIValid(pLVar4);
      if (cVar5 == '\0') goto LAB_04bd9568;
      LevelEditorCardPlantInterface::LevelEditorCardPlantInterface
                ((LevelEditorCardPlantInterface *)aRStack_70);
      while (bVar6 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                               ((ObjectTypeDirectoryIterator *)aRStack_70), bVar6) {
        ObjectTypeDirectoryIterator<PlantType>::operator*
                  ((ObjectTypeDirectoryIterator<PlantType> *)aRStack_70);
        cVar5 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)&local_68);
        if (((cVar5 == '\0') &&
            (lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68),
            *(char *)(lVar17 + 0x30) != '\0')) && (this_03 != (PlayerInfo *)0x0)) {
          uVar22 = 0;
          lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
          FUN_05475d88((NewAvatar *)&local_60,lVar17 + 8);
          NewAvatar::Common_GetPlantAvatarPiecesIdList((NewAvatar *)&local_60,extraout_x1);
          uVar20 = local_20;
          lVar17 = FUN_04bc4860(local_20,local_18);
          if (lVar17 != 0) {
            do {
              piVar18 = (int *)FUN_04bc486c(uVar20,uVar22);
              iVar11 = NewAvatar::Common_GetAvatarPieceNum(*piVar18);
              if (0 < iVar11) {
                pTVar19 = (TGPieceTableUI *)LawnApp::GetTGAvatarPieceTableUI(gLawnApp);
                lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
                TGPieceTableUI::AddPieceSummary(pTVar19,*(int *)(lVar17 + 0xd0),iVar11);
                lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
                uVar20 = FUN_04bc486c(local_20,uVar22);
                FUN_04bc59b4((pair *)&local_58,*(undefined4 *)(lVar17 + 0xd0),uVar20);
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           &local_38,(pair *)&local_58);
              }
              uVar20 = local_20;
              uVar22 = uVar22 + 1;
              uVar21 = FUN_04bc4860(local_20,local_18);
            } while (uVar22 < uVar21);
          }
          std::vector<int,std::allocator<int>>::~vector
                    ((vector<int,std::allocator<int>> *)&local_20);
          std::string::~string((string *)&local_60);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
        ObjectTypeDirectoryIterator<PlantType>::operator++
                  ((ObjectTypeDirectoryIterator<PlantType> *)aRStack_70);
      }
    }
    else {
      LevelEditorCardPlantInterface::LevelEditorCardPlantInterface
                ((LevelEditorCardPlantInterface *)&local_60);
      while (bVar6 = ObjectTypeDirectoryIterator::operator_cast_to_bool
                               ((ObjectTypeDirectoryIterator *)&local_60), bVar6) {
        ObjectTypeDirectoryIterator<PlantType>::operator*
                  ((ObjectTypeDirectoryIterator<PlantType> *)&local_60);
        cVar5 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)&local_58);
        if (((cVar5 == '\0') &&
            (lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58),
            *(char *)(lVar17 + 0x30) != '\0')) && (this_03 != (PlayerInfo *)0x0)) {
          lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
          FUN_05475d88((string *)&local_20,lVar17 + 8);
          iVar11 = PlayerInfo::GetPlantPieceCount(this_03,(string *)&local_20,false);
          if (0 < iVar11) {
            pTVar19 = (TGPieceTableUI *)LawnApp::GetTGPieceTableUI(gLawnApp);
            lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
            TGPieceTableUI::AddPieceSummary(pTVar19,*(int *)(lVar17 + 0xd0),iVar11);
            std::
            vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
            ::push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                         *)&local_50,(RtWeakPtr *)&local_58);
          }
          std::string::~string((string *)&local_20);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        ObjectTypeDirectoryIterator<PlantType>::operator++
                  ((ObjectTypeDirectoryIterator<PlantType> *)&local_60);
      }
    }
  }
  else {
    psVar12 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string((string *)&local_58,"snowpea");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar12);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
               *)&local_50,(RtWeakPtr *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    std::string::~string((string *)&local_58);
    nop();
    psVar12 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string((string *)&local_58,"torchwood");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar12);
    std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
    push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
               *)&local_50,(RtWeakPtr *)&local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    std::string::~string((string *)&local_58);
    nop();
    pTVar19 = (TGPieceTableUI *)LawnApp::GetTGPieceTableUI(gLawnApp);
    TGPieceTableUI::AddPieceSummary(pTVar19,1,2);
  }
  pLVar4 = gLawnApp;
  cVar5 = LawnApp::IsTGPieceTableUIValid(gLawnApp);
  if (cVar5 == '\0') {
    cVar5 = LawnApp::IsTGAvatarPieceTableUIValid(pLVar4);
    if (cVar5 != '\0') {
      iVar11 = FUN_04bc49f8(local_38,local_30);
      if (iVar11 < iVar3 * 2) {
        iVar11 = iVar3 * 2 - iVar11;
        if (0 < iVar11) {
          iVar23 = 0;
          do {
            local_60 = CONCAT44(local_60._4_4_,0xffffffff);
            local_58 = (TGPiece *)CONCAT44(local_58._4_4_,0xffffffff);
            iVar23 = iVar23 + 1;
            std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                      ((pair<wchar_t_const,wchar_t> *)&local_20,(wchar_t *)&local_60,
                       (wchar_t *)&local_58);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_38,
                       (pair *)&local_20);
          } while (iVar23 != iVar11);
        }
      }
      else {
        iVar23 = 0;
        if (iVar3 != 0) {
          iVar23 = iVar11 / iVar3;
        }
        iVar11 = iVar11 - iVar23 * iVar3;
        if ((iVar11 != 0) && (iVar11 = iVar3 - iVar11, 0 < iVar11)) {
          iVar23 = 0;
          do {
            local_60 = CONCAT44(local_60._4_4_,0xffffffff);
            local_58 = (TGPiece *)CONCAT44(local_58._4_4_,0xffffffff);
            iVar23 = iVar23 + 1;
            std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
                      ((pair<wchar_t_const,wchar_t> *)&local_20,(wchar_t *)&local_60,
                       (wchar_t *)&local_58);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_38,
                       (pair *)&local_20);
          } while (iVar23 != iVar11);
        }
      }
      iVar11 = 0;
      iVar23 = 0;
      uVar20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_38);
      uVar13 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
      FUN_04bd363c(uVar20,uVar13);
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_38);
      local_60 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_38);
      while (bVar6 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60),
            bVar6) {
        piVar18 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
        iVar24 = piVar18[1];
        if (iVar11 == iVar3) {
          iVar11 = 1;
          iVar10 = 0;
          iVar23 = iVar23 + 1;
        }
        else {
          iVar10 = iVar11 * iVar1;
          iVar11 = iVar11 + 1;
        }
        if (*piVar18 == -1) {
          iVar24 = 0;
        }
        iVar2 = iVar7 + (iVar9 + iVar7) * iVar23;
        Sexy::Insets::Insets((Insets *)&local_20,iVar7 + iVar10,iVar2,iVar8,iVar9);
        pTVar14 = ::operator_new(0x120);
        TGPiece::TGPiece(pTVar14,iVar24,(ButtonListener *)(this + 0xd8),(bool)this[0xe0]);
        local_58 = pTVar14;
        (**(code **)(*(long *)pTVar14 + 0x1a0))(pTVar14,(Insets *)&local_20);
        nop();
        (**(code **)(*(long *)this + 0x60))(this,local_58);
        std::vector<TGPiece*,std::allocator<TGPiece*>>::push_back
                  ((vector<TGPiece*,std::allocator<TGPiece*>> *)(this + 0xf8),&local_58);
        *(int *)(this + 0x54) = iVar2 + iVar9 + iVar7;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
      }
    }
  }
  else {
    iVar11 = FUN_04bc4a04(local_50,local_48);
    if (iVar11 < iVar3 * 2) {
      iVar11 = iVar3 * 2 - iVar11;
      iVar23 = 0;
      if (0 < iVar11) {
        do {
          iVar23 = iVar23 + 1;
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_20);
          std::
          vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
          ::push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                       *)&local_50,(RtWeakPtr *)&local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        } while (iVar23 != iVar11);
      }
    }
    else {
      iVar23 = 0;
      if (iVar3 != 0) {
        iVar23 = iVar11 / iVar3;
      }
      iVar11 = iVar11 - iVar23 * iVar3;
      if ((iVar11 != 0) && (iVar11 = iVar3 - iVar11, 0 < iVar11)) {
        iVar23 = 0;
        do {
          iVar23 = iVar23 + 1;
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_20);
          std::
          vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
          ::push_back((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
                       *)&local_50,(RtWeakPtr *)&local_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
        } while (iVar23 != iVar11);
      }
    }
    iVar11 = 0;
    iVar23 = 0;
    uVar20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_50);
    uVar13 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_50);
    std::
    sort<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<PlantType_const>*,std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>>,bool(*)(Sexy::RtWeakPtr<PlantType_const>const&,Sexy::RtWeakPtr<PlantType_const>const&)>
              (uVar20,uVar13,sortByRare);
    local_68 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
    local_60 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_50);
    while (bVar6 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60), bVar6)
    {
      pRVar15 = (RtWeakPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_70,pRVar15);
      if (iVar11 == iVar3) {
        iVar11 = 1;
        iVar24 = 0;
        iVar23 = iVar23 + 1;
      }
      else {
        iVar24 = iVar11 * iVar1;
        iVar11 = iVar11 + 1;
      }
      pRVar16 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_70);
      if (pRVar16 == (ResourceInfo *)0x0) {
        iVar10 = 0;
      }
      else {
        lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        FUN_05475d88((string *)&local_20,lVar17 + 8);
        this_04 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        iVar10 = NameMapperBase::GetIdForName(this_04,(string *)&local_20);
        std::string::~string((string *)&local_20);
      }
      iVar2 = iVar7 + (iVar9 + iVar7) * iVar23;
      Sexy::Insets::Insets((Insets *)&local_20,iVar7 + iVar24,iVar2,iVar8,iVar9);
      pTVar14 = ::operator_new(0x120);
      TGPiece::TGPiece(pTVar14,iVar10,(ButtonListener *)(this + 0xd8),(bool)this[0xe0]);
      local_58 = pTVar14;
      (**(code **)(*(long *)pTVar14 + 0x1a0))(pTVar14,(Insets *)&local_20);
      nop();
      (**(code **)(*(long *)this + 0x60))(this,local_58);
      std::vector<TGPiece*,std::allocator<TGPiece*>>::push_back
                ((vector<TGPiece*,std::allocator<TGPiece*>> *)(this + 0xf8),&local_58);
      *(int *)(this + 0x54) = iVar2 + iVar9 + iVar7;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
    }
  }
LAB_04bd9568:
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)&local_38);
  std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>
           *)&local_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* TGTableScrollPanel::TGTableScrollPanel(Sexy::TRect<int>&, bool) */

void __thiscall
TGTableScrollPanel::TGTableScrollPanel(TGTableScrollPanel *this,TRect *param_1,bool param_2)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  this[0xe0] = (TGTableScrollPanel)param_2;
  *(undefined4 *)(this + 0xe4) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_0697b080;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0697b3a8;
  Sexy::Insets::Insets((Insets *)(this + 0xe8),(Insets *)param_1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf8));
  *(undefined4 *)(this + 0xe4) = 0xffffffff;
  std::vector<TGPiece*,std::allocator<TGPiece*>>::clear
            ((vector<TGPiece*,std::allocator<TGPiece*>> *)(this + 0xf8));
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  InitView(this);
  return;
}

