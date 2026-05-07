// Class: StorePlantGiftPanelUI


/* StorePlantGiftPanelUI::ButtonDepress(int) */

int StorePlantGiftPanelUI::ButtonDepress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to StorePlantGiftPanelUI::ButtonDepress(int) */

void __thiscall StorePlantGiftPanelUI::ButtonDepress(StorePlantGiftPanelUI *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StorePlantGiftPanelUI::Draw(Sexy::Graphics*) */

void __thiscall StorePlantGiftPanelUI::Draw(StorePlantGiftPanelUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x170) == 0) {
    TodStringTranslate(L"[STORE_SALE_ALL_GIFT]");
    iVar1 = FUN_03395408(*(undefined4 *)(this + 0x50));
    iVar2 = FUN_0339540c(*(undefined4 *)(this + 0x54));
    Sexy::Insets::Insets(aIStack_28,0,0,iVar1,iVar2);
    uVar3 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24);
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar3,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StorePlantGiftPanelUI::RefreshItems() */

void __thiscall StorePlantGiftPanelUI::RefreshItems(StorePlantGiftPanelUI *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar6;
  long *plVar7;
  RtWeakPtrBase *pRVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 uVar13;
  int local_10 [2];
  long local_8;
  
  uVar12 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar2 = FUN_033961ec(10);
  uVar13 = *(undefined8 *)(this + 0x140);
  *(undefined4 *)(this + 0x170) = 0;
  uVar6 = FUN_0339543c(uVar13,*(undefined8 *)(this + 0x148));
  if (uVar6 != 0) {
    do {
      plVar7 = (long *)FUN_0339545c(*(undefined8 *)(this + 0x158),uVar12);
      if (*plVar7 != 0) {
        pRVar8 = (RtWeakPtrBase *)FUN_03395448(uVar13,uVar12);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_10,pRVar8);
        lVar9 = LawnApp::GetActivityConfig();
        if (lVar9 == 0) {
LAB_03397c90:
          puVar10 = (undefined8 *)FUN_0339545c(*(undefined8 *)(this + 0x158),uVar12);
          plVar7 = (long *)*puVar10;
          uVar3 = FUN_033961ec(0x19);
          uVar4 = FUN_033961ec(200);
          uVar5 = FUN_033961ec(0x157);
          (**(code **)(*plVar7 + 0x198))(plVar7,iVar2,uVar3,uVar4,uVar5);
          lVar9 = plVar7[10];
          *(int *)(this + 0x170) = *(int *)(this + 0x170) + 1;
          iVar2 = iVar2 + (int)lVar9;
        }
        else {
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
          cVar1 = PlayerInfo::IsCurrentPlantLevelMax(this_01,(string *)(lVar9 + 0x80),false);
          if (cVar1 == '\0') goto LAB_03397c90;
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
          cVar1 = PlayerInfo::IsPlantAvatarUnLocked(this_01,lVar9 + 0x80,0,0);
          if (cVar1 == '\0') goto LAB_03397c90;
          puVar10 = (undefined8 *)FUN_0339545c(*(undefined8 *)(this + 0x158),uVar12);
          (**(code **)(*(long *)this + 0x68))(this,*puVar10);
          plVar7 = gLawnApp;
          puVar10 = (undefined8 *)FUN_0339545c(*(undefined8 *)(this + 0x158),uVar12);
          (**(code **)(*plVar7 + 0x150))(plVar7,*puVar10);
          puVar10 = (undefined8 *)FUN_0339545c(*(undefined8 *)(this + 0x158),uVar12);
          *puVar10 = 0;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
        uVar13 = *(undefined8 *)(this + 0x140);
        uVar6 = FUN_0339543c(uVar13,*(undefined8 *)(this + 0x148));
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar6);
  }
  local_10[0] = FUN_033961ec(10);
  local_10[0] = local_10[0] + iVar2;
  piVar11 = eastl::max_alt<int>((int *)(this + 0x50),local_10);
  *(int *)(this + 0x50) = *piVar11;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StorePlantGiftPanelUI::~StorePlantGiftPanelUI() */

void __thiscall StorePlantGiftPanelUI::~StorePlantGiftPanelUI(StorePlantGiftPanelUI *this)

{
  *(undefined ***)(this + 0xe0) = &PTR__StorePlantGiftPanelUI_06614530;
  *(undefined ***)this = &PTR_GetClass_066141b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066144e8;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>>::~vector
            ((vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>> *)
             (this + 0x158));
  std::
  vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
  ::~vector((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
             *)(this + 0x140));
  StorePanelUI::~StorePanelUI((StorePanelUI *)this);
  return;
}


/* non-virtual thunk to StorePlantGiftPanelUI::~StorePlantGiftPanelUI() */

void __thiscall StorePlantGiftPanelUI::~StorePlantGiftPanelUI(StorePlantGiftPanelUI *this)

{
  ~StorePlantGiftPanelUI(this + -0xe0);
  return;
}


/* StorePlantGiftPanelUI::~StorePlantGiftPanelUI() */

void __thiscall StorePlantGiftPanelUI::~StorePlantGiftPanelUI(StorePlantGiftPanelUI *this)

{
  ~StorePlantGiftPanelUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to StorePlantGiftPanelUI::~StorePlantGiftPanelUI() */

void __thiscall StorePlantGiftPanelUI::~StorePlantGiftPanelUI(StorePlantGiftPanelUI *this)

{
  ~StorePlantGiftPanelUI(this + -0xe0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StorePlantGiftPanelUI::StorePlantGiftPanelUI(Sexy::TRect<int> const&,
   Sexy::RtWeakPtr<MagentoCategoryProps> const&) */

void __thiscall
StorePlantGiftPanelUI::StorePlantGiftPanelUI
          (StorePlantGiftPanelUI *this,TRect *param_1,RtWeakPtr *param_2)

{
  undefined *this_00;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar6;
  RtWeakPtrBase *pRVar7;
  PVZ2UIStoreItemDisplayer *pPVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  PVZ2UIStoreItemDisplayer *local_60;
  int local_58;
  int local_50 [6];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  uVar11 = 0;
  local_8 = ___stack_chk_guard;
  StorePanelUI::StorePanelUI((StorePanelUI *)this);
  *(undefined ***)this = &PTR_GetClass_066141b0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066144e8;
  *(undefined ***)(this + 0xe0) = &PTR__StorePlantGiftPanelUI_06614530;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x158));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  Sexy::AndroidAsyncIOFileDriver::GetSaveDataPath();
  FUN_05474278(this + 0xe8,(string *)local_50);
  std::string::~string((string *)local_50);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  iVar2 = FUN_033961ec(10);
  *(undefined4 *)(this + 0x170) = 0;
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  lVar6 = FUN_0339543c(*(undefined8 *)(lVar6 + 0x60),*(undefined8 *)(lVar6 + 0x68));
  if (lVar6 != 0) {
    do {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      pRVar7 = (RtWeakPtrBase *)FUN_03395448(*(undefined8 *)(lVar6 + 0x60),uVar11);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,pRVar7);
      lVar6 = LawnApp::GetActivityConfig();
      if (lVar6 == 0) {
LAB_033a49cc:
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_50,(RtWeakPtrBase *)aRStack_68);
        pPVar8 = ::operator_new(0x1a0);
        PVZ2UIStoreItemDisplayer::PVZ2UIStoreItemDisplayer
                  (pPVar8,(string *)local_50,*(undefined4 *)(this + 0x170),this + 0xd8);
        local_60 = pPVar8;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
        pPVar8 = local_60;
        uVar3 = FUN_033961ec(0x19);
        uVar4 = FUN_033961ec(200);
        uVar5 = FUN_033961ec(0x157);
        (**(code **)(*(long *)pPVar8 + 0x198))(pPVar8,iVar2,uVar3,uVar4,uVar5);
        Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)local_60);
        iVar2 = iVar2 + *(int *)(local_60 + 0x50);
        std::
        vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
        ::push_back((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                     *)(this + 0x140),(RtWeakPtr *)aRStack_68);
        std::vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>>::push_back
                  ((vector<PVZ2UIStoreItemDisplayer*,std::allocator<PVZ2UIStoreItemDisplayer*>> *)
                   (this + 0x158),&local_60);
        *(int *)(this + 0x170) = *(int *)(this + 0x170) + 1;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
      else {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
        cVar1 = PlayerInfo::IsCurrentPlantLevelMax(this_02,(string *)(lVar6 + 0x80),false);
        if (cVar1 == '\0') goto LAB_033a49cc;
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
        cVar1 = PlayerInfo::IsPlantAvatarUnLocked(this_02,lVar6 + 0x80,0,0);
        if (cVar1 == '\0') goto LAB_033a49cc;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
      uVar11 = uVar11 + 1;
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      uVar9 = FUN_0339543c(*(undefined8 *)(lVar6 + 0x60),*(undefined8 *)(lVar6 + 0x68));
    } while (uVar11 < uVar9);
  }
  Sexy::Insets::Insets((Insets *)&local_60,(Insets *)param_1);
  local_50[0] = FUN_033961ec(10);
  local_50[0] = local_50[0] + iVar2;
  piVar10 = eastl::max_alt<int>((int *)(param_1 + 8),local_50);
  local_58 = *piVar10;
  PlantHeadshot::Resize((PlantHeadshot *)this,(TRect *)&local_60);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,RefreshItems);
  Sexy::Delegate0::Delegate0<StorePlantGiftPanelUI,void(StorePlantGiftPanelUI::*)()>
            (aDStack_38,(string *)local_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::RefreshStorePlantGift,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

