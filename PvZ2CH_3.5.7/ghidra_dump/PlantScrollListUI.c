// Class: PlantScrollListUI


/* PlantScrollListUI::GetCurrentPlantProps() */

void __thiscall PlantScrollListUI::GetCurrentPlantProps(PlantScrollListUI *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_04391bc4(*(undefined8 *)(this + 0xe8),(long)*(int *)(this + 0xe0));
  UIWidgetAnim::GetScale((UIWidgetAnim *)*puVar1);
  return;
}


/* PlantScrollListUI::GetFirstPlantContentByName() */

undefined8 __thiscall PlantScrollListUI::GetFirstPlantContentByName(PlantScrollListUI *this)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = std::vector<PlantContent*,std::allocator<PlantContent*>>::empty
                    ((vector<PlantContent*,std::allocator<PlantContent*>> *)(this + 0xe8));
  if (cVar1 == '\0') {
    plVar2 = (long *)std::
                     vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::
                     front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                            *)(this + 0xe8));
    return *(undefined8 *)(*plVar2 + 0xd8);
  }
  return 0;
}


/* PlantScrollListUI::~PlantScrollListUI() */

void __thiscall PlantScrollListUI::~PlantScrollListUI(PlantScrollListUI *this)

{
  *(undefined ***)this = &PTR_GetClass_0683d7e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0683db08;
  std::vector<PlantContent*,std::allocator<PlantContent*>>::clear
            ((vector<PlantContent*,std::allocator<PlantContent*>> *)(this + 0xe8));
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<PlantContent*,std::allocator<PlantContent*>>::~vector
            ((vector<PlantContent*,std::allocator<PlantContent*>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantScrollListUI::~PlantScrollListUI() */

void __thiscall PlantScrollListUI::~PlantScrollListUI(PlantScrollListUI *this)

{
  ~PlantScrollListUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantScrollListUI::CheckPlantLevelUpActived(Sexy::RtWeakPtr<MagentoProductProps> const&) */

void __thiscall
PlantScrollListUI::CheckPlantLevelUpActived(PlantScrollListUI *this,RtWeakPtr *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  string *psVar5;
  MagentoProductProps *this_02;
  PlantType *pPVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  GachaItemInfo aGStack_20 [4];
  int local_1c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
  cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,(string *)(lVar4 + 0x80));
  if (cVar1 != '\0') {
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    iVar2 = PlayerInfo::GetPlantStarLevel(this_01,(string *)(lVar4 + 0x80),false);
    if (iVar2 < 1) {
      pPVar6 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      lVar4 = PlantType::GetProps(pPVar6);
      iVar2 = *(int *)(lVar4 + 0x28);
    }
    GachaItemInfo::GachaItemInfo(aGStack_20);
    this_02 = (MagentoProductProps *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    MagentoProductProps::GetCurrentLevelPriceData(this_02,iVar2,(LevelUpPriceData *)aGStack_20);
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_1);
    iVar3 = PlayerInfo::GetPlantPieceCount(this_01,(string *)(lVar4 + 0x80),false);
    if (local_1c <= iVar3) {
      pPVar6 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      lVar4 = PlantType::GetProps(pPVar6);
      if (iVar2 < *(int *)(lVar4 + 0x2c)) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
        goto LAB_04398134;
      }
    }
    cVar1 = '\0';
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
LAB_04398134:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* PlantScrollListUI::SelectPlant(int) */

void __thiscall PlantScrollListUI::SelectPlant(PlantScrollListUI *this,int param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  ulong uVar4;
  undefined8 *puVar5;
  PrimeText *this_01;
  long *plVar6;
  undefined8 uVar7;
  
  if (param_1 == -1) {
    *(undefined4 *)(this + 0xe0) = 0;
    return;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_04391b90(*(undefined4 *)(pPVar3 + 0x40));
  if (iVar2 == 8) {
    cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar3);
    if (cVar1 == '\0') goto LAB_0439eb3c;
    iVar2 = FUN_04391b90(*(undefined4 *)(pPVar3 + 0x40));
  }
  if ((iVar2 != 0x1d) || (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar3), cVar1 != '\0')) {
    iVar2 = *(int *)(this + 0xe0);
    if (iVar2 == param_1) {
      plVar6 = (long *)FUN_04391bc4(*(undefined8 *)(this + 0xe8),(long)param_1);
      if ((*plVar6 != 0) && (cVar1 = FUN_04391b94(*(undefined1 *)(*plVar6 + 0xfc)), cVar1 != '\0'))
      {
        return;
      }
    }
    if (-1 < iVar2) {
      uVar7 = *(undefined8 *)(this + 0xe8);
      uVar4 = FUN_04391be0(uVar7,*(undefined8 *)(this + 0xf0));
      if ((ulong)(long)iVar2 < uVar4) {
        puVar5 = (undefined8 *)FUN_04391bc4(uVar7,(long)iVar2);
        if ((PlantContent *)*puVar5 != (PlantContent *)0x0) {
          PlantContent::SetSelected((PlantContent *)*puVar5,false);
        }
      }
    }
    if (param_1 < 0) {
      return;
    }
    uVar7 = *(undefined8 *)(this + 0xe8);
    uVar4 = FUN_04391be0(uVar7,*(undefined8 *)(this + 0xf0));
    if (uVar4 <= (ulong)(long)param_1) {
      return;
    }
    puVar5 = (undefined8 *)FUN_04391bc4(uVar7,(long)param_1);
    if ((PlantContent *)*puVar5 == (PlantContent *)0x0) {
      return;
    }
    PlantContent::SetSelected((PlantContent *)*puVar5,true);
    *(int *)(this + 0xe0) = param_1;
    this[0xe4] = (PlantScrollListUI)0x1;
    this_01 = (PrimeText *)Sexy::PrimeText::Instance();
    Sexy::PrimeText::ClearGlyphCache(this_01);
    return;
  }
LAB_0439eb3c:
  if (param_1 != 0) {
    return;
  }
  puVar5 = (undefined8 *)FUN_04391bc4(*(undefined8 *)(this + 0xe8),0);
  PlantContent::SetSelected((PlantContent *)*puVar5,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* PlantScrollListUI::InitView(int) */

void __thiscall PlantScrollListUI::InitView(PlantScrollListUI *this,int param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ProfileMgr *this_00;
  Magento *this_01;
  long lVar10;
  RtWeakPtr *pRVar11;
  ulong uVar12;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_02;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  RtWeakPtrBase *pRVar17;
  string *psVar18;
  PlantContent *pPVar19;
  PlantLevelUpListView *this_03;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_c0 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_b8 [8];
  undefined8 local_b0;
  RtWeakPtr<Sexy::SoundResource> aRStack_a8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  PlantContent *local_98;
  int local_90;
  int local_8c;
  string asStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar20 = 0;
  iVar5 = FUN_043924ac(7);
  iVar6 = FUN_043924ac(0);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (Magento *)ProfileMgr::GetCurrentProfile(this_00);
  Magento::GetPlantLevelUp(this_01);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::clear((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
           *)&local_80);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_b8);
  lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c0);
  lVar10 = FUN_04391bcc(*(undefined8 *)(lVar10 + 0x60),*(undefined8 *)(lVar10 + 0x68));
  if (lVar10 != 0) {
    do {
      iVar7 = FUN_04391b90(*(undefined4 *)(this_01 + 0x40));
      if (iVar7 == 0x1d) {
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c0);
        pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  FUN_04391bd8(*(undefined8 *)(lVar10 + 0x60),uVar20);
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
        bVar2 = std::operator==((string *)(lVar10 + 0x80),"cactus");
        if (!bVar2) goto LAB_0439ec8c;
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c0);
        pRVar11 = (RtWeakPtr *)FUN_04391bd8(*(undefined8 *)(lVar10 + 0x60),uVar20);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_b8,pRVar11);
      }
      else {
LAB_0439ec8c:
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c0);
        pRVar11 = (RtWeakPtr *)FUN_04391bd8(*(undefined8 *)(lVar10 + 0x60),uVar20);
        std::
        vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
        ::push_back((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                     *)&local_80,pRVar11);
      }
      uVar20 = uVar20 + 1;
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_c0);
      uVar12 = FUN_04391bcc(*(undefined8 *)(lVar10 + 0x60),*(undefined8 *)(lVar10 + 0x68));
    } while (uVar20 < uVar12);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::clear((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
           *)&local_68);
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::clear((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
           *)&local_50);
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::clear((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
           *)&local_38);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
  while( true ) {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_80);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_20);
    if (!bVar2) break;
    pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
    FUN_05475d88(asStack_88,lVar10 + 0x80);
    pRVar11 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    cVar3 = canPlantLevelUp(pRVar11,false,true);
    cVar4 = PlayerInfo::GetIsPlantUnlocked((PlayerInfo *)this_01,asStack_88);
    if (cVar4 == '\0') {
      iVar7 = PlayerInfo::GetPlantPieceCount((PlayerInfo *)this_01,asStack_88,false);
      pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
      if (iVar7 < *(int *)(lVar10 + 0x90)) goto LAB_0439ed3c;
      pRVar11 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0)
      ;
      this_02 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_68;
LAB_0439ed64:
      std::
      vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
      ::push_back((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                   *)this_02,pRVar11);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_20,(__normal_iterator *)&local_b0);
      local_b0 = std::
                 vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                 ::erase((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                          *)&local_80,local_20);
    }
    else {
LAB_0439ed3c:
      cVar4 = PlayerInfo::GetIsPlantUnlocked((PlayerInfo *)this_01,asStack_88);
      if ((cVar4 != '\0') && (cVar3 != '\0')) {
        pRVar11 = (RtWeakPtr *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
        this_02 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50;
        goto LAB_0439ed64;
      }
      cVar3 = PlayerInfo::GetIsPlantUnlocked((PlayerInfo *)this_01,asStack_88);
      if (cVar3 != '\0') {
        pRVar11 = (RtWeakPtr *)
                  std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
        this_02 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38;
        goto LAB_0439ed64;
      }
      FUN_043941e4((exception_ptr *)&local_b0);
    }
    std::string::~string(asStack_88);
  }
  uVar20 = FUN_04391bcc(local_50,local_48);
  if (1 < uVar20) {
    uVar14 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_50);
    uVar15 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_50);
    std::
    sort<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<PlantType_const>*,std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>>,bool(*)(Sexy::RtWeakPtr<PlantType_const>const&,Sexy::RtWeakPtr<PlantType_const>const&)>
              (uVar14,uVar15,GreatStarsLevelMarkSort);
  }
  uVar20 = FUN_04391bcc(local_38,local_30);
  if (1 < uVar20) {
    uVar14 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
    uVar15 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_38);
    std::
    sort<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<PlantType_const>*,std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>>,bool(*)(Sexy::RtWeakPtr<PlantType_const>const&,Sexy::RtWeakPtr<PlantType_const>const&)>
              (uVar14,uVar15,PieceCountPercentSort);
  }
  uVar14 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_80);
  uVar15 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)&local_80);
  std::
  sort<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<PlantType_const>*,std::vector<Sexy::RtWeakPtr<PlantType_const>,std::allocator<Sexy::RtWeakPtr<PlantType_const>>>>,bool(*)(Sexy::RtWeakPtr<PlantType_const>const&,Sexy::RtWeakPtr<PlantType_const>const&)>
            (uVar14,uVar15,PieceCountPercentSort);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::operator=((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
               *)&local_20,(vector *)&local_80);
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::clear((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
           *)&local_80);
  iVar7 = FUN_04391b90(*(undefined4 *)(this_01 + 0x40));
  if ((iVar7 == 8) || (iVar7 == 0x1d)) {
    std::
    vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
    ::push_back((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                 *)&local_80,(RtWeakPtr *)a_Stack_b8);
  }
  uVar20 = 0;
  while( true ) {
    uVar14 = local_68;
    uVar12 = FUN_04391bcc(local_68,local_60);
    if (uVar12 <= uVar20) break;
    pRVar11 = (RtWeakPtr *)FUN_04391bd8(uVar14,uVar20);
    std::
    vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
    ::push_back((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                 *)&local_80,pRVar11);
    uVar20 = uVar20 + 1;
  }
  uVar20 = 0;
  while( true ) {
    uVar14 = local_50;
    uVar12 = FUN_04391bcc(local_50,local_48);
    if (uVar12 <= uVar20) break;
    pRVar11 = (RtWeakPtr *)FUN_04391bd8(uVar14,uVar20);
    std::
    vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
    ::push_back((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                 *)&local_80,pRVar11);
    uVar20 = uVar20 + 1;
  }
  uVar20 = 0;
  while( true ) {
    uVar14 = local_38;
    uVar12 = FUN_04391bcc(local_38,local_30);
    if (uVar12 <= uVar20) break;
    pRVar11 = (RtWeakPtr *)FUN_04391bd8(uVar14,uVar20);
    std::
    vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
    ::push_back((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                 *)&local_80,pRVar11);
    uVar20 = uVar20 + 1;
  }
  uVar20 = 0;
  while( true ) {
    uVar14 = local_20;
    uVar12 = FUN_04391bcc(local_20,local_18);
    if (uVar12 <= uVar20) break;
    pRVar11 = (RtWeakPtr *)FUN_04391bd8(uVar14,uVar20);
    std::
    vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
    ::push_back((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                 *)&local_80,pRVar11);
    uVar20 = uVar20 + 1;
  }
  uVar14 = *(undefined8 *)(this + 0xe8);
  uVar20 = 0;
  uVar12 = FUN_04391be0(uVar14,*(undefined8 *)(this + 0xf0));
  if (uVar12 != 0) {
    do {
      plVar16 = (long *)FUN_04391bc4(uVar14,uVar20);
      if (*plVar16 != 0) {
        (**(code **)(*(long *)this + 0x68))(this);
        uVar14 = *(undefined8 *)(this + 0xe8);
        uVar12 = FUN_04391be0(uVar14,*(undefined8 *)(this + 0xf0));
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar12);
  }
  uVar20 = 0;
  uVar21 = 0;
  std::vector<PlantContent*,std::allocator<PlantContent*>>::clear
            ((vector<PlantContent*,std::allocator<PlantContent*>> *)(this + 0xe8));
  uVar14 = local_80;
  lVar10 = FUN_04391bcc(local_80,local_78);
  iVar7 = iVar6;
  uVar22 = 0;
  if (lVar10 != 0) {
    do {
      pRVar17 = (RtWeakPtrBase *)FUN_04391bd8(uVar14,uVar20);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a8,pRVar17);
      psVar18 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar18);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
      uVar1 = param_1 & 2;
      uVar21 = uVar22;
      if ((*(int *)(lVar10 + 0xd0) == 0) ||
         (lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0), uVar1 = param_1 & 4,
         *(int *)(lVar10 + 0xd0) == 1)) {
joined_r0x0439f4d0:
        if (uVar1 == 0) goto LAB_0439f1b8;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8)
        ;
      }
      else {
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
        if (*(int *)(lVar10 + 0xd0) == 2) {
          if ((param_1 & 8U) != 0) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
            goto LAB_0439f31c;
          }
        }
        else {
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
          if (*(int *)(lVar10 + 0xd0) == 3) {
            if ((param_1 & 0x10U) != 0) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
              goto LAB_0439f31c;
            }
          }
          else {
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_a0);
            uVar1 = param_1 & 0x20;
            if (*(int *)(lVar10 + 0xd0) == 4) goto joined_r0x0439f4d0;
          }
        }
LAB_0439f1b8:
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_88,(RtWeakPtrBase *)aRStack_a8);
        pPVar19 = ::operator_new(0x108);
        PlantContent::PlantContent
                  (pPVar19,(RtWeakPtr<Sexy::SoundResource> *)asStack_88,uVar22,this + 0xd8);
        local_98 = pPVar19;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_88)
        ;
        if (((uVar22 & 1) == 0) && (1 < (int)uVar22)) {
          iVar7 = FUN_043924ac(0x69);
          iVar8 = FUN_043924ac(10);
          iVar5 = iVar5 + iVar7 + iVar8;
          iVar7 = iVar6;
        }
        CachedUIResourcePtr<Sexy::Image>::GetId();
        GetImageOffset(&local_90,(RtWeakPtr<Sexy::SoundResource> *)asStack_88);
        Sexy::RtId::~RtId((RtId *)asStack_88);
        UIWidget::ConvertPSDImageOffsetToUISpace(&local_90,&local_8c,_FUN_0439f520);
        pPVar19 = local_98;
        iVar8 = FUN_043924ac(0x69);
        iVar8 = iVar8 + local_90;
        iVar9 = FUN_043924ac(0x5a);
        (**(code **)(*(long *)pPVar19 + 0x198))(pPVar19,iVar5,iVar7,iVar8,iVar9 + local_8c);
        iVar8 = FUN_043924ac(0x5a);
        iVar9 = FUN_043924ac(5);
        iVar7 = iVar7 + (iVar8 - iVar9);
        (**(code **)(*(long *)this + 0x60))(this,local_98);
        std::vector<PlantContent*,std::allocator<PlantContent*>>::push_back
                  ((vector<PlantContent*,std::allocator<PlantContent*>> *)(this + 0xe8),&local_98);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8)
        ;
        uVar21 = uVar22 + 1;
      }
LAB_0439f31c:
      uVar14 = local_80;
      uVar20 = uVar20 + 1;
      uVar12 = FUN_04391bcc(local_80,local_78);
      uVar22 = uVar21;
    } while (uVar20 < uVar12);
  }
  iVar6 = FUN_043924ac(0x69);
  iVar7 = FUN_043924ac(10);
  if (uVar21 != 0) {
    if (this[0xe5] == (PlantScrollListUI)0x0) {
      this[0xe5] = (PlantScrollListUI)0x1;
      SelectPlant(this,-1);
    }
    else {
      this_03 = (PlantLevelUpListView *)LawnApp::GetPlantLevelUpListView(gLawnApp);
      if (this_03 != (PlantLevelUpListView *)0x0) {
        SelectPlant(this,-1);
        pRVar11 = (RtWeakPtr *)GetCurrentPlantProps(this);
        PlantLevelUpListView::SetCurrentPlantProp(this_03,pRVar11);
        this[0xe4] = (PlantScrollListUI)0x1;
      }
    }
  }
  *(int *)(this + 0x50) = iVar6 + iVar7 + iVar5;
  iVar5 = FUN_043924ac(0x5a);
  *(int *)(this + 0x54) = iVar5 << 1;
  if (*(ScrollWidget **)(this + 0x20) != (ScrollWidget *)0x0) {
    Sexy::ScrollWidget::ClientSizeChanged(*(ScrollWidget **)(this + 0x20));
  }
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::~vector((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
             *)&local_20);
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::~vector((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
             *)&local_38);
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::~vector((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
             *)&local_50);
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::~vector((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
             *)&local_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_b8);
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::~vector((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
             *)&local_80);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantScrollListUI::PlantScrollListUI(Sexy::TRect<int>&) */

void __thiscall PlantScrollListUI::PlantScrollListUI(PlantScrollListUI *this,TRect *param_1)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0683d7e0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0683db08;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  std::vector<PlantContent*,std::allocator<PlantContent*>>::clear
            ((vector<PlantContent*,std::allocator<PlantContent*>> *)(this + 0xe8));
  this[0xe4] = (PlantScrollListUI)0x0;
  *(undefined4 *)(this + 0xe0) = 0xffffffff;
  this[0xe5] = (PlantScrollListUI)0x0;
  InitView(this,0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,InitView);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PlantScrollListUI,void(PlantScrollListUI::*)(int)>>
            ((MessageRouter *)puVar1,Message::ScrollReInitView,&local_40);
  return;
}


/* PlantScrollListUI::ButtonDepress(int) */

void __thiscall PlantScrollListUI::ButtonDepress(PlantScrollListUI *this,int param_1)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  ulong uVar4;
  undefined8 *puVar5;
  PrimeText *this_01;
  long *plVar6;
  undefined8 uVar7;
  
  if (param_1 == -1) {
    *(undefined4 *)(this + 0xe0) = 0;
    return;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_04391b90(*(undefined4 *)(pPVar3 + 0x40));
  if (iVar2 == 8) {
    cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar3);
    if (cVar1 == '\0') goto LAB_0439eb3c;
    iVar2 = FUN_04391b90(*(undefined4 *)(pPVar3 + 0x40));
  }
  if ((iVar2 != 0x1d) || (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar3), cVar1 != '\0')) {
    iVar2 = *(int *)(this + 0xe0);
    if (iVar2 == param_1) {
      plVar6 = (long *)FUN_04391bc4(*(undefined8 *)(this + 0xe8),(long)param_1);
      if ((*plVar6 != 0) && (cVar1 = FUN_04391b94(*(undefined1 *)(*plVar6 + 0xfc)), cVar1 != '\0'))
      {
        return;
      }
    }
    if (-1 < iVar2) {
      uVar7 = *(undefined8 *)(this + 0xe8);
      uVar4 = FUN_04391be0(uVar7,*(undefined8 *)(this + 0xf0));
      if ((ulong)(long)iVar2 < uVar4) {
        puVar5 = (undefined8 *)FUN_04391bc4(uVar7,(long)iVar2);
        if ((PlantContent *)*puVar5 != (PlantContent *)0x0) {
          PlantContent::SetSelected((PlantContent *)*puVar5,false);
        }
      }
    }
    if (param_1 < 0) {
      return;
    }
    uVar7 = *(undefined8 *)(this + 0xe8);
    uVar4 = FUN_04391be0(uVar7,*(undefined8 *)(this + 0xf0));
    if (uVar4 <= (ulong)(long)param_1) {
      return;
    }
    puVar5 = (undefined8 *)FUN_04391bc4(uVar7,(long)param_1);
    if ((PlantContent *)*puVar5 == (PlantContent *)0x0) {
      return;
    }
    PlantContent::SetSelected((PlantContent *)*puVar5,true);
    *(int *)(this + 0xe0) = param_1;
    this[0xe4] = (PlantScrollListUI)0x1;
    this_01 = (PrimeText *)Sexy::PrimeText::Instance();
    Sexy::PrimeText::ClearGlyphCache(this_01);
    return;
  }
LAB_0439eb3c:
  if (param_1 != 0) {
    return;
  }
  puVar5 = (undefined8 *)FUN_04391bc4(*(undefined8 *)(this + 0xe8),0);
  PlantContent::SetSelected((PlantContent *)*puVar5,true);
  return;
}


/* non-virtual thunk to PlantScrollListUI::ButtonDepress(int) */

void __thiscall PlantScrollListUI::ButtonDepress(PlantScrollListUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

