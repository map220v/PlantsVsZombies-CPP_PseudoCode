// Class: DangerRoomSpecialOfferUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferUI::GetImgPtrFromObjectId(int) */

void DangerRoomSpecialOfferUI::GetImgPtrFromObjectId(int param_1)

{
  char cVar1;
  int iVar2;
  NameMapperBase *pNVar3;
  string *psVar4;
  long lVar5;
  int in_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  string asStack_28 [8];
  string asStack_20 [8];
  RtMixedPtrBase aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  pNVar3 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  cVar1 = NameMapperBase::ContainsId(pNVar3,in_w1);
  if (cVar1 == '\0') {
    pNVar3 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar3,in_w1);
    if (cVar1 == '\0') {
      pNVar3 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar3,in_w1);
      if (cVar1 != '\0') {
        iVar2 = PlantAccessoryPieceMapper::GetInstance();
        NameMapperBase::GetNameForId(iVar2);
        std::operator+(asStack_10,"_piece");
        std::string::~string(asStack_10);
        psVar4 = (string *)
                 Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
        ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar4);
        cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
        if (cVar1 != '\0') {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
          lVar5 = StringHelper::ToImage((string *)(lVar5 + 0x60),false);
          if (lVar5 == 0) {
            Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)in_x8);
          }
          else {
            Sexy::BaseResource::GetRtId();
            Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                      ((RtWeakPtr<CthulhuPropertySheet> *)in_x8,(RtId *)asStack_10);
            Sexy::RtId::~RtId((RtId *)asStack_10);
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
        std::string::~string(asStack_20);
      }
      goto LAB_04a7ca5c;
    }
    iVar2 = AvatarChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    FUN_031f5e7c(asStack_20,"avatar_piece_",asStack_28);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar1 != '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      lVar5 = StringHelper::ToImage((string *)(lVar5 + 0x60),false);
      goto joined_r0x04a7cb00;
    }
  }
  else {
    iVar2 = PlantChipNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar2);
    FUN_031f5e7c(asStack_20,"plant_piece_",asStack_28);
    psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar4);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
    if (cVar1 != '\0') {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
      lVar5 = StringHelper::ToImage((string *)(lVar5 + 0x60),false);
joined_r0x04a7cb00:
      if (lVar5 == 0) {
        Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)in_x8);
      }
      else {
        Sexy::BaseResource::GetRtId();
        Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                  ((RtWeakPtr<CthulhuPropertySheet> *)in_x8,(RtId *)asStack_10);
        Sexy::RtId::~RtId((RtId *)asStack_10);
      }
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
LAB_04a7ca5c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DangerRoomSpecialOfferUI::ButtonPress(int) */

int DangerRoomSpecialOfferUI::ButtonPress(int param_1)

{
  return param_1;
}


/* non-virtual thunk to DangerRoomSpecialOfferUI::ButtonPress(int) */

void __thiscall DangerRoomSpecialOfferUI::ButtonPress(DangerRoomSpecialOfferUI *this,int param_1)

{
  ButtonPress((int)this + -0xd8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferUI::~DangerRoomSpecialOfferUI() */

void __thiscall DangerRoomSpecialOfferUI::~DangerRoomSpecialOfferUI(DangerRoomSpecialOfferUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  *(undefined **)(this + 0xd8) = &DAT_06984f70;
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06984c40;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SkillDisplay");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AvatarView_Dev2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon2");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"AudioCommon");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_DangerRoomSpecialOffer");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::DeleteGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  FUN_05476c50(this + 0x238);
  FUN_05476c50(this + 0x220);
  FUN_05476c50(this + 0x1d8);
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomSpecialOfferUI::~DangerRoomSpecialOfferUI() */

void __thiscall DangerRoomSpecialOfferUI::~DangerRoomSpecialOfferUI(DangerRoomSpecialOfferUI *this)

{
  ~DangerRoomSpecialOfferUI(this);
  AK::FreeHook(this);
  return;
}


/* DangerRoomSpecialOfferUI::isActive() */

undefined1 DangerRoomSpecialOfferUI::isActive(void)

{
  return s_isActive;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferUI::InitTestData() */

void __thiscall DangerRoomSpecialOfferUI::InitTestData(DangerRoomSpecialOfferUI *this)

{
  bool bVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  long local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DangerRoomSpecialOfferInfo::DangerRoomSpecialOfferInfo((DangerRoomSpecialOfferInfo *)&local_28);
  local_28 = 0x1b1c2;
  uStack_24 = 2;
  local_20 = LawnApp::GetRealBeijingTime(gLawnApp);
  local_20 = local_20 + 0x178c8;
  local_18 = 10000;
  uStack_14 = 1;
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x128) = 0x100002710;
  *(undefined4 *)(this + 0x130) = local_10;
  *(ulong *)(this + 0x118) = CONCAT44(uStack_24,local_28);
  *(long *)(this + 0x120) = local_20;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferUI::DangerRoomSpecialOfferUI() */

void __thiscall DangerRoomSpecialOfferUI::DangerRoomSpecialOfferUI(DangerRoomSpecialOfferUI *this)

{
  LawnApp *pLVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06984c40;
  *(undefined **)(this + 0xd8) = &DAT_06984f70;
  Sexy::Insets::Insets((Insets *)(this + 0xe0));
  Sexy::Insets::Insets((Insets *)(this + 0xf8));
  Sexy::Insets::Insets((Insets *)(this + 0x108));
  DangerRoomSpecialOfferInfo::DangerRoomSpecialOfferInfo
            ((DangerRoomSpecialOfferInfo *)(this + 0x118));
  Sexy::Insets::Insets((Insets *)(this + 0x140));
  Sexy::Insets::Insets((Insets *)(this + 0x158));
  Sexy::Insets::Insets((Insets *)(this + 0x170));
  Sexy::Insets::Insets((Insets *)(this + 0x188));
  Sexy::Insets::Insets((Insets *)(this + 0x198));
  Sexy::Insets::Insets((Insets *)(this + 0x1b0));
  Sexy::Insets::Insets((Insets *)(this + 0x1c8));
  FUN_05476574(this + 0x1d8);
  Sexy::Insets::Insets((Insets *)(this + 0x1e0));
  Sexy::Insets::Insets((Insets *)(this + 0x1f8));
  Sexy::Insets::Insets((Insets *)(this + 0x210));
  FUN_05476574(this + 0x220);
  Sexy::Insets::Insets((Insets *)(this + 0x228));
  FUN_05476574(this + 0x238);
  Sexy::Insets::Insets((Insets *)(this + 0x240));
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  this[0x250] = (DangerRoomSpecialOfferUI)0x0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Store");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_Activity");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_SkillDisplay");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"Effects_LevelUp");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_AvatarView_Dev2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"LevelCommon2");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"AudioCommon");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_DangerRoomSpecialOffer");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_10,"UI_HeadShot_BigPlant");
  LawnApp::LoadGroup(pLVar1,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomSpecialOfferUI::DrawOverlay(Sexy::Graphics*) */

void __thiscall
DangerRoomSpecialOfferUI::DrawOverlay(DangerRoomSpecialOfferUI *this,Graphics *param_1)

{
  Image *pIVar1;
  
  pIVar1 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8fe58);
  Sexy::Graphics::DrawImage
            (param_1,pIVar1,*(int *)(this + 0x140),*(int *)(this + 0x144),*(int *)(this + 0x148),
             *(int *)(this + 0x14c));
  return;
}


/* DangerRoomSpecialOfferUI::setUnactive() */

void DangerRoomSpecialOfferUI::setUnactive(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onNotifyRefreshActivityList);
  MessageRouter::
  Unsubscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBFunctionTranslatorX<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onMsgErrorRequest);
  MessageRouter::
  Unsubscribe<int,std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,uVar2);
  s_isActive = 0;
  return;
}


/* DangerRoomSpecialOfferUI::onMsgErrorRequest(int, std::string const&) */

void DangerRoomSpecialOfferUI::onMsgErrorRequest(int param_1,string *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onNotifyRefreshActivityList);
  MessageRouter::
  Unsubscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBFunctionTranslatorX<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,uVar2);
  puVar1 = gMessageRouter;
  uVar2 = std::
          __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                    ((TaskResource **)onMsgErrorRequest);
  MessageRouter::
  Unsubscribe<int,std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(int,std::string_const&)>>
            ((MessageRouter *)puVar1,Message::MsgErrorRequest,uVar2);
  s_isActive = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferUI::InitView() */

void __thiscall DangerRoomSpecialOfferUI::InitView(DangerRoomSpecialOfferUI *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  PVZ2UIButton *pPVar14;
  LotteryResultProgressBar *pLVar15;
  SalesProgressBar *pSVar16;
  undefined8 uVar17;
  string *psVar18;
  ulong uVar19;
  char *__s;
  string *extraout_x1;
  string *psVar20;
  long lVar21;
  code *pcVar22;
  Sexy aSStack_f0 [8];
  string asStack_e8 [8];
  string asStack_e0 [8];
  wstring awStack_d8 [8];
  RtWeakPtr aRStack_d0 [8];
  string asStack_c8 [8];
  RtMixedPtrBase aRStack_c0 [8];
  string asStack_b8 [8];
  string asStack_b0 [8];
  string asStack_a8 [8];
  string asStack_a0 [8];
  undefined1 auStack_98 [8];
  string asStack_90 [8];
  int local_88;
  int iStack_84;
  int local_80;
  undefined4 uStack_7c;
  string asStack_78 [56];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)(gLawnApp + 0x71c),*(undefined4 *)(gLawnApp + 0x720),
             *(undefined4 *)(gLawnApp + 0x724),*(undefined4 *)(gLawnApp + 0x728));
  iVar3 = FUN_04c3264c(0x90);
  iVar4 = FUN_04c3264c(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_88,iVar3,iVar4,*(int *)(this + 0x50) + iVar3 * -2,
             *(int *)(this + 0x54) + iVar4 * -2);
  *(ulong *)(this + 0xe0) = CONCAT44(iStack_84,local_88);
  *(ulong *)(this + 0xe8) = CONCAT44(uStack_7c,local_80);
  FUN_05478178(asStack_78,&DAT_056f11a8,asStack_90);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar14,100,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)&local_40);
  FUN_05476c50(asStack_78);
  nop();
  pcVar22 = *(code **)(*(long *)pPVar14 + 0x198);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ffe0);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar4 = FUN_04c3264c(10);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ffe0);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar16);
  iVar6 = FUN_04c3264c(8);
  pLVar15 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ffe0);
  uVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  pSVar16 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ffe0);
  uVar8 = SalesProgressBar::GetCurrentLevel(pSVar16);
  (*pcVar22)(pPVar14,((local_88 + local_80) - iVar3 / 2) - iVar4,(iStack_84 - iVar5 / 2) + iVar6,
             uVar7,uVar8);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b8ffe0,1);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8ff88,1);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
  (**(code **)(*(long *)this + 0x60))(this,pPVar14);
  iVar3 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar3);
  std::string::string(asStack_e8,"IMAGE_UI_DANGERROOMSPECIALOFFER_BANNER");
  nop();
  pLVar15 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_e8,false);
  *(LotteryResultProgressBar **)(this + 0x168) = pLVar15;
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar3 = *(int *)(this + 0xe8);
  iVar4 = *(int *)(this + 0xe0);
  iVar9 = FUN_04c3264c(0x28);
  iVar5 = *(int *)(this + 0xe4);
  iVar10 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x168));
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar4 + (iVar3 - (int)(float)iVar6) / 2,iVar9 + iVar5,
             (int)(float)iVar6,(int)(float)iVar10);
  *(undefined8 *)(this + 0x170) = local_40;
  *(undefined8 *)(this + 0x178) = uStack_38;
  std::string::string(asStack_e0,"IMAGE_UI_DANGERROOMSPECIALOFFER_MAIN_BG");
  nop();
  pLVar15 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_e0,false);
  *(LotteryResultProgressBar **)(this + 0x150) = pLVar15;
  iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar3 = *(int *)(this + 0x174);
  iVar4 = *(int *)(this + 0xe8);
  iVar5 = *(int *)(this + 0xe0);
  iVar6 = *(int *)(this + 0x17c);
  iVar10 = FUN_04c3264c(5);
  iVar11 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x150));
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar5 + (iVar4 - (int)(float)iVar9) / 2,iVar3 + iVar6 + iVar10,
             (int)(float)iVar9,(int)(float)iVar11);
  *(undefined8 *)(this + 0x158) = local_40;
  *(undefined8 *)(this + 0x160) = uStack_38;
  Sexy::StrFormat(L"[DANGERROOM_SPECIAL_OFFER_BUNDLE_NAME_%d]",awStack_d8,
                  (ulong)*(uint *)(this + 300));
  TodStringTranslate(awStack_d8);
  FUN_054766c8(this + 0x220,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  iVar4 = FUN_04c3264c(10);
  iVar3 = *(int *)(this + 0x15c);
  iVar5 = FUN_04c3264c(0xa0);
  uVar12 = FUN_04c3264c(0x24);
  psVar20 = (string *)(ulong)uVar12;
  Sexy::Insets::Insets((Insets *)&local_40,*(int *)(this + 0x158),iVar4 + iVar3,iVar5,uVar12);
  *(undefined8 *)(this + 0x228) = local_40;
  *(undefined8 *)(this + 0x230) = uStack_38;
  Sexy::StringToUpper(aSStack_f0,(string *)(this + 0x228));
  std::operator+((string *)&PlantHeadshot::PlantBigPrefix,asStack_78);
  uVar17 = StringHelper::ToImage((string *)&local_40,true);
  *(undefined8 *)(this + 0xf0) = uVar17;
  std::string::~string((string *)&local_40);
  std::string::~string(asStack_78);
  if (*(LotteryResultProgressBar **)(this + 0xf0) != (LotteryResultProgressBar *)0x0) {
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xf0));
    iVar5 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xf0));
    iVar3 = *(int *)(this + 0x160);
    uVar12 = (uint)((float)iVar5 * 0.8);
    psVar20 = (string *)(ulong)uVar12;
    iVar5 = FUN_04c3264c(0x32);
    iVar6 = FUN_04c3264c(10);
    Sexy::Insets::Insets
              ((Insets *)&local_40,
               ((iVar3 - (int)((float)iVar4 * 0.8)) - iVar5) + *(int *)(this + 0x158),
               iVar6 + (int)(*(int *)(this + 0x164) - uVar12) / 2 + *(int *)(this + 0x15c),
               (int)((float)iVar4 * 0.8),uVar12);
    *(undefined8 *)(this + 0xf8) = local_40;
    *(undefined8 *)(this + 0x100) = uStack_38;
  }
  psVar18 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar18);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_d0);
  if ((bVar1) &&
     (lVar21 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0)
     , *(int *)(lVar21 + 0xd0) == 4)) {
    __s = "IMAGE_UI_DANGERROOMSPECIALOFFER_LABEL_LEGEND";
  }
  else {
    __s = "IMAGE_UI_DANGERROOMSPECIALOFFER_LABEL_EPIC";
  }
  std::string::string(asStack_c8,__s);
  nop();
  pLVar15 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_c8,false);
  *(LotteryResultProgressBar **)(this + 0x1c0) = pLVar15;
  if (pLVar15 != (LotteryResultProgressBar *)0x0) {
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
    uVar12 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x1c0));
    psVar20 = (string *)(ulong)uVar12;
    iVar3 = *(int *)(this + 0x160);
    iVar6 = FUN_04c3264c(8);
    iVar4 = *(int *)(this + 0x158);
    iVar9 = FUN_04c3264c(10);
    Sexy::Insets::Insets
              ((Insets *)&local_40,((iVar3 - iVar5) - iVar6) + iVar4,iVar9 + *(int *)(this + 0x15c),
               iVar5,uVar12);
    *(undefined8 *)(this + 0x1c8) = local_40;
    *(undefined8 *)(this + 0x1d0) = uStack_38;
  }
  std::string::string(asStack_90,"iOS PvZ2 Plant Store");
  std::string::string(asStack_78,"Plant Pieces");
  std::string::string((string *)&local_40,"plant");
  Magento::FindStoreProduct
            ((Magento *)asStack_90,asStack_78,(string *)&local_40,(string *)aSStack_f0,psVar20);
  std::string::~string((string *)&local_40);
  nop();
  std::string::~string(asStack_78);
  nop();
  std::string::~string(asStack_90);
  nop();
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_c0);
  if (cVar2 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0);
    MagentoProductProps::GetLocalizedShortDescription();
    Sexy::UTF8StringToWString((Sexy *)asStack_90,extraout_x1);
    TodStringTranslate((wstring *)asStack_78);
    FUN_054766c8(this + 0x1d8,(Insets *)&local_40);
    FUN_05476c50((Insets *)&local_40);
    FUN_05476c50(asStack_78);
    std::string::~string(asStack_90);
    iVar3 = FUN_04c3264c(0x24);
    Sexy::Insets::Insets
              ((Insets *)&local_40,*(int *)(this + 0x1c8),
               *(int *)(this + 0x1cc) + (*(int *)(this + 0x1d4) - iVar3) / 2,*(int *)(this + 0x1d0),
               iVar3);
    *(undefined8 *)(this + 0x1e0) = local_40;
    *(undefined8 *)(this + 0x1e8) = uStack_38;
  }
  Sexy::StrFormat("IMAGE_UI_SKILL_DISPLAY_SKILL_%d",asStack_b8,(ulong)*(uint *)(this + 0x11c));
  pLVar15 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_b8,false);
  *(LotteryResultProgressBar **)(this + 0x208) = pLVar15;
  if (pLVar15 != (LotteryResultProgressBar *)0x0) {
    iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
    iVar3 = *(int *)(this + 0x158);
    iVar4 = *(int *)(this + 0x160);
    iVar10 = FUN_04c3264c(0x14);
    iVar11 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x208));
    iVar5 = *(int *)(this + 0x1cc);
    iVar6 = *(int *)(this + 0x1d4);
    iVar13 = FUN_04c3264c(8);
    Sexy::Insets::Insets
              ((Insets *)&local_40,((iVar3 + iVar4) - (int)(float)iVar9) - iVar10,
               iVar5 + iVar6 + iVar13,(int)(float)iVar9,(int)(float)iVar11);
    *(undefined8 *)(this + 0x210) = local_40;
    *(undefined8 *)(this + 0x218) = uStack_38;
  }
  Sexy::StrFormat("IMAGE_UI_DANGERROOMSPECIALOFFER_BUNDLE_%d",asStack_b0,
                  (ulong)*(uint *)(this + 300));
  pLVar15 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_b0,false);
  *(LotteryResultProgressBar **)(this + 0x1f0) = pLVar15;
  if (pLVar15 != (LotteryResultProgressBar *)0x0) {
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
    iVar9 = FUN_04c3264c(0x19);
    iVar3 = *(int *)(this + 0x158);
    iVar10 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x1f0));
    iVar4 = *(int *)(this + 0x164);
    iVar5 = *(int *)(this + 0x15c);
    iVar11 = FUN_04c3264c(0);
    Sexy::Insets::Insets
              ((Insets *)&local_40,iVar9 + iVar3,iVar5 + (iVar4 - (int)(float)iVar10) / 2 + iVar11,
               (int)(float)iVar6,(int)(float)iVar10);
    *(undefined8 *)(this + 0x1f8) = local_40;
    *(undefined8 *)(this + 0x200) = uStack_38;
  }
  std::string::string(asStack_a8,"IMAGE_UI_DANGERROOMSPECIALOFFER_TITLE");
  nop();
  pLVar15 = (LotteryResultProgressBar *)StringHelper::ToImage(asStack_a8,false);
  *(LotteryResultProgressBar **)(this + 0x180) = pLVar15;
  iVar3 = *(int *)(this + 0xe8);
  iVar4 = *(int *)(this + 0xe0);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar15);
  iVar5 = *(int *)(this + 0xe4);
  iVar9 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x180));
  iVar10 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0x180));
  iVar11 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x180));
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar4 + (iVar3 - iVar6) / 2,iVar5 - iVar9 / 2,iVar10,iVar11);
  *(undefined8 *)(this + 0x188) = local_40;
  *(undefined8 *)(this + 400) = uStack_38;
  iVar3 = FUN_04c3264c(10);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x188),iVar3 + *(int *)(this + 0x18c),
             *(int *)(this + 400),0);
  *(undefined8 *)(this + 0x198) = local_40;
  *(undefined8 *)(this + 0x1a0) = uStack_38;
  std::string::string(asStack_a0,"IMAGE_UI_DIALOG_ASSET_GRAY_BG_OUTER");
  nop();
  uVar17 = StringHelper::ToImage(asStack_a0,false);
  *(undefined8 *)(this + 0x1a8) = uVar17;
  iVar6 = FUN_04c3264c(0x65);
  iVar3 = *(int *)(this + 0x174);
  iVar4 = *(int *)(this + 0xe4);
  iVar5 = *(int *)(this + 0x17c);
  iVar9 = FUN_04c3264c(5);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x158),
             *(int *)(this + 0x164) + *(int *)(this + 0x15c) +
             ((((((iVar4 - iVar3) - iVar5) - iVar9) - *(int *)(this + 0x164)) +
              *(int *)(this + 0xec)) - iVar6) / 2,*(int *)(this + 0x160),iVar6);
  *(undefined8 *)(this + 0x1b0) = local_40;
  *(undefined8 *)(this + 0x1b8) = uStack_38;
  FUN_05478178(asStack_78,&DAT_056f11a8,asStack_90);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar14 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar14,0x65,(ButtonListener *)(this + 0xd8),(wstring *)asStack_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x138) = pPVar14;
  FUN_05476c50(asStack_78);
  nop();
  pPVar14 = *(PVZ2UIButton **)(this + 0x138);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)asStack_78,&DAT_06b8fdd8,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b90008,3);
  PVZ2UIButton::SetDialogStates(pPVar14,(PVZ2UIImage *)asStack_78,(PVZ2UIImage *)&local_40);
  iVar5 = FUN_04c3264c(0x170);
  iVar3 = *(int *)(this + 0x1b0);
  iVar4 = *(int *)(this + 0x1b8);
  iVar6 = FUN_04c3264c(0x19);
  iVar9 = FUN_04c3264c(0x46);
  (**(code **)(**(long **)(this + 0x138) + 0x198))
            (*(long **)(this + 0x138),((iVar3 + iVar4) - iVar5) - iVar6,
             *(int *)(this + 0x1b4) + (*(int *)(this + 0x1bc) - iVar9) / 2,iVar5,iVar9);
  iVar4 = FUN_04c3264c(0x19);
  iVar5 = FUN_04c3264c(0xd);
  iVar6 = FUN_04c3264c(0x7d);
  iVar3 = iVar6;
  iVar9 = FUN_04c3264c(0x24);
  std::string::string((string *)&local_40,"[DANGERROOM_SPECIAL_PURCHASE_BTN_NORMAL_PRICE]");
  StringHelper::ReplaceNumberString
            ((StringHelper *)&local_40,(string *)L"{NUMBER}",
             (wchar_t *)(ulong)*(uint *)(this + 0x130),iVar3);
  std::string::~string((string *)&local_40);
  nop();
  pPVar14 = *(PVZ2UIButton **)(this + 0x138);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar5,iVar6,iVar9);
  uVar17 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  PVZ2UIButton::AddText(pPVar14,auStack_98,(Insets *)&local_40,uVar17,0xffffffff);
  iVar3 = FUN_04c3264c(0xa8);
  iVar4 = FUN_04c3264c(0x14);
  iVar5 = FUN_04c3264c(0x1d);
  iVar6 = FUN_04c3264c(0x1b);
  pPVar14 = *(PVZ2UIButton **)(this + 0x138);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b8ff10,2);
  Sexy::Insets::Insets((Insets *)asStack_78,iVar3,iVar4,iVar5,iVar6);
  PVZ2UIButton::AddImage(pPVar14,(PVZ2UIImage *)&local_40,(TRect *)asStack_78);
  iVar4 = FUN_04c3264c(0xdc);
  iVar5 = FUN_04c3264c(0xd);
  iVar6 = FUN_04c3264c(0x6d);
  iVar3 = iVar6;
  iVar9 = FUN_04c3264c(0x24);
  std::string::string((string *)&local_40,"[DANGERROOM_SPECIAL_PURCHASE_BTN_DISCOUNT_PRICE]");
  iVar10 = Sexy::LazySingleton<DangerRoomOfferMgr>::GetInstance();
  uVar19 = DangerRoomOfferMgr::GetTargetBundlePrice(iVar10);
  StringHelper::ReplaceNumberString
            ((StringHelper *)&local_40,(string *)L"{NUMBER}",(wchar_t *)(uVar19 & 0xffffffff),iVar3)
  ;
  std::string::~string((string *)&local_40);
  nop();
  pPVar14 = *(PVZ2UIButton **)(this + 0x138);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,iVar5,iVar6,iVar9);
  uVar17 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_28_ThickOutline);
  PVZ2UIButton::AddText(pPVar14,asStack_90,(Insets *)&local_40,uVar17,0);
  iVar3 = FUN_04c3264c(0x28);
  iVar4 = FUN_04c3264c(0x10);
  iVar5 = FUN_04c3264c(0x61);
  iVar6 = FUN_04c3264c(0x1e);
  pPVar14 = *(PVZ2UIButton **)(this + 0x138);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b900b8,2);
  Sexy::Insets::Insets((Insets *)asStack_78,iVar3,iVar4,iVar5,iVar6);
  PVZ2UIButton::AddImage(pPVar14,(PVZ2UIImage *)&local_40,(TRect *)asStack_78);
  (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x138));
  lVar21 = *(long *)(this + 0x138);
  iVar5 = FUN_04c3264c(0x14c);
  iVar3 = *(int *)(lVar21 + 0x48);
  iVar6 = FUN_04c3264c(0xfffffff6);
  iVar4 = *(int *)(lVar21 + 0x4c);
  iVar9 = FUN_04c3264c(0x34);
  iVar10 = FUN_04c3264c(0x30);
  Sexy::Insets::Insets((Insets *)&local_40,iVar5 + iVar3,iVar6 + iVar4,iVar9,iVar10);
  iVar3 = *(int *)(this + 0x1b0);
  *(undefined8 *)(this + 0x140) = local_40;
  *(undefined8 *)(this + 0x148) = uStack_38;
  iVar4 = FUN_04c3264c(0x50);
  Sexy::Insets::Insets
            ((Insets *)&local_40,iVar3,*(int *)(this + 0x1b4) + (*(int *)(this + 0x1bc) - iVar4) / 2
             ,*(int *)(*(long *)(this + 0x138) + 0x48) - iVar3,iVar4);
  *(undefined8 *)(this + 0x108) = local_40;
  *(undefined8 *)(this + 0x110) = uStack_38;
  Sexy::StrFormat(L"%d",(Insets *)&local_40,(ulong)*(uint *)(this + 0x128));
  FUN_054766c8(this + 0x238,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  iVar5 = FUN_04c3264c(0x14a);
  iVar3 = *(int *)(this + 0x158);
  iVar6 = FUN_04c3264c(0x41);
  iVar4 = *(int *)(this + 0x15c);
  iVar9 = FUN_04c3264c(0xa0);
  iVar10 = FUN_04c3264c(0x50);
  Sexy::Insets::Insets((Insets *)&local_40,iVar5 + iVar3,iVar6 + iVar4,iVar9,iVar10);
  *(undefined8 *)(this + 0x240) = local_40;
  *(undefined8 *)(this + 0x248) = uStack_38;
  FUN_05476c50(asStack_90);
  FUN_05476c50(auStack_98);
  std::string::~string(asStack_a0);
  std::string::~string(asStack_a8);
  std::string::~string(asStack_b0);
  std::string::~string(asStack_b8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c0);
  std::string::~string(asStack_c8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_d0);
  FUN_05476c50(awStack_d8);
  std::string::~string(asStack_e0);
  std::string::~string(asStack_e8);
  std::string::~string((string *)aSStack_f0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferUI::RequestNetwork() */

void DangerRoomSpecialOfferUI::RequestNetwork(void)

{
  undefined *puVar1;
  LawnApp *this;
  char cVar2;
  undefined8 uVar3;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  PVZ2UIDialog *pPVar4;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsNetworkModuleOK();
  this = gLawnApp;
  puVar1 = gMessageRouter;
  if (cVar2 == '\0') {
    FUN_05478178(awStack_58,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_68);
    FUN_05478178((wstring *)avStack_50,L"[NETWORK_NOT_CONNECTED_TEXT]",auStack_60);
    pPVar4 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,(wstring *)avStack_50);
    FUN_05476c50((wstring *)avStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[DIALOG_STRING_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_38,(wstring *)avStack_50);
    PVZ2UIDialog::AddButton(pPVar4,awStack_58,aDStack_38,0);
    FUN_05476c50(awStack_58);
    nop();
  }
  else {
    s_isActive = 1;
    uVar3 = std::
            __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                      ((TaskResource **)onNotifyRefreshActivityList);
    MessageRouter::
    Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBFunctionTranslatorX<void(*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
              ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,uVar3);
    puVar1 = gMessageRouter;
    uVar3 = std::
            __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                      ((TaskResource **)onMsgErrorRequest);
    MessageRouter::
    Subscribe<int,std::string_const&,Sexy::CBFunctionTranslatorX<void(*)(int,std::string_const&)>>
              ((MessageRouter *)puVar1,Message::MsgErrorRequest,uVar3);
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_50,&DAT_05755680,1,awStack_58);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_50,0,true);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferUI::ButtonDepress(int) */

void __thiscall DangerRoomSpecialOfferUI::ButtonDepress(DangerRoomSpecialOfferUI *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  DangerRoomOfferMgr *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar2 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar2,"Play_UI_Button_Click_Press");
  if (param_1 == 100) {
    LawnApp::KillDangerRoomSpecialOfferUI(gLawnApp);
  }
  else if (param_1 == 0x65) {
    this_00 = (DangerRoomOfferMgr *)Sexy::LazySingleton<DangerRoomOfferMgr>::GetInstance();
    iVar1 = Sexy::LazySingleton<DangerRoomOfferMgr>::GetInstance();
    DangerRoomOfferMgr::GetTargetBundleSku(iVar1);
    DangerRoomOfferMgr::BuyOffer(this_00,asStack_10,(DangerRoomSpecialOfferInfo *)(this + 0x118));
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to DangerRoomSpecialOfferUI::ButtonDepress(int) */

void __thiscall DangerRoomSpecialOfferUI::ButtonDepress(DangerRoomSpecialOfferUI *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferUI::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void DangerRoomSpecialOfferUI::onNotifyRefreshActivityList(bool param_1,set *param_2)

{
  LawnApp *this;
  bool bVar1;
  int iVar2;
  PVZ2UIDialog *pPVar3;
  undefined1 auStack_b8 [8];
  int local_b0 [2];
  undefined8 local_a8;
  undefined8 local_a0 [3];
  Delegate0 aDStack_88 [24];
  char local_70;
  long local_8;
  
  this = gLawnApp;
  local_8 = ___stack_chk_guard;
  if (param_1) {
    local_b0[0] = 0x2a1c;
    local_a8 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,local_b0);
    local_a0[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_a8,(rbtree_iterator *)local_a0);
    if (bVar1) {
      iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar2);
      ActiveItem::~ActiveItem((ActiveItem *)aDStack_88);
      if (local_70 != '\0') {
        LawnApp::ShowDangerRoomSpecialOfferUI(gLawnApp);
      }
    }
  }
  else {
    FUN_05478178((wstring *)&local_a8,&DAT_056f11a8,auStack_b8);
    FUN_05478178((wstring *)local_a0,L"[RECALL_OFFER_NETWORK_ERROR]",local_b0);
    pPVar3 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,(wstring *)&local_a8,(wstring *)local_a0);
    FUN_05476c50((wstring *)local_a0);
    nop();
    FUN_05476c50((wstring *)&local_a8);
    nop();
    FUN_05478178((wstring *)&local_a8,L"[BUTTON_OK]",local_b0);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>(aDStack_88,(wstring *)local_a0);
    PVZ2UIDialog::AddButton(pPVar3,(wstring *)&local_a8,aDStack_88,1);
    FUN_05476c50((wstring *)&local_a8);
    nop();
    setUnactive();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferUI::SyncActivityData(int, int, int, long, int, int) */

void __thiscall
DangerRoomSpecialOfferUI::SyncActivityData
          (DangerRoomSpecialOfferUI *this,int param_1,int param_2,int param_3,long param_4,
          int param_5,int param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  TGALogMgr *pTVar5;
  char *__n;
  int local_68;
  int iStack_64;
  long local_60;
  int local_58;
  int iStack_54;
  int local_50;
  TGAAccumulatedLoginData aTStack_48 [8];
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  DString aDStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DangerRoomSpecialOfferInfo::DangerRoomSpecialOfferInfo((DangerRoomSpecialOfferInfo *)&local_68);
  *(int *)(this + 0x130) = param_6;
  *(ulong *)(this + 0x128) = CONCAT44(param_1,param_5);
  *(ulong *)(this + 0x118) = CONCAT44(param_3,param_2);
  *(long *)(this + 0x120) = param_4;
  local_68 = param_2;
  iStack_64 = param_3;
  local_60 = param_4;
  local_58 = param_5;
  iStack_54 = param_1;
  local_50 = param_6;
  InitView(this);
  lVar3 = Sexy::LazySingleton<DangerRoomOfferMgr>::GetInstance();
  cVar1 = FUN_04c32090(*(undefined1 *)(lVar3 + 0x28));
  iVar2 = Sexy::LazySingleton<DangerRoomOfferMgr>::GetInstance();
  iVar2 = DangerRoomOfferMgr::GetTargetBundlePrice(iVar2);
  TGAAccumulatedLoginData::TGAAccumulatedLoginData(aTStack_48);
  if (cVar1 == '\0') {
    pcVar4 = "2";
  }
  else {
    pcVar4 = "1";
  }
  __n = "phone";
  std::string::append((string *)aTStack_48,pcVar4,0x5594000);
  DString::DString(aDStack_28,*(int *)(this + 300));
  pcVar4 = (char *)DString::c_str(aDStack_28);
  std::string::append(asStack_40,pcVar4,(size_t)__n);
  DString::~DString(aDStack_28);
  DString::DString(aDStack_28,*(int *)(this + 0x118));
  pcVar4 = (char *)DString::c_str(aDStack_28);
  std::string::append(asStack_38,pcVar4,(size_t)__n);
  DString::~DString(aDStack_28);
  DString::DString(aDStack_28,iVar2);
  pcVar4 = (char *)DString::c_str(aDStack_28);
  std::string::append(asStack_30,pcVar4,(size_t)__n);
  DString::~DString(aDStack_28);
  pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  InvitationPlayerInfo::InvitationPlayerInfo
            ((InvitationPlayerInfo *)aDStack_28,(InvitationPlayerInfo *)aTStack_48);
  TGALogMgr::LogDangerRoomSpecialOffer(pTVar5,aDStack_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData((TGAAccumulatedLoginData *)aDStack_28);
  TGAAccumulatedLoginData::~TGAAccumulatedLoginData(aTStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferUI::RefreshActivity() */

void __thiscall DangerRoomSpecialOfferUI::RefreshActivity(DangerRoomSpecialOfferUI *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ProfileMgr *this_00;
  undefined8 uVar4;
  int extraout_var;
  vector<DangerRoomSpecialOfferConfig,std::allocator<DangerRoomSpecialOfferConfig>> avStack_128 [8];
  long local_120;
  NetworkDangerRoomSpecialOfferInfo aNStack_110 [8];
  vector avStack_108 [24];
  DangerRoomSpecialOfferConfig aDStack_f0 [8];
  undefined4 local_e8;
  undefined4 local_90;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_70 == '\0') {
    LawnApp::KillDangerRoomSpecialOfferUI(gLawnApp);
  }
  else {
    NetworkDangerRoomSpecialOfferInfo::NetworkDangerRoomSpecialOfferInfo(aNStack_110);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_110);
    if (cVar1 != '\0') {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      uVar4 = ProfileMgr::GetCurrentProfile(this_00);
      std::vector<DangerRoomSpecialOfferConfig,std::allocator<DangerRoomSpecialOfferConfig>>::vector
                (avStack_128,avStack_108);
      FilterDangerRoomSpecialOfferConfig(aDStack_f0,uVar4,avStack_128);
      std::vector<DangerRoomSpecialOfferConfig,std::allocator<DangerRoomSpecialOfferConfig>>::
      ~vector(avStack_128);
      uVar4 = DangerRoomSpecialOfferConfig::GetPlant(aDStack_f0);
      DangerRoomSpecialOfferConfig::GetBonus(aDStack_f0);
      PlayerInfo::GetDangerRoomSpecialOfferSaveData();
      iVar2 = FUN_04c32098(local_e8);
      iVar3 = FUN_04c32094(local_90);
      SyncActivityData(this,iVar2,(int)uVar4,(int)((ulong)uVar4 >> 0x20),local_120,extraout_var,
                       iVar3);
      DangerRoomSpecialOfferConfig::~DangerRoomSpecialOfferConfig(aDStack_f0);
    }
    NetworkDangerRoomSpecialOfferInfo::~NetworkDangerRoomSpecialOfferInfo(aNStack_110);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferUI::Draw(Sexy::Graphics*) */

void __thiscall DangerRoomSpecialOfferUI::Draw(DangerRoomSpecialOfferUI *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [12];
  undefined1 auStack_28 [8];
  wstring awStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (*(Image **)(this + 0x150) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x150),*(int *)(this + 0x158),*(int *)(this + 0x15c),
               *(int *)(this + 0x160),*(int *)(this + 0x164));
  }
  if (*(Image **)(this + 0x168) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x168),*(int *)(this + 0x170),*(int *)(this + 0x174),
               *(int *)(this + 0x178),*(int *)(this + 0x17c));
  }
  if (*(Image **)(this + 0x180) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x180),*(int *)(this + 0x188),*(int *)(this + 0x18c),
               *(int *)(this + 400),*(int *)(this + 0x194));
  }
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline);
  iVar1 = *(int *)(this + 0x198);
  iVar2 = *(int *)(this + 0x19c);
  iVar3 = *(int *)(this + 0x1a0);
  TodStringTranslate(L"[DANGERROOM_SPECIAL_OFFER_TITLE]");
  Sexy::Color::Color((Color *)aIStack_18,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)(float)iVar1,(float)iVar2,(float)iVar3,uVar4,param_1,awStack_20,1,
             aIStack_18,0);
  FUN_05476c50(awStack_20);
  if (*(long *)(this + 0x1a8) != 0) {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x1b0));
    Draw9SliceImage(param_1,aIStack_18,*(undefined8 *)(this + 0x1a8));
  }
  if (*(Image **)(this + 0x1c0) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x1c0),*(int *)(this + 0x1c8),*(int *)(this + 0x1cc),
               *(int *)(this + 0x1d0),*(int *)(this + 0x1d4));
  }
  if (*(Image **)(this + 0xf0) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0xf0),*(int *)(this + 0xf8),*(int *)(this + 0xfc),
               *(int *)(this + 0x100),*(int *)(this + 0x104));
  }
  if (*(Image **)(this + 0x208) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x208),*(int *)(this + 0x210),*(int *)(this + 0x214),
               *(int *)(this + 0x218),*(int *)(this + 0x21c));
  }
  if (*(Image **)(this + 0x1f0) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x1f0),*(int *)(this + 0x1f8),*(int *)(this + 0x1fc),
               *(int *)(this + 0x200),*(int *)(this + 0x204));
  }
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x1d8,this + 0x1e0,uVar4,aIStack_18,5,1);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22_ThickOutline);
  Sexy::Color::Color((Color *)aIStack_18,4);
  WriteWordInRect(param_1,this + 0x220,this + 0x228,uVar4,aIStack_18,5,1);
  TodStringTranslate(L"[PLANT_SPECIAL_LEFT_TIME]");
  lVar5 = *(long *)(this + 0x120);
  auVar6 = LawnApp::GetRealServerTime(gLawnApp);
  StringHelper::ToTimeString
            ((StringHelper *)&DAT_00000004,(float)(lVar5 - auVar6._0_8_),auVar6._8_4_);
  TodReplaceString(awStack_20,L"{TIME}",(wstring *)aIStack_18);
  FUN_05476c50(aIStack_18);
  FUN_05476c50(awStack_20);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_28,this + 0x108,uVar4,aIStack_18,5,1);
  uVar4 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x238,this + 0x240,uVar4,aIStack_18,3,1);
  lVar5 = LawnApp::GetPVZ2Dialog(gLawnApp);
  if (lVar5 == 0) {
    Sexy::Widget::DeferOverlay((Widget *)this,3);
  }
  FUN_05476c50(auStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomSpecialOfferUI::DrawAll(Sexy::ModalFlags*, Sexy::Graphics*) */

void __thiscall
DangerRoomSpecialOfferUI::DrawAll
          (DangerRoomSpecialOfferUI *this,ModalFlags *param_1,Graphics *param_2)

{
  undefined8 uVar1;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LawnApp::DrawDarkeningLayer(gLawnApp,param_2,0.5);
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0xe0));
  uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b8ff60);
  Draw9SliceImage(param_2,aIStack_18,uVar1);
  Sexy::WidgetContainer::DrawAll((WidgetContainer *)this,param_1,param_2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

