// Class: PlantAvatarScrollListUI


/* PlantAvatarScrollListUI::CurrentPlantChange(bool&) */

void __thiscall
PlantAvatarScrollListUI::CurrentPlantChange(PlantAvatarScrollListUI *this,bool *param_1)

{
  *param_1 = (bool)this[0xe4];
  this[0xe4] = (PlantAvatarScrollListUI)0x0;
  return;
}


/* PlantAvatarScrollListUI::GetCurrentPlantProps() */

void __thiscall PlantAvatarScrollListUI::GetCurrentPlantProps(PlantAvatarScrollListUI *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_043a1348(*(undefined8 *)(this + 0xe8),(long)*(int *)(this + 0xe0));
  UIWidgetImage::GetPVZ2Image((UIWidgetImage *)*puVar1);
  return;
}


/* PlantAvatarScrollListUI::SelectPlant(int) */

void __thiscall PlantAvatarScrollListUI::SelectPlant(PlantAvatarScrollListUI *this,int param_1)

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
  }
  else {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar2 = FUN_043a1318(*(undefined4 *)(pPVar3 + 0x40));
    if ((iVar2 == 8) && (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar3,8), cVar1 == '\0')) {
      if (param_1 == 0) {
        puVar5 = (undefined8 *)FUN_043a1348(*(undefined8 *)(this + 0xe8),0);
        PlantAvatarContent::SetSelected((PlantAvatarContent *)*puVar5,true);
        return;
      }
    }
    else {
      iVar2 = *(int *)(this + 0xe0);
      if (iVar2 == param_1) {
        plVar6 = (long *)FUN_043a1348(*(undefined8 *)(this + 0xe8),(long)param_1);
        if ((*plVar6 != 0) && (cVar1 = FUN_043a131c(*(undefined1 *)(*plVar6 + 0xfc)), cVar1 != '\0')
           ) {
          return;
        }
      }
      if (-1 < iVar2) {
        uVar7 = *(undefined8 *)(this + 0xe8);
        uVar4 = FUN_043a1364(uVar7,*(undefined8 *)(this + 0xf0));
        if ((ulong)(long)iVar2 < uVar4) {
          puVar5 = (undefined8 *)FUN_043a1348(uVar7,(long)iVar2);
          if ((PlantAvatarContent *)*puVar5 != (PlantAvatarContent *)0x0) {
            PlantAvatarContent::SetSelected((PlantAvatarContent *)*puVar5,false);
          }
        }
      }
      if (-1 < param_1) {
        uVar7 = *(undefined8 *)(this + 0xe8);
        uVar4 = FUN_043a1364(uVar7,*(undefined8 *)(this + 0xf0));
        if ((ulong)(long)param_1 < uVar4) {
          puVar5 = (undefined8 *)FUN_043a1348(uVar7,(long)param_1);
          if ((PlantAvatarContent *)*puVar5 != (PlantAvatarContent *)0x0) {
            PlantAvatarContent::SetSelected((PlantAvatarContent *)*puVar5,true);
            *(int *)(this + 0xe0) = param_1;
            this[0xe4] = (PlantAvatarScrollListUI)0x1;
            this_01 = (PrimeText *)Sexy::PrimeText::Instance();
            Sexy::PrimeText::ClearGlyphCache(this_01);
            return;
          }
        }
      }
    }
  }
  return;
}


/* PlantAvatarScrollListUI::ButtonDepress(int) */

void __thiscall PlantAvatarScrollListUI::ButtonDepress(PlantAvatarScrollListUI *this,int param_1)

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
  }
  else {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    iVar2 = FUN_043a1318(*(undefined4 *)(pPVar3 + 0x40));
    if ((iVar2 == 8) && (cVar1 = PlayerInfo::PlayerHasCompletedTutorial(pPVar3,8), cVar1 == '\0')) {
      if (param_1 == 0) {
        puVar5 = (undefined8 *)FUN_043a1348(*(undefined8 *)(this + 0xe8),0);
        PlantAvatarContent::SetSelected((PlantAvatarContent *)*puVar5,true);
        return;
      }
    }
    else {
      iVar2 = *(int *)(this + 0xe0);
      if (iVar2 == param_1) {
        plVar6 = (long *)FUN_043a1348(*(undefined8 *)(this + 0xe8),(long)param_1);
        if ((*plVar6 != 0) && (cVar1 = FUN_043a131c(*(undefined1 *)(*plVar6 + 0xfc)), cVar1 != '\0')
           ) {
          return;
        }
      }
      if (-1 < iVar2) {
        uVar7 = *(undefined8 *)(this + 0xe8);
        uVar4 = FUN_043a1364(uVar7,*(undefined8 *)(this + 0xf0));
        if ((ulong)(long)iVar2 < uVar4) {
          puVar5 = (undefined8 *)FUN_043a1348(uVar7,(long)iVar2);
          if ((PlantAvatarContent *)*puVar5 != (PlantAvatarContent *)0x0) {
            PlantAvatarContent::SetSelected((PlantAvatarContent *)*puVar5,false);
          }
        }
      }
      if (-1 < param_1) {
        uVar7 = *(undefined8 *)(this + 0xe8);
        uVar4 = FUN_043a1364(uVar7,*(undefined8 *)(this + 0xf0));
        if ((ulong)(long)param_1 < uVar4) {
          puVar5 = (undefined8 *)FUN_043a1348(uVar7,(long)param_1);
          if ((PlantAvatarContent *)*puVar5 != (PlantAvatarContent *)0x0) {
            PlantAvatarContent::SetSelected((PlantAvatarContent *)*puVar5,true);
            *(int *)(this + 0xe0) = param_1;
            this[0xe4] = (PlantAvatarScrollListUI)0x1;
            this_01 = (PrimeText *)Sexy::PrimeText::Instance();
            Sexy::PrimeText::ClearGlyphCache(this_01);
            return;
          }
        }
      }
    }
  }
  return;
}


/* non-virtual thunk to PlantAvatarScrollListUI::ButtonDepress(int) */

void __thiscall PlantAvatarScrollListUI::ButtonDepress(PlantAvatarScrollListUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* PlantAvatarScrollListUI::~PlantAvatarScrollListUI() */

void __thiscall PlantAvatarScrollListUI::~PlantAvatarScrollListUI(PlantAvatarScrollListUI *this)

{
  *(undefined ***)this = &PTR_GetClass_0683f940;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0683fc68;
  std::vector<PlantAvatarContent*,std::allocator<PlantAvatarContent*>>::clear
            ((vector<PlantAvatarContent*,std::allocator<PlantAvatarContent*>> *)(this + 0xe8));
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<PlantAvatarContent*,std::allocator<PlantAvatarContent*>>::~vector
            ((vector<PlantAvatarContent*,std::allocator<PlantAvatarContent*>> *)(this + 0xe8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantAvatarScrollListUI::~PlantAvatarScrollListUI() */

void __thiscall PlantAvatarScrollListUI::~PlantAvatarScrollListUI(PlantAvatarScrollListUI *this)

{
  ~PlantAvatarScrollListUI(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* PlantAvatarScrollListUI::InitView(int) */

void __thiscall PlantAvatarScrollListUI::InitView(PlantAvatarScrollListUI *this,int param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ProfileMgr *this_00;
  PlayerInfo *pPVar9;
  long lVar10;
  ulong uVar11;
  RtWeakPtr *pRVar12;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar13;
  long *plVar14;
  RtWeakPtrBase *pRVar15;
  string *psVar16;
  PlantAvatarContent *pPVar17;
  bool extraout_w1;
  undefined4 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  uint uVar21;
  uint uVar22;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  undefined8 local_80;
  RtWeakPtr<Sexy::SoundResource> aRStack_78 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  PlantAvatarContent *local_68;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_043a19d8(10);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar9 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  Magento::GetPlantPieceProductsData((Magento *)0x1,extraout_w1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::clear((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
           *)&local_50);
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::clear((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
           *)&local_38);
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::clear((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
           *)&local_20);
  uVar19 = 0;
  while( true ) {
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
    uVar11 = FUN_043a1350(*(undefined8 *)(lVar10 + 0x60),*(undefined8 *)(lVar10 + 0x68));
    if (uVar11 <= uVar19) break;
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_88);
    pRVar12 = (RtWeakPtr *)FUN_043a135c(*(undefined8 *)(lVar10 + 0x60),uVar19);
    std::
    vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
    ::push_back((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                 *)&local_38,pRVar12);
    uVar19 = uVar19 + 1;
  }
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
  while( true ) {
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_38);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)&local_58);
    if (!bVar2) break;
    pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
    FUN_05475d88((string *)&local_60,lVar10 + 0x80);
    cVar3 = PlayerInfo::IsPlantAvatarUnLocked(pPVar9,(string *)&local_60,0,0);
    if (cVar3 == '\0') {
      iVar5 = PlayerInfo::GetAvatarPiecesCount(pPVar9,(string *)&local_60,0,0);
      pRVar13 = (RtWeakPtr<Sexy::ResourceInfo> *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar13);
      if (iVar5 < *(int *)(lVar10 + 0x90)) goto LAB_043a88ac;
LAB_043a8820:
      pRVar12 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80)
      ;
      std::
      vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
      ::push_back((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                   *)&local_50,pRVar12);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_58,(__normal_iterator *)&local_80);
      local_80 = std::
                 vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                 ::erase((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                          *)&local_38,local_58);
    }
    else {
LAB_043a88ac:
      cVar3 = NewAvatar::IsAnyNewAvatarPieceFull((string *)&local_60);
      if (cVar3 != '\0') goto LAB_043a8820;
      FUN_043a30b4((exception_ptr *)&local_80);
    }
    std::string::~string((string *)&local_60);
  }
  cVar3 = std::
          vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
          ::empty((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                   *)&local_50);
  uVar19 = 0;
  if (cVar3 == '\0') {
    while( true ) {
      uVar20 = local_50;
      uVar11 = FUN_043a1350(local_50,local_48);
      if (uVar11 <= uVar19) break;
      pRVar12 = (RtWeakPtr *)FUN_043a135c(uVar20,uVar19);
      std::
      vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
      ::push_back((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                   *)&local_20,pRVar12);
      uVar19 = uVar19 + 1;
    }
    std::
    vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
    ::clear((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
             *)&local_50);
  }
  uVar19 = 0;
  while( true ) {
    uVar20 = local_38;
    uVar11 = FUN_043a1350(local_38,local_30);
    if (uVar11 <= uVar19) break;
    pRVar12 = (RtWeakPtr *)FUN_043a135c(uVar20,uVar19);
    std::
    vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
    ::push_back((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                 *)&local_20,pRVar12);
    uVar19 = uVar19 + 1;
  }
  uVar19 = 0;
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::clear((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
           *)&local_38);
  uVar20 = *(undefined8 *)(this + 0xe8);
  uVar11 = FUN_043a1364(uVar20,*(undefined8 *)(this + 0xf0));
  if (uVar11 != 0) {
    do {
      plVar14 = (long *)FUN_043a1348(uVar20,uVar19);
      if (*plVar14 != 0) {
        (**(code **)(*(long *)this + 0x68))(this);
        uVar20 = *(undefined8 *)(this + 0xe8);
        uVar11 = FUN_043a1364(uVar20,*(undefined8 *)(this + 0xf0));
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < uVar11);
  }
  uVar19 = 0;
  uVar21 = 0;
  std::vector<PlantAvatarContent*,std::allocator<PlantAvatarContent*>>::clear
            ((vector<PlantAvatarContent*,std::allocator<PlantAvatarContent*>> *)(this + 0xe8));
  uVar20 = local_20;
  uVar18 = 0;
  lVar10 = FUN_043a1350(local_20,local_18);
  iVar7 = iVar4;
  iVar5 = iVar4;
  uVar22 = 0;
  if (lVar10 != 0) {
    do {
      pRVar15 = (RtWeakPtrBase *)FUN_043a135c(uVar20,uVar19);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_78,pRVar15);
      psVar16 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar16);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
      uVar1 = param_1 & 2;
      uVar21 = uVar22;
      if ((*(int *)(lVar10 + 0xd0) == 0) ||
         (lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70), uVar1 = param_1 & 4,
         *(int *)(lVar10 + 0xd0) == 1)) {
joined_r0x043a8d9c:
        if (uVar1 == 0) goto LAB_043a8a6c;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78)
        ;
      }
      else {
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
        if (*(int *)(lVar10 + 0xd0) == 2) {
          if ((param_1 & 8U) != 0) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
            goto LAB_043a8bf4;
          }
        }
        else {
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
          if (*(int *)(lVar10 + 0xd0) == 3) {
            if ((param_1 & 0x10U) != 0) {
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
              goto LAB_043a8bf4;
            }
          }
          else {
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_70);
            uVar1 = param_1 & 0x20;
            if (*(int *)(lVar10 + 0xd0) == 4) goto joined_r0x043a8d9c;
          }
        }
LAB_043a8a6c:
        iVar6 = FUN_043a1318(*(undefined4 *)(pPVar9 + 0x40));
        if (iVar6 == 0x18) {
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
          bVar2 = std::operator==((string *)(lVar10 + 0x80),"cactus");
          if (bVar2) {
            *(undefined4 *)(this + 0x100) = uVar18;
          }
        }
        else if (iVar6 == 0x1e) {
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
          bVar2 = std::operator==((string *)(lVar10 + 0x80),"sunflower");
          if (bVar2) {
            *(undefined4 *)(this + 0x100) = uVar18;
          }
        }
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)aRStack_78);
        pPVar17 = ::operator_new(0x100);
        PlantAvatarContent::PlantAvatarContent
                  (pPVar17,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_58,uVar22,this + 0xd8);
        local_68 = pPVar17;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        if (((uVar22 & 1) == 0) && (1 < (int)uVar22)) {
          iVar7 = FUN_043a19d8(0x69);
          iVar6 = FUN_043a19d8(10);
          iVar5 = iVar5 + iVar7 + iVar6;
          iVar7 = iVar4;
        }
        CachedUIResourcePtr<Sexy::Image>::GetId();
        GetImageOffset(&local_60,
                       (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_58);
        Sexy::RtId::~RtId((RtId *)&local_58);
        UIWidget::ConvertPSDImageOffsetToUISpace(&local_60,&local_5c,_FUN_043a8e3c);
        pPVar17 = local_68;
        iVar6 = FUN_043a19d8(0x69);
        iVar6 = iVar6 + local_60;
        iVar8 = FUN_043a19d8(0x5a);
        (**(code **)(*(long *)pPVar17 + 0x198))(pPVar17,iVar5,iVar7,iVar6,iVar8 + local_5c);
        iVar6 = FUN_043a19d8(0x5a);
        iVar8 = FUN_043a19d8(0xc);
        iVar7 = iVar7 + (iVar6 - iVar8);
        (**(code **)(*(long *)this + 0x60))(this,local_68);
        std::vector<PlantAvatarContent*,std::allocator<PlantAvatarContent*>>::push_back
                  ((vector<PlantAvatarContent*,std::allocator<PlantAvatarContent*>> *)(this + 0xe8),
                   &local_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78)
        ;
        uVar21 = uVar22 + 1;
      }
LAB_043a8bf4:
      uVar20 = local_20;
      uVar19 = uVar19 + 1;
      uVar18 = (undefined4)uVar19;
      uVar11 = FUN_043a1350(local_20,local_18);
      uVar22 = uVar21;
    } while (uVar19 < uVar11);
  }
  iVar4 = FUN_043a19d8(0x69);
  iVar7 = FUN_043a19d8(10);
  if ((uVar21 != 0) && (this[0xe5] == (PlantAvatarScrollListUI)0x0)) {
    this[0xe5] = (PlantAvatarScrollListUI)0x1;
    if (*(int *)(this + 0x100) == -1) {
      SelectPlant(this,0);
    }
    else {
      SelectPlant(this,*(int *)(this + 0x100));
    }
  }
  *(int *)(this + 0x50) = iVar4 + iVar7 + iVar5;
  iVar4 = FUN_043a19d8(0x5a);
  *(int *)(this + 0x54) = iVar4 << 1;
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::clear((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
           *)&local_38);
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
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAvatarScrollListUI::PlantAvatarScrollListUI(Sexy::TRect<int>&) */

void __thiscall
PlantAvatarScrollListUI::PlantAvatarScrollListUI(PlantAvatarScrollListUI *this,TRect *param_1)

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
  *(undefined ***)this = &PTR_GetClass_0683f940;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_0683fc68;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  PlantHeadshot::Resize((PlantHeadshot *)this,param_1);
  std::vector<PlantAvatarContent*,std::allocator<PlantAvatarContent*>>::clear
            ((vector<PlantAvatarContent*,std::allocator<PlantAvatarContent*>> *)(this + 0xe8));
  this[0xe4] = (PlantAvatarScrollListUI)0x0;
  *(undefined4 *)(this + 0xe0) = 0xffffffff;
  *(undefined4 *)(this + 0x100) = 0xffffffff;
  this[0xe5] = (PlantAvatarScrollListUI)0x0;
  InitView(this,0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,InitView);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<PlantAvatarScrollListUI,void(PlantAvatarScrollListUI::*)(int)>>
            ((MessageRouter *)puVar1,Message::ScrollReInitView,&local_40);
  return;
}

