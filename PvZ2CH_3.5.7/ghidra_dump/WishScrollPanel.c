// Class: WishScrollPanel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishScrollPanel::SelectWishInPanel(int) */

void __thiscall WishScrollPanel::SelectWishInPanel(WishScrollPanel *this,int param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  BasePowerup *pBVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  iVar1 = *(int *)(this + 0xf8);
  local_8 = ___stack_chk_guard;
  if (iVar1 != param_1) {
    if (-1 < iVar1) {
      uVar5 = *(undefined8 *)(this + 0xe0);
      uVar2 = FUN_043bae78(uVar5,*(undefined8 *)(this + 0xe8));
      if ((ulong)(long)iVar1 < uVar2) {
        puVar3 = (undefined8 *)FUN_043bae84(uVar5,(long)iVar1);
        if ((UniverseUnlockGate *)*puVar3 != (UniverseUnlockGate *)0x0) {
          UniverseUnlockGate::SetIsSelected((UniverseUnlockGate *)*puVar3,false);
        }
      }
    }
    if (-1 < param_1) {
      uVar5 = *(undefined8 *)(this + 0xe0);
      uVar2 = FUN_043bae78(uVar5,*(undefined8 *)(this + 0xe8));
      if ((ulong)(long)param_1 < uVar2) {
        puVar3 = (undefined8 *)FUN_043bae84(uVar5,(long)param_1);
        if ((UniverseUnlockGate *)*puVar3 != (UniverseUnlockGate *)0x0) {
          UniverseUnlockGate::SetIsSelected((UniverseUnlockGate *)*puVar3,true);
          pBVar4 = (BasePowerup *)Sexy::LazySingleton<FestivalManager>::GetInstance();
          WishContent::GetProps();
          BasePowerup::SetPowerupType(pBVar4,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          *(int *)(this + 0xf8) = param_1;
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishScrollPanel::ButtonDepress(int) */

void __thiscall WishScrollPanel::ButtonDepress(WishScrollPanel *this,int param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  BasePowerup *pBVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long lStack_8;
  
  iVar1 = *(int *)(this + 0xf8);
  lStack_8 = ___stack_chk_guard;
  if (iVar1 != param_1) {
    if (-1 < iVar1) {
      uVar5 = *(undefined8 *)(this + 0xe0);
      uVar2 = FUN_043bae78(uVar5,*(undefined8 *)(this + 0xe8));
      if ((ulong)(long)iVar1 < uVar2) {
        puVar3 = (undefined8 *)FUN_043bae84(uVar5,(long)iVar1);
        if ((UniverseUnlockGate *)*puVar3 != (UniverseUnlockGate *)0x0) {
          UniverseUnlockGate::SetIsSelected((UniverseUnlockGate *)*puVar3,false);
        }
      }
    }
    if (-1 < param_1) {
      uVar5 = *(undefined8 *)(this + 0xe0);
      uVar2 = FUN_043bae78(uVar5,*(undefined8 *)(this + 0xe8));
      if ((ulong)(long)param_1 < uVar2) {
        puVar3 = (undefined8 *)FUN_043bae84(uVar5,(long)param_1);
        if ((UniverseUnlockGate *)*puVar3 != (UniverseUnlockGate *)0x0) {
          UniverseUnlockGate::SetIsSelected((UniverseUnlockGate *)*puVar3,true);
          pBVar4 = (BasePowerup *)Sexy::LazySingleton<FestivalManager>::GetInstance();
          WishContent::GetProps();
          BasePowerup::SetPowerupType(pBVar4,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          *(int *)(this + 0xf8) = param_1;
        }
      }
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WishScrollPanel::ButtonDepress(int) */

void __thiscall WishScrollPanel::ButtonDepress(WishScrollPanel *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WishScrollPanel::~WishScrollPanel() */

void __thiscall WishScrollPanel::~WishScrollPanel(WishScrollPanel *this)

{
  *(undefined ***)this = &PTR_GetClass_06843620;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06843948;
  std::vector<WishContent*,std::allocator<WishContent*>>::clear
            ((vector<WishContent*,std::allocator<WishContent*>> *)(this + 0xe0));
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x100));
  std::vector<WishContent*,std::allocator<WishContent*>>::~vector
            ((vector<WishContent*,std::allocator<WishContent*>> *)(this + 0xe0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* WishScrollPanel::~WishScrollPanel() */

void __thiscall WishScrollPanel::~WishScrollPanel(WishScrollPanel *this)

{
  ~WishScrollPanel(this);
  AK::FreeHook(this);
  return;
}


/* WishScrollPanel::AddPlantDataIntoPlantList(std::string) */

undefined8 __thiscall
WishScrollPanel::AddPlantDataIntoPlantList(WishScrollPanel *this,string *param_2)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x100);
  lVar2 = FUN_043bae3c(uVar5,*(undefined8 *)(this + 0x108));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)(this + 0x100),param_2);
      return 1;
    }
    psVar3 = (string *)FUN_043bae48(uVar5,lVar4);
    cVar1 = std::operator==(psVar3,param_2);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishScrollPanel::InitCurrentPlantNameList() */

void __thiscall WishScrollPanel::InitCurrentPlantNameList(WishScrollPanel *this)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ProfileMgr *this_00;
  DailySignRewardWithTW *this_01;
  vector<FestivalPlantRandomIndex,std::allocator<FestivalPlantRandomIndex>> *this_02;
  long lVar8;
  ActivityConfig *pAVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 uVar12;
  string *psVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  byte local_7d;
  int local_7c;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_40 [24];
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (DailySignRewardWithTW *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (DailySignRewardWithTW *)0x0) {
    this_02 = (vector<FestivalPlantRandomIndex,std::allocator<FestivalPlantRandomIndex>> *)
              DailySignRewardWithTW::getRewardListData(this_01);
    cVar2 = std::vector<FestivalPlantRandomIndex,std::allocator<FestivalPlantRandomIndex>>::empty
                      (this_02);
    if (cVar2 != '\0') {
      PlayerInfo::RefreshPlantRandomIndexList((PlayerInfo *)this_01);
    }
    lVar14 = 0;
    std::vector<FestivalPlantRandomIndex,std::allocator<FestivalPlantRandomIndex>>::vector
              ((vector<FestivalPlantRandomIndex,std::allocator<FestivalPlantRandomIndex>> *)
               &local_70,(vector *)this_02);
    FestivalPlantRandomIndex::FestivalPlantRandomIndex((FestivalPlantRandomIndex *)&local_28);
    lVar8 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    iVar4 = FUN_043bae28(*(undefined4 *)(lVar8 + 8));
    lVar8 = Sexy::LazySingleton<FestivalManager>::GetInstance();
    iVar5 = FUN_043bae34(*(undefined4 *)(lVar8 + 0xc));
    pAVar9 = (ActivityConfig *)LawnApp::GetActivityConfig();
    iVar6 = ActivityConfig::GetGetWeeklyGameModesPlantCount(pAVar9,iVar4,iVar5);
    lVar8 = FUN_043bae50(local_70,local_68);
    if (lVar8 != 0) {
      do {
        piVar10 = (int *)FUN_043bae5c(local_70,lVar14);
        if ((*piVar10 == iVar4) && (piVar10[1] == iVar5)) {
          local_28 = *(undefined8 *)piVar10;
          local_20 = *(ulong *)(piVar10 + 2);
          local_18 = *(ulong *)(piVar10 + 4);
          local_10 = *(ulong *)(piVar10 + 6);
          break;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != lVar8);
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58);
    pAVar9 = (ActivityConfig *)LawnApp::GetActivityConfig();
    cVar2 = ActivityConfig::GetGetWeeklyGameModesPlantArray
                      (pAVar9,iVar4,iVar5,2,
                       (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58);
    if ((cVar2 != '\0') &&
       (cVar2 = std::vector<std::string,std::allocator<std::string>>::empty
                          ((vector<std::string,std::allocator<std::string>> *)&local_58),
       cVar2 == '\0')) {
      Sexy::SRand(local_10);
      pAVar9 = (ActivityConfig *)LawnApp::GetActivityConfig();
      fVar16 = (float)ActivityConfig::GetCurrentPlantListDrowWeight(pAVar9,iVar4,iVar5,2);
      iVar7 = Sexy::Rand();
      uVar12 = local_58;
      uVar11 = FUN_043bae3c(local_58,local_50);
      if ((float)iVar7 * _FUN_043be2c0 <= fVar16) {
        iVar1 = 0;
        if (uVar11 != 0) {
          iVar1 = (int)((ulong)(long)iVar7 / uVar11);
        }
        iVar6 = iVar6 + -1;
        psVar13 = (string *)FUN_043bae48(uVar12,(long)(iVar7 - iVar1 * (int)uVar11));
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)(this + 0x100),psVar13);
      }
    }
    std::vector<std::string,std::allocator<std::string>>::clear
              ((vector<std::string,std::allocator<std::string>> *)&local_58);
    pAVar9 = (ActivityConfig *)LawnApp::GetActivityConfig();
    cVar2 = ActivityConfig::GetGetWeeklyGameModesPlantArray
                      (pAVar9,iVar4,iVar5,1,
                       (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58);
    if ((cVar2 != '\0') &&
       (cVar2 = std::vector<std::string,std::allocator<std::string>>::empty
                          ((vector<std::string,std::allocator<std::string>> *)&local_58),
       cVar2 == '\0')) {
      Sexy::SRand(local_18);
      pAVar9 = (ActivityConfig *)LawnApp::GetActivityConfig();
      fVar16 = (float)ActivityConfig::GetCurrentPlantListDrowWeight(pAVar9,iVar4,iVar5,1);
      iVar7 = Sexy::Rand();
      uVar12 = local_58;
      uVar11 = FUN_043bae3c(local_58,local_50);
      if ((float)iVar7 * _FUN_043be2c0 <= fVar16) {
        iVar1 = 0;
        if (uVar11 != 0) {
          iVar1 = (int)((ulong)(long)iVar7 / uVar11);
        }
        iVar6 = iVar6 + -1;
        psVar13 = (string *)FUN_043bae48(uVar12,(long)(iVar7 - iVar1 * (int)uVar11));
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)(this + 0x100),psVar13);
      }
    }
    std::vector<std::string,std::allocator<std::string>>::clear
              ((vector<std::string,std::allocator<std::string>> *)&local_58);
    pAVar9 = (ActivityConfig *)LawnApp::GetActivityConfig();
    cVar2 = ActivityConfig::GetGetWeeklyGameModesPlantArray
                      (pAVar9,iVar4,iVar5,0,
                       (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58);
    if ((cVar2 == '\0') ||
       (bVar3 = std::vector<std::string,std::allocator<std::string>>::empty
                          ((vector<std::string,std::allocator<std::string>> *)&local_58), bVar3 != 0
       )) {
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)&local_58);
      std::vector<FestivalPlantRandomIndex,std::allocator<FestivalPlantRandomIndex>>::~vector
                ((vector<FestivalPlantRandomIndex,std::allocator<FestivalPlantRandomIndex>> *)
                 &local_70);
    }
    else {
      local_7d = bVar3;
      pAVar9 = (ActivityConfig *)LawnApp::GetActivityConfig();
      ActivityConfig::IsWeeklyGameModesPlantArrayAvatar(pAVar9,iVar4,&local_7d);
      pAVar9 = (ActivityConfig *)LawnApp::GetActivityConfig();
      fVar15 = (float)ActivityConfig::GetCurrentPlantListDrowWeight(pAVar9,iVar4,iVar5,0);
      Sexy::SRand(local_20);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_40);
      std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)avStack_40);
      local_78[0] = 0xffffffff;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_40,(int *)local_78);
      fVar16 = _FUN_043be2c0;
      while (iVar6 != 0) {
        while( true ) {
          do {
            iVar5 = Sexy::Rand();
            uVar12 = local_58;
            uVar11 = FUN_043bae3c(local_58,local_50);
            iVar4 = 0;
            if (uVar11 != 0) {
              iVar4 = (int)((ulong)(long)iVar5 / uVar11);
            }
            local_7c = iVar5 - iVar4 * (int)uVar11;
          } while (fVar15 < (float)iVar5 * fVar16);
          uVar12 = FUN_043bae48(uVar12,(long)local_7c);
          FUN_05475d88((string *)local_78,uVar12);
          cVar2 = AddPlantDataIntoPlantList(this,(string *)local_78);
          std::string::~string((string *)local_78);
          if (cVar2 == '\0') break;
          iVar6 = iVar6 + -1;
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_40,&local_7c);
          if (iVar6 == 0) goto LAB_043be16c;
        }
      }
LAB_043be16c:
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_40);
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)&local_58);
      std::vector<FestivalPlantRandomIndex,std::allocator<FestivalPlantRandomIndex>>::~vector
                ((vector<FestivalPlantRandomIndex,std::allocator<FestivalPlantRandomIndex>> *)
                 &local_70);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishScrollPanel::InitView() */

void __thiscall WishScrollPanel::InitView(WishScrollPanel *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ProfileMgr *this_00;
  long lVar8;
  FestivalManager *pFVar9;
  int *piVar10;
  ActivityConfig *pAVar11;
  RtWeakPtrBase *pRVar12;
  string *psVar13;
  ulong uVar14;
  WishContent *pWVar15;
  ulong uVar16;
  undefined1 extraout_w1;
  undefined1 extraout_w1_00;
  undefined1 uVar17;
  code *pcVar18;
  int iVar19;
  ulong uVar20;
  char local_59;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_50 [8];
  WishContent *local_48;
  undefined8 local_40;
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::GetCurrentProfile(this_00);
  iVar3 = FUN_043bb090(5);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  lVar8 = Sexy::LazySingleton<FestivalManager>::GetInstance();
  iVar4 = FUN_043bae34(*(undefined4 *)(lVar8 + 0xc));
  pFVar9 = (FestivalManager *)Sexy::LazySingleton<FestivalManager>::GetInstance();
  FestivalManager::GetFestivalRewardMap(pFVar9,amStack_38,iVar4);
  local_59 = '\0';
  local_48 = (WishContent *)
             std::
             map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
             ::begin((map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
                      *)amStack_38);
  while( true ) {
    local_40 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)amStack_38);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_48,(rbtree_iterator *)&local_40);
    if (!bVar1) break;
    piVar10 = (int *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
    if ((*piVar10 == 2) && (0 < piVar10[1])) {
      local_59 = '\x01';
    }
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_48);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_58);
  lVar8 = Sexy::LazySingleton<FestivalManager>::GetInstance();
  uVar5 = FUN_043bae28(*(undefined4 *)(lVar8 + 8));
  lVar8 = LawnApp::GetActivityConfig();
  uVar17 = extraout_w1;
  if (lVar8 != 0) {
    pAVar11 = (ActivityConfig *)LawnApp::GetActivityConfig();
    ActivityConfig::IsWeeklyGameModesPlantArrayAvatar(pAVar11,uVar5,&local_59);
    uVar17 = extraout_w1_00;
  }
  if (local_59 == '\0') {
    Magento::GetPlantPieceProductsData((Magento *)0x0,(bool)uVar17);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_58,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    if (iVar4 == 0) {
      iVar4 = FUN_043bb090(0x50);
      iVar3 = iVar3 + iVar4;
      iVar4 = FUN_043bb090(0x41);
    }
    else {
      iVar4 = FUN_043bb090(0x14);
    }
    uVar20 = 0;
    iVar19 = 0;
    while( true ) {
      uVar16 = FUN_043bae3c(*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108));
      if (uVar16 <= uVar20) break;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_50);
      uVar16 = 0;
      while( true ) {
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
        uVar14 = FUN_043bae64(*(undefined8 *)(lVar8 + 0x60),*(undefined8 *)(lVar8 + 0x68));
        if (uVar14 <= uVar16) break;
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
        pRVar12 = (RtWeakPtrBase *)FUN_043bae70(*(undefined8 *)(lVar8 + 0x60),uVar16);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_40,pRVar12);
        psVar13 = (string *)FUN_043bae48(*(undefined8 *)(this + 0x100),uVar20);
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40)
        ;
        cVar2 = std::operator==(psVar13,(string *)(lVar8 + 0x80));
        if (cVar2 != '\0') {
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                    ((RtWeakPtr<PowerPropertySheet> *)a_Stack_50,(RtWeakPtr *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          break;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        uVar16 = uVar16 + 1;
      }
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_50);
      if (cVar2 == '\0') {
        uVar20 = uVar20 + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_50)
        ;
      }
      else {
        uVar20 = uVar20 + 1;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)a_Stack_50);
        pWVar15 = ::operator_new(0x118);
        WishContent::WishContent
                  (pWVar15,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,iVar19,this + 0xd8);
        local_48 = pWVar15;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        pWVar15 = local_48;
        pcVar18 = *(code **)(*(long *)local_48 + 0x198);
        uVar6 = FUN_043bb090(0x58);
        lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b036f0);
        uVar5 = *(undefined4 *)(lVar8 + 0x38);
        lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b036f0);
        iVar7 = FUN_043bb090(0x50);
        (*pcVar18)(pWVar15,iVar3,uVar6,uVar5,iVar7 + *(int *)(lVar8 + 0x3c));
        (**(code **)(*(long *)this + 0x60))(this,local_48);
        std::vector<WishContent*,std::allocator<WishContent*>>::push_back
                  ((vector<WishContent*,std::allocator<WishContent*>> *)(this + 0xe0),&local_48);
        lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b036f0);
        iVar3 = iVar3 + iVar4 + *(int *)(lVar8 + 0x38);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_50)
        ;
        iVar19 = iVar19 + 1;
      }
    }
  }
  else {
    Magento::GetPlantPieceProductsData((Magento *)0x1,(bool)uVar17);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_58,(RtWeakPtr *)&local_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    if (iVar4 == 0) {
      iVar4 = FUN_043bb090(0x50);
      iVar3 = iVar3 + iVar4;
      iVar4 = FUN_043bb090(0x41);
    }
    else {
      iVar4 = FUN_043bb090(0x14);
    }
    uVar20 = 0;
    iVar19 = 0;
    lVar8 = FUN_043bae3c(*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108));
    if (lVar8 != 0) {
      do {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_50);
        uVar16 = 0;
        while( true ) {
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
          uVar14 = FUN_043bae64(*(undefined8 *)(lVar8 + 0x60),*(undefined8 *)(lVar8 + 0x68));
          if (uVar14 <= uVar16) break;
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
          pRVar12 = (RtWeakPtrBase *)FUN_043bae70(*(undefined8 *)(lVar8 + 0x60),uVar16);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,pRVar12);
          psVar13 = (string *)FUN_043bae48(*(undefined8 *)(this + 0x100),uVar20);
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          cVar2 = std::operator==(psVar13,(string *)(lVar8 + 0x80));
          if (cVar2 != '\0') {
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)a_Stack_50,(RtWeakPtr *)&local_40);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
            break;
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          uVar16 = uVar16 + 1;
        }
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_50);
        if (cVar2 == '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_50);
        }
        else {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)a_Stack_50);
          pWVar15 = ::operator_new(0x118);
          WishContent::WishContent
                    (pWVar15,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40,iVar19,this + 0xd8);
          local_48 = pWVar15;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          pWVar15 = local_48;
          pcVar18 = *(code **)(*(long *)local_48 + 0x198);
          uVar6 = FUN_043bb090(0x58);
          lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b036f0);
          uVar5 = *(undefined4 *)(lVar8 + 0x38);
          lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b036f0);
          iVar7 = FUN_043bb090(0x50);
          (*pcVar18)(pWVar15,iVar3,uVar6,uVar5,iVar7 + *(int *)(lVar8 + 0x3c));
          (**(code **)(*(long *)this + 0x60))(this,local_48);
          std::vector<WishContent*,std::allocator<WishContent*>>::push_back
                    ((vector<WishContent*,std::allocator<WishContent*>> *)(this + 0xe0),&local_48);
          lVar8 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b036f0);
          iVar3 = iVar3 + iVar4 + *(int *)(lVar8 + 0x38);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_50);
          iVar19 = iVar19 + 1;
        }
        uVar20 = uVar20 + 1;
        uVar16 = FUN_043bae3c(*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108));
      } while (uVar20 < uVar16);
    }
  }
  *(int *)(this + 0x50) = iVar3;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
  std::
  map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
  ::~map((map<FestivalGameReward,int,std::less<FestivalGameReward>,std::allocator<std::pair<FestivalGameReward_const,int>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishScrollPanel::WishScrollPanel(Sexy::TRect<int>&, FestivalGameMode) */

void __thiscall
WishScrollPanel::WishScrollPanel(WishScrollPanel *this,TRect *param_1,undefined4 param_3)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06843620;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06843948;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x100));
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  std::vector<WishContent*,std::allocator<WishContent*>>::clear
            ((vector<WishContent*,std::allocator<WishContent*>> *)(this + 0xe0));
  *(undefined4 *)(this + 0xfc) = param_3;
  *(undefined4 *)(this + 0xf8) = 0xffffffff;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x100));
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RefreshCurrentPlantsList);
  Sexy::Delegate0::Delegate0<WishScrollPanel,void(WishScrollPanel::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::RefreshCurrentPlantList,aDStack_38);
  InitCurrentPlantNameList(this);
  InitView(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WishScrollPanel::RefreshCurrentPlantsList() */

void __thiscall WishScrollPanel::RefreshCurrentPlantsList(WishScrollPanel *this)

{
  ulong uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ProfileMgr *this_00;
  DailySignRewardWithTW *this_01;
  vector<FestivalPlantRandomIndex,std::allocator<FestivalPlantRandomIndex>> *this_02;
  long lVar5;
  ulong uVar6;
  string *psVar7;
  string *psVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  string asStack_28 [8];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (DailySignRewardWithTW *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (DailySignRewardWithTW *)0x0) {
    this_02 = (vector<FestivalPlantRandomIndex,std::allocator<FestivalPlantRandomIndex>> *)
              DailySignRewardWithTW::getRewardListData(this_01);
    cVar2 = std::vector<FestivalPlantRandomIndex,std::allocator<FestivalPlantRandomIndex>>::empty
                      (this_02);
    if (cVar2 == '\0') {
      lVar5 = Sexy::LazySingleton<FestivalManager>::GetInstance();
      uVar3 = FUN_043bae28(*(undefined4 *)(lVar5 + 8));
      lVar5 = Sexy::LazySingleton<FestivalManager>::GetInstance();
      uVar4 = FUN_043bae34(*(undefined4 *)(lVar5 + 0xc));
      cVar2 = PlayerInfo::RefreshOneOfPlantRandomIndexList((PlayerInfo *)this_01,uVar3,uVar4);
      if (cVar2 != '\0') {
        std::vector<std::string,std::allocator<std::string>>::vector
                  ((vector<std::string,std::allocator<std::string>> *)local_20,
                   (vector *)(this + 0x100));
        std::vector<std::string,std::allocator<std::string>>::clear
                  ((vector<std::string,std::allocator<std::string>> *)(this + 0x100));
        InitCurrentPlantNameList(this);
        iVar9 = 0;
        do {
          uVar11 = *(undefined8 *)(this + 0x100);
          uVar6 = FUN_043bae3c(uVar11,*(undefined8 *)(this + 0x108));
          while( true ) {
            uVar1 = (ulong)iVar9;
            if (uVar6 <= uVar1) {
              (**(code **)(*(long *)this + 0x80))(this,1,1);
              std::vector<WishContent*,std::allocator<WishContent*>>::clear
                        ((vector<WishContent*,std::allocator<WishContent*>> *)(this + 0xe0));
              InitView(this);
              std::vector<std::string,std::allocator<std::string>>::~vector
                        ((vector<std::string,std::allocator<std::string>> *)local_20);
              goto LAB_043bee68;
            }
            psVar7 = (string *)FUN_043bae48(uVar11,uVar1);
            psVar8 = (string *)FUN_043bae48(local_20[0],uVar1);
            cVar2 = std::operator==(psVar7,psVar8);
            if (cVar2 != '\0') break;
            iVar9 = iVar9 + 1;
          }
          lVar5 = 0;
          if (uVar1 < uVar6 - 1) {
            lVar5 = (long)(iVar9 + 1);
          }
          iVar9 = 1;
          FUN_05475d88(asStack_28,psVar7);
          uVar10 = *(undefined8 *)(this + 0x100);
          uVar11 = FUN_043bae48(uVar10,uVar1);
          uVar10 = FUN_043bae48(uVar10,lVar5);
          thunk_FUN_05475e00(uVar11,uVar10);
          uVar11 = FUN_043bae48(*(undefined8 *)(this + 0x100),lVar5);
          thunk_FUN_05475e00(uVar11,asStack_28);
          std::string::~string(asStack_28);
        } while( true );
      }
    }
  }
LAB_043bee68:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

