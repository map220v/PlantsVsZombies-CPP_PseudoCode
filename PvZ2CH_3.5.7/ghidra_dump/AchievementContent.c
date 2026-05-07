// Class: AchievementContent


/* AchievementContent::~AchievementContent() */

void __thiscall AchievementContent::~AchievementContent(AchievementContent *this)

{
  *(undefined ***)this = &PTR_GetClass_06802940;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06802c68;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x128));
  std::string::~string((string *)(this + 0x120));
  std::string::~string((string *)(this + 0x118));
  std::string::~string((string *)(this + 0x110));
  FUN_05476c50(this + 0x108);
  FUN_05476c50(this + 0x100);
  FUN_05476c50(this + 0xf8);
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* AchievementContent::~AchievementContent() */

void __thiscall AchievementContent::~AchievementContent(AchievementContent *this)

{
  ~AchievementContent(this);
  AK::FreeHook(this);
  return;
}


/* AchievementContent::Resize(int, int, int, int) */

void __thiscall
AchievementContent::Resize(AchievementContent *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  uVar1 = FUN_041d3f08(0xfa);
  plVar4 = *(long **)(this + 0x130);
  iVar2 = FUN_041d3f08(0x23);
  uVar3 = FUN_041d3f08(0x50);
  (**(code **)(*plVar4 + 0x198))(plVar4,uVar1,(*(int *)(this + 0x54) - iVar2) / 2,uVar3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AchievementContent::onNotifyAchievementReward(int, int) */

void __thiscall
AchievementContent::onNotifyAchievementReward(AchievementContent *this,int param_1,int param_2)

{
  DailyAchievementInfo *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0xf0) == param_1) && (*(int *)(this + 0xe4) == param_2)) {
    std::string::string(asStack_10,"dropCountChanged");
    Cpp2Lua<int>(asStack_10,*(int *)(this + 0xe8));
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"dropCountChanged4Log");
    Cpp2Lua<int>(asStack_10,*(int *)(this + 0xf0));
    std::string::~string(asStack_10);
    nop();
    this_00 = (DailyAchievementInfo *)LawnApp::GetDailyAchievementInfo(gLawnApp);
    DailyAchievementInfo::getRewardByConfig
              (this_00,*(int *)(this + 0xf0),*(int *)(this + 0xe4),(string *)(this + 0x110),
               (int *)(this + 0xe8),(string *)(this + 0x128));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AchievementContent::onDailyAchievementReceived(int, int) */

void __thiscall
AchievementContent::onDailyAchievementReceived(AchievementContent *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UIWidgetImage *this_00;
  long lVar6;
  code *pcVar7;
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0xf0) == param_1) && (*(int *)(this + 0xe4) == param_2)) {
    (**(code **)(**(long **)(this + 0x130) + 0x188))(*(long **)(this + 0x130),1);
    PVZ2UIButton::ClearButton(*(PVZ2UIButton **)(this + 0x130));
    (**(code **)(**(long **)(this + 0x130) + 0x158))(*(long **)(this + 0x130),0);
    this_00 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_00);
    pcVar7 = *(code **)(*(long *)this_00 + 0x198);
    uVar2 = FUN_041d3f08(0xf5);
    iVar1 = *(int *)(this + 0x54);
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af2110);
    iVar3 = FUN_041d3f08(*(undefined4 *)(lVar6 + 0x3c));
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af2110);
    uVar4 = FUN_041d3f08(*(undefined4 *)(lVar6 + 0x38));
    lVar6 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af2110);
    uVar5 = FUN_041d3f08(*(undefined4 *)(lVar6 + 0x3c));
    (*pcVar7)(this_00,uVar2,(iVar1 - iVar3) / 2,uVar4,uVar5);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,&DAT_06af2110,1);
    UIWidgetImage::SetImage(this_00,aPStack_40);
    (**(code **)(*(long *)this + 0x60))(this,this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AchievementContent::getPieceImage(std::string const&, std::string const&) */

void __thiscall
AchievementContent::getPieceImage(AchievementContent *this,string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  string *psVar3;
  long extraout_x0;
  long extraout_x0_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(this + 0xec);
  bVar1 = std::operator==(param_1,"plant_piece");
  if (bVar1) {
    FUN_031f5e7c(asStack_10,"plant_piece_",param_2);
    FUN_05474278(this + 0x110,asStack_10);
    std::string::~string(asStack_10);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_10);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      nop();
      thunk_FUN_05475e00(this + 0x118,extraout_x0_00 + 0x60);
    }
  }
  else {
    bVar1 = std::operator==(param_1,"avatar_piece");
    if (!bVar1) goto LAB_041d5a20;
    FUN_031f5e7c(asStack_10,"avatar_piece_",param_2);
    FUN_05474278(this + 0x110,asStack_10);
    std::string::~string(asStack_10);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar3);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)asStack_10);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      nop();
      thunk_FUN_05475e00(this + 0x118,extraout_x0 + 0x60);
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
LAB_041d5a20:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AchievementContent::getSpecifiedImage(std::string const&) */

void AchievementContent::getSpecifiedImage(string *param_1)

{
  bool bVar1;
  char cVar2;
  ProfileMgr *this;
  PlayerInfo *this_00;
  NetworkCacheQueue *this_01;
  FinalPool *pFVar3;
  long lVar4;
  DailyAchievementInfo *pDVar5;
  string *psVar6;
  long extraout_x0;
  long extraout_x0_00;
  string *in_x1;
  size_t in_x2;
  string *in_x8;
  string asStack_48 [8];
  pair<std::string_const,Sexy::PILifeValueTable> apStack_40 [24];
  FinalPool aFStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  bVar1 = std::operator==(in_x1,"avatar_box");
  if (bVar1) {
    this_01 = (NetworkCacheQueue *)LawnApp::GetDailyAchievementInfo(gLawnApp);
    pFVar3 = (FinalPool *)NetworkCacheQueue::getItemFragmentCache(this_01);
    FinalPool::FinalPool(aFStack_28,pFVar3);
    cVar2 = std::vector<PoolResult,std::allocator<PoolResult>>::empty
                      ((vector<PoolResult,std::allocator<PoolResult>> *)aFStack_28);
    if (cVar2 == '\0') {
      lVar4 = PlayerInfo::GetDailyAchievementRecord(this_00,*(int *)(param_1 + 0xf0));
      if (lVar4 == 0) {
LAB_041d5c28:
        pDVar5 = (DailyAchievementInfo *)LawnApp::GetDailyAchievementInfo(gLawnApp);
        std::string::string(asStack_48,"");
        DailyAchievementInfo::getRewardSkuByCertainPool(pDVar5,aFStack_28,asStack_48);
        std::string::~string(asStack_48);
        nop();
        thunk_FUN_05475e00(param_1 + 0x110,apStack_40);
        *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xec);
        PlayerInfo::AddSpecificDailyAchiReward
                  (this_00,*(int *)(param_1 + 0xf0),*(int *)(param_1 + 0xe4),param_1 + 0x110);
        std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_40);
      }
      else {
        cVar2 = FUN_0547419c(lVar4 + 0x18);
        if (cVar2 != '\0') goto LAB_041d5c28;
        thunk_FUN_05475e00(param_1 + 0x110,lVar4 + 0x18);
        *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xec);
      }
      psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr()
      ;
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar6);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)apStack_40);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)apStack_40);
        nop();
        thunk_FUN_05475e00(param_1 + 0x118,extraout_x0_00 + 0x60);
      }
      goto LAB_041d5cd4;
    }
LAB_041d5b7c:
    std::string::append(param_1 + 0x110,"",in_x2);
  }
  else {
    bVar1 = std::operator==(in_x1,"plant_box");
    if (!bVar1) goto LAB_041d5bb8;
    pDVar5 = (DailyAchievementInfo *)LawnApp::GetDailyAchievementInfo(gLawnApp);
    pFVar3 = (FinalPool *)DailyAchievementInfo::getSpecificPlantPool(pDVar5);
    FinalPool::FinalPool(aFStack_28,pFVar3);
    cVar2 = std::vector<PoolResult,std::allocator<PoolResult>>::empty
                      ((vector<PoolResult,std::allocator<PoolResult>> *)aFStack_28);
    if (cVar2 != '\0') goto LAB_041d5b7c;
    lVar4 = PlayerInfo::GetDailyAchievementRecord(this_00,*(int *)(param_1 + 0xf0));
    if (lVar4 == 0) {
LAB_041d5d38:
      pDVar5 = (DailyAchievementInfo *)LawnApp::GetDailyAchievementInfo(gLawnApp);
      std::string::string(asStack_48,"");
      DailyAchievementInfo::getRewardSkuByCertainPool(pDVar5,aFStack_28,asStack_48);
      std::string::~string(asStack_48);
      nop();
      thunk_FUN_05475e00(param_1 + 0x110,apStack_40);
      *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xec);
      PlayerInfo::AddSpecificDailyAchiReward
                (this_00,*(int *)(param_1 + 0xf0),*(int *)(param_1 + 0xe4),param_1 + 0x110);
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_40);
    }
    else {
      cVar2 = FUN_0547419c(lVar4 + 0x18);
      if (cVar2 != '\0') goto LAB_041d5d38;
      thunk_FUN_05475e00(param_1 + 0x110,lVar4 + 0x18);
      *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xec);
    }
    psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar6);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)apStack_40);
    if (cVar2 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)apStack_40);
      nop();
      thunk_FUN_05475e00(param_1 + 0x118,extraout_x0 + 0x60);
    }
LAB_041d5cd4:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)apStack_40);
  }
  FinalPool::~FinalPool(aFStack_28);
LAB_041d5bb8:
  std::string::string(in_x8,"");
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AchievementContent::AchievementContent(AchievementContentInfo const&, int) */

void __thiscall
AchievementContent::AchievementContent
          (AchievementContent *this,AchievementContentInfo *param_1,int param_2)

{
  string *psVar1;
  undefined4 uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar11;
  long lVar12;
  uint *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  PVZ2UIButton *pPVar16;
  UIWidgetImage *this_02;
  NameMapperBase *this_03;
  Widget *pWVar17;
  code *pcVar18;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  psVar1 = (string *)(param_1 + 0x48);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06802940;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06802c68;
  FUN_05476574(this + 0xf8);
  FUN_05476574(this + 0x100);
  FUN_05476574(this + 0x108);
  std::string::string((string *)(this + 0x110),"");
  nop();
  Set8BytesTo0(this + 0x118);
  Set8BytesTo0(this + 0x120);
  Set8BytesTo0(this + 0x128);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar5 = *(undefined4 *)(param_1 + 0x50);
  uVar8 = *(undefined4 *)(param_1 + 0x38);
  uVar9 = *(undefined4 *)(param_1 + 0x54);
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  *(int *)(this + 0x138) = param_2;
  *(undefined4 *)(this + 0xe4) = uVar5;
  *(undefined4 *)(this + 0xf0) = uVar8;
  *(undefined4 *)(this + 0xe8) = uVar9;
  *(undefined4 *)(this + 0xec) = uVar2;
  *(undefined4 *)(this + 0xe0) = 0;
  thunk_FUN_05475e00(this + 0x118,param_1 + 0x40);
  thunk_FUN_05475e00(this + 0x120,psVar1);
  thunk_FUN_05475e00(this + 0x128,(string *)(param_1 + 0x60));
  Sexy::ToWString((string *)(param_1 + 0x30));
  FUN_054766c8(this + 0xf8,(string *)&local_40);
  FUN_05476c50((string *)&local_40);
  pvVar11 = (vector *)PlayerInfo::GetDailyAchievementRecord(this_01,*(int *)(this + 0xf0));
  if (*(int *)(this + 0xf0) == 0x27e0) {
    uVar5 = PlayerInfo::GetNumStars((int)this_01);
    *(undefined4 *)(this + 0xe0) = uVar5;
  }
  else if (pvVar11 != (vector *)0x0) {
    *(undefined4 *)(this + 0xe0) = *(undefined4 *)(pvVar11 + 0x24);
  }
  lVar12 = FUN_05474374(psVar1,&DAT_055b41f0,0);
  if (lVar12 == -1) {
    lVar12 = FUN_05474374(psVar1,"piece",0);
    if (lVar12 != -1) {
      bVar4 = std::operator==(psVar1,"plant_piece");
      if (bVar4) {
        this_03 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
      }
      else {
        bVar4 = std::operator==(psVar1,"avatar_piece");
        if (!bVar4) goto LAB_041d6024;
        this_03 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
      }
      iVar6 = NameMapperBase::GetIdForName(this_03,(string *)(param_1 + 0x60));
      pWVar17 = (Widget *)
                UIRewardFrameSelect::CreateUIRewardFrame(iVar6,*(int *)(param_1 + 0x58),true);
      pcVar18 = *(code **)(*(long *)pWVar17 + 0x1a0);
      iVar6 = FUN_041d3f08(0xbe);
      iVar7 = FUN_041d3f08(10);
      iVar10 = FUN_041d3f08(0x32);
      Sexy::Insets::Insets((Insets *)&local_40,iVar6,iVar7,iVar10,iVar10);
      (*pcVar18)(pWVar17,(string *)&local_40);
      Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,pWVar17);
    }
  }
  else {
    getSpecifiedImage((string *)this);
    std::string::~string((string *)&local_40);
  }
LAB_041d6024:
  puVar13 = (uint *)eastl::min_alt<int>((int *)(this + 0xe0),(int *)(this + 0xe4));
  Sexy::StrFormat(L"%d/%d",(string *)&local_40,(ulong)*puVar13,(ulong)*(uint *)(this + 0xe4));
  FUN_054766c8(this + 0x100,(string *)&local_40);
  FUN_05476c50((string *)&local_40);
  iVar6 = *(int *)(this + 0xe0);
  iVar7 = *(int *)(this + 0xe4);
  if (pvVar11 == (vector *)0x0) {
    bVar4 = true;
  }
  else {
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)&local_40,pvVar11);
    uVar14 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_40);
    uVar15 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_40);
    local_80 = std::
               find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                         (uVar14,uVar15,this + 0xe4);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_40);
    bVar4 = __gnu_cxx::operator==((__normal_iterator *)&local_80,(__normal_iterator *)&local_78);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_40);
  }
  FUN_05478178((wstring *)&local_78,&DAT_056f11a8,&local_80);
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar16 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar16,0,(ButtonListener *)(this + 0xd8),(wstring *)&local_78,(Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x130) = pPVar16;
  FUN_05476c50((wstring *)&local_78);
  nop();
  pPVar16 = *(PVZ2UIButton **)(this + 0x130);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06af20c0,3);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06af2210,3);
  PVZ2UIButton::SetDialogStates(pPVar16,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
  pPVar16 = *(PVZ2UIButton **)(this + 0x130);
  if (bVar4 == false) {
    FUN_05478178((string *)&local_40,L"[RECALL_OFFER_CLAIM]",(wstring *)&local_78);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
    PVZ2UIButton::AddText(pPVar16,(string *)&local_40,uVar14,0);
    FUN_05476c50((string *)&local_40);
    nop();
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x130));
    (**(code **)(**(long **)(this + 0x130) + 0x158))(*(long **)(this + 0x130),0);
    this_02 = ::operator_new(0x118);
    UIWidgetImage::UIWidgetImage(this_02);
    pcVar18 = *(code **)(*(long *)this_02 + 0x198);
    uVar5 = FUN_041d3f08(0xf5);
    iVar6 = FUN_041d3f08(0x46);
    lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af2110);
    iVar7 = FUN_041d3f08(*(undefined4 *)(lVar12 + 0x3c));
    lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af2110);
    uVar8 = FUN_041d3f08(*(undefined4 *)(lVar12 + 0x38));
    lVar12 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af2110);
    uVar9 = FUN_041d3f08(*(undefined4 *)(lVar12 + 0x3c));
    (*pcVar18)(this_02,uVar5,(iVar6 - iVar7) / 2,uVar8,uVar9);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06af2110,1);
    UIWidgetImage::SetImage(this_02,(PVZ2UIImage *)&local_40);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,(Widget *)this_02);
  }
  else {
    FUN_05478178((string *)&local_40,L"[RECALL_OFFER_CLAIM]",(wstring *)&local_78);
    uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_22);
    PVZ2UIButton::AddText(pPVar16,(string *)&local_40,uVar14,0);
    FUN_05476c50((string *)&local_40);
    nop();
    (**(code **)(**(long **)(this + 0x130) + 0x188))(*(long **)(this + 0x130),iVar6 < iVar7);
    Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x130));
  }
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyAchievementReward);
  local_90 = local_68;
  local_a0 = local_78;
  uStack_98 = uStack_70;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<AchievementContent,void(AchievementContent::*)(int,int)>>
            ((MessageRouter *)puVar3,Message::NotifyAchievementReward,&local_a0);
  puVar3 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onDailyAchievementReceived);
  local_a0 = local_40;
  uStack_98 = uStack_38;
  local_90 = local_30;
  MessageRouter::
  Subscribe<int,int,Sexy::CBMemberTranslatorX<AchievementContent,void(AchievementContent::*)(int,int)>>
            ((MessageRouter *)puVar3,Message::DailyAchievementReceived,&local_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AchievementContent::Draw(Sexy::Graphics*) */

void __thiscall AchievementContent::Draw(AchievementContent *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  SalesProgressBar *pSVar10;
  Image *pIVar11;
  PrimeTypeface *pPVar12;
  undefined8 uVar13;
  int *piVar14;
  char *pcVar15;
  LotteryResultProgressBar *this_00;
  string *psVar16;
  SeedPacketUtils *this_01;
  long lVar17;
  RtWeakPtr *this_02;
  ResourceInfo *pRVar18;
  float fVar19;
  undefined1 auStack_98 [8];
  string asStack_90 [8];
  RtMixedPtrBase aRStack_88 [8];
  Insets aIStack_80 [16];
  Insets aIStack_70 [4];
  int local_6c;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  Insets aIStack_50 [16];
  Color aCStack_40 [16];
  int local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TodReplaceNumberString((wstring *)(this + 0xf8),L"{NUMBER}",*(int *)(this + 0xe4));
  iVar3 = FUN_041d3f08(10);
  iVar4 = FUN_041d3f08(8);
  iVar5 = FUN_041d3f08(5);
  iVar6 = FUN_041d3f08(0xb4);
  Sexy::Insets::Insets(aIStack_80,iVar3,iVar4 + iVar5,iVar6,iVar5 + *(int *)(this + 0x54) / 3);
  iVar3 = FUN_041d3f08(10);
  iVar4 = FUN_041d3f08(0x28);
  iVar5 = FUN_041d3f08(100);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af2310);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Insets::Insets(aIStack_70,iVar3,iVar4,iVar5,iVar6);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af20e8);
  iVar3 = FUN_041d3f08(5);
  iVar4 = FUN_041d3f08(0x28);
  iVar5 = FUN_041d3f08(0x159);
  iVar6 = FUN_041d3f08(0x46);
  Sexy::Graphics::DrawImage(param_1,pIVar11,iVar3,local_6c - iVar4,iVar5,iVar6);
  pPVar12 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Insets::Insets((Insets *)local_30,aIStack_80);
  FUN_05477b24(aIStack_50,auStack_98);
  Sexy::Color::Color(aCStack_40,-0x99c900);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar12,param_1,(Insets *)local_30,aIStack_50,0,1,aCStack_40,0);
  FUN_05476c50(aIStack_50);
  Sexy::Insets::Insets((Insets *)local_30,aIStack_70);
  uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af2310);
  Draw3SliceImage(param_1,(Insets *)local_30,uVar13);
  Sexy::Insets::Insets((Insets *)&local_60,aIStack_70);
  local_30[0] = 0;
  if (*(int *)(this + 0xe4) != 0) {
    local_30[0] = (local_58 * *(int *)(this + 0xe0)) / *(int *)(this + 0xe4);
  }
  piVar14 = eastl::min_alt<int>(&local_58,local_30);
  iVar3 = *piVar14;
  local_58 = iVar3;
  if (iVar3 != 0) {
    lVar17 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af2568);
    if (*(int *)(lVar17 + 0x38) < iVar3) {
      Sexy::Insets::Insets((Insets *)local_30,(Insets *)&local_60);
      uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af2568);
      Draw3SliceImage(param_1,(Insets *)local_30,uVar13);
    }
    else {
      pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af2568);
      Sexy::Graphics::DrawImage(param_1,pIVar11,local_60,local_5c,local_58,local_54);
    }
  }
  Sexy::Insets::Insets(aIStack_50,aIStack_70);
  pPVar12 = (PrimeTypeface *)
            PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_24_Shaded)
  ;
  Sexy::Insets::Insets((Insets *)aCStack_40,aIStack_50);
  FUN_05477b24(aRStack_88,this + 0x100);
  Sexy::Color::Color((Color *)local_30,4);
  Sexy::PrimeTypeface::DrawString_Paragraph
            (pPVar12,param_1,aCStack_40,aRStack_88,1,1,(Insets *)local_30,0);
  FUN_05476c50(aRStack_88);
  bVar1 = std::operator!=((string *)(this + 0x120),"plant_piece");
  if (bVar1) {
    fVar19 = 1.0;
    pcVar15 = (char *)FUN_0547429c(this + 0x118);
    CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr
              ((CachedUIResourcePtr<Sexy::Image> *)local_30,pcVar15);
    cVar2 = FUN_0547419c(this + 0x110);
    if (cVar2 == '\0') {
      fVar19 = 0.6;
    }
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)local_30);
    iVar4 = FUN_041d3f08(0x118);
    iVar3 = *(int *)(this + 0x54);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)local_30);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar10);
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)local_30);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)local_30);
    iVar7 = SalesProgressBar::GetCurrentLevel(pSVar10);
    Sexy::Graphics::DrawImage
              (param_1,pIVar11,iVar4,(int)(((float)iVar3 - fVar19 * (float)iVar5) * 0.5),
               (int)((float)iVar6 * fVar19),(int)((float)iVar7 * fVar19));
    CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr
              ((CachedUIResourcePtr<Sexy::Image> *)local_30);
  }
  else {
    bVar1 = std::operator!=((string *)(this + 0x110),"");
    if (bVar1) {
      FUN_05475d88(asStack_90,(string *)(this + 0x110));
      psVar16 = (string *)
                Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
      ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar16);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_88);
      if (cVar2 != '\0') {
        psVar16 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar16);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aCStack_40);
        if (cVar2 != '\0') {
          this_01 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
          lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aCStack_40);
          this_02 = (RtWeakPtr *)
                    SeedPacketUtils::GetPlantPiecePacketRenderData(this_01,(string *)(lVar17 + 8));
          iVar8 = FUN_041d3f08(0x118);
          iVar3 = *(int *)(this + 0x54);
          pSVar10 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af2540);
          iVar9 = SalesProgressBar::GetCurrentLevel(pSVar10);
          iVar4 = *(int *)(this_02 + 0x28);
          iVar5 = *(int *)(this_02 + 0x2c);
          iVar6 = *(int *)(this_02 + 0x10);
          iVar7 = *(int *)(this_02 + 0x14);
          pRVar18 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_02 + 0x170);
          fVar19 = (float)(int)(((float)iVar3 - (float)iVar9 * 0.6) * 0.5);
          Sexy::Insets::Insets
                    ((Insets *)local_30,(int)((float)iVar8 + (float)*(int *)(this_02 + 0x30) * 0.6),
                     (int)(fVar19 + (float)*(int *)(this_02 + 0x34) * 0.6),(int)((float)iVar4 * 0.6)
                     ,(int)((float)iVar5 * 0.6));
          Sexy::Graphics::DrawImage
                    (param_1,(Image *)pRVar18,(TRect *)local_30,(TRect *)(this_02 + 0x20));
          bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
          if (bVar1) {
            lVar17 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
            pRVar18 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar17 + 0x48));
            Sexy::Insets::Insets
                      ((Insets *)local_30,
                       (int)((float)iVar8 + (float)*(int *)(this_02 + 0x18) * 0.6),
                       (int)(fVar19 + (float)*(int *)(this_02 + 0x1c) * 0.6),
                       (int)((float)iVar6 * 0.6),(int)((float)iVar7 * 0.6));
            Sexy::Graphics::DrawImage
                      (param_1,(Image *)pRVar18,(TRect *)local_30,(TRect *)(this_02 + 8));
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aCStack_40)
        ;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
      std::string::~string(asStack_90);
    }
  }
  nop();
  FUN_05476c50(auStack_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AchievementContent::GetReward() */

void __thiscall AchievementContent::GetReward(AchievementContent *this)

{
  string *psVar1;
  char *pcVar2;
  DNetwork *this_00;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1480];
  string asStack_720 [1816];
  long local_8;
  
  __n_00 = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n = __n_00;
  std::string::string(asStack_d40,"ai");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,0x2a8f);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"i");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,*(int *)(this + 0x138));
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n_00);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_041d3eac(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_720,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AchievementContent::ButtonDepress(int) */

void AchievementContent::ButtonDepress(int param_1)

{
  string *psVar1;
  char *pcVar2;
  DNetwork *this;
  undefined1 *__n;
  undefined1 *__n_00;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1480];
  string asStack_720 [1816];
  long lStack_8;
  
  __n_00 = auStack_d48;
  lStack_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  __n = __n_00;
  std::string::string(asStack_d40,"ai");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,0x2a8f);
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_d40,"i");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,*(int *)((ulong)(uint)param_1 + 0x138));
  pcVar2 = (char *)DString::c_str(aDStack_ce8);
  std::string::append(psVar1,pcVar2,(size_t)__n_00);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_041d3eac(afStack_d38,(ulong)(uint)param_1);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this,asStack_720,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,asStack_d40,
             0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AchievementContent::ButtonDepress(int) */

void __thiscall AchievementContent::ButtonDepress(AchievementContent *this,int param_1)

{
  ButtonDepress((int)this + -0xd8);
  return;
}

