// Class: NewerPresentMgr


/* NewerPresentMgr::Close() */

void NewerPresentMgr::Close(void)

{
  if (UISingletonDialog<UINewerPresent>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<UINewerPresent>::m_pInstance + 0x318))();
    UISingletonDialog<UINewerPresent>::m_pInstance = (long *)0x0;
  }
  return;
}


/* NewerPresentMgr::IsActive() */

bool NewerPresentMgr::IsActive(void)

{
  long lVar1;
  
  lVar1 = UISingletonDialog<UINewerPresent>::GetSingletonPtr();
  return lVar1 != 0;
}


/* NewerPresentMgr::RequestNetwork() */

void __thiscall NewerPresentMgr::RequestNetwork(NewerPresentMgr *this)

{
  ActivityManager *this_00;
  
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x29f3,true,0);
  this[0x3c] = (NewerPresentMgr)0x1;
  return;
}


/* NewerPresentMgr::GetNumPresents() */

void __thiscall NewerPresentMgr::GetNumPresents(NewerPresentMgr *this)

{
  std::map<int,PresentDetail,std::less<int>,std::allocator<std::pair<int_const,PresentDetail>>>::
  size((map<int,PresentDetail,std::less<int>,std::allocator<std::pair<int_const,PresentDetail>>> *)
       (this + 8));
  return;
}


/* NewerPresentMgr::NewerPresentMgr() */

void __thiscall NewerPresentMgr::NewerPresentMgr(NewerPresentMgr *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<NewerPresentMgr>::LazySingleton((LazySingleton<NewerPresentMgr> *)this);
  *(undefined ***)this = &PTR__NewerPresentMgr_06779b20;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::map<int,PresentDetail,std::less<int>,std::allocator<std::pair<int_const,PresentDetail>>>::
  clear((map<int,PresentDetail,std::less<int>,std::allocator<std::pair<int_const,PresentDetail>>> *)
        (this + 8));
  *(undefined4 *)(this + 0x38) = 0;
  this[0x3c] = (NewerPresentMgr)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<NewerPresentMgr,void(NewerPresentMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* NewerPresentMgr::~NewerPresentMgr() */

void __thiscall NewerPresentMgr::~NewerPresentMgr(NewerPresentMgr *this)

{
  *(undefined ***)this = &PTR__NewerPresentMgr_06779b20;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::map<int,PresentDetail,std::less<int>,std::allocator<std::pair<int_const,PresentDetail>>>::
  ~map((map<int,PresentDetail,std::less<int>,std::allocator<std::pair<int_const,PresentDetail>>> *)
       (this + 8));
  Sexy::LazySingleton<NewerPresentMgr>::~LazySingleton((LazySingleton<NewerPresentMgr> *)this);
  return;
}


/* NewerPresentMgr::~NewerPresentMgr() */

void __thiscall NewerPresentMgr::~NewerPresentMgr(NewerPresentMgr *this)

{
  ~NewerPresentMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentMgr::FindTargetPresent(int) */

void NewerPresentMgr::FindTargetPresent(int param_1)

{
  bool bVar1;
  long lVar2;
  PresentDetail *in_x8;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PresentDetail::PresentDetail(in_x8);
  local_18 = std::
             map<int,PresentDetail,std::less<int>,std::allocator<std::pair<int_const,PresentDetail>>>
             ::find((map<int,PresentDetail,std::less<int>,std::allocator<std::pair<int_const,PresentDetail>>>
                     *)((ulong)(uint)param_1 + 8),local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)((ulong)(uint)param_1 + 8));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    PresentDetail::operator=(in_x8,(PresentDetail *)(lVar2 + 8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentMgr::CheckTargetUnlocked(int) */

void __thiscall NewerPresentMgr::CheckTargetUnlocked(NewerPresentMgr *this,int param_1)

{
  undefined1 uVar1;
  PresentDetail aPStack_38 [32];
  undefined1 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = 1;
  if (param_1 != 0) {
    FindTargetPresent((int)this);
    PresentDetail::~PresentDetail(aPStack_38);
    uVar1 = local_18;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentMgr::GetTargetOrgPrice(int) */

void NewerPresentMgr::GetTargetOrgPrice(int param_1)

{
  PresentDetail aPStack_38 [36];
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindTargetPresent(param_1);
  PresentDetail::~PresentDetail(aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_14);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentMgr::GetTargetPlantLevel(int) */

void NewerPresentMgr::GetTargetPlantLevel(int param_1)

{
  PresentDetail aPStack_38 [40];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindTargetPresent(param_1);
  PresentDetail::~PresentDetail(aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentMgr::SyncActivityData(NetworkNewerPresent const&) */

void __thiscall
NewerPresentMgr::SyncActivityData(NewerPresentMgr *this,NetworkNewerPresent *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  NameMapperBase *this_00;
  undefined8 *puVar4;
  ulong uVar5;
  vector *pvVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  int local_84;
  string asStack_80 [8];
  undefined8 local_78;
  PresentDetail aPStack_70 [8];
  vector<NetworkPresentContent,std::allocator<NetworkPresentContent>> avStack_68 [24];
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_40 [7];
  long local_8;
  
  local_84 = 0;
  uVar10 = *(undefined8 *)(param_1 + 8);
  iVar2 = 0;
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_03dbe724(uVar10,*(undefined8 *)(param_1 + 0x10));
  uVar9 = 0;
  if (lVar3 != 0) {
    do {
      uVar5 = 0;
      while( true ) {
        puVar4 = (undefined8 *)FUN_03dbe754(uVar10,uVar9);
        uVar9 = FUN_03dbe760(*puVar4,puVar4[1]);
        if (uVar9 <= uVar5) break;
        this_00 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
        puVar4 = (undefined8 *)FUN_03dbe754(*(undefined8 *)(param_1 + 8),(long)local_84);
        lVar3 = FUN_03dbe788(*puVar4,uVar5);
        cVar1 = NameMapperBase::ContainsId(this_00,*(int *)(lVar3 + 4));
        if (cVar1 != '\0') {
          iVar2 = PlantNameMapperServerID::GetInstance();
          puVar4 = (undefined8 *)FUN_03dbe754(*(undefined8 *)(param_1 + 8),(long)local_84);
          FUN_03dbe788(*puVar4,uVar5);
          NameMapperBase::GetNameForId(iVar2);
          PresentDetail::PresentDetail(aPStack_70);
          thunk_FUN_05475e00(aPStack_70,asStack_80);
          pvVar6 = (vector *)FUN_03dbe754(*(undefined8 *)(param_1 + 8),(long)local_84);
          std::vector<NetworkPresentContent,std::allocator<NetworkPresentContent>>::operator=
                    (avStack_68,pvVar6);
          uVar10 = FUN_03dbffa0(*(undefined8 *)(param_1 + 0x20));
          uVar7 = FUN_03dbfff0(*(undefined8 *)(param_1 + 0x28));
          local_78 = FUN_03dc0d34(uVar10,uVar7,&local_84);
          local_40[0] = FUN_03dbfff0(*(undefined8 *)(param_1 + 0x28));
          local_50 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_78,(__normal_iterator *)local_40);
          lVar3 = (long)local_84;
          puVar8 = (undefined4 *)FUN_03dbe5c4(*(undefined8 *)(param_1 + 0x38),lVar3);
          local_4c = *puVar8;
          puVar4 = (undefined8 *)FUN_03dbe754(*(undefined8 *)(param_1 + 8),lVar3);
          puVar8 = (undefined4 *)FUN_03dbe788(*puVar4,uVar5);
          local_48 = *puVar8;
          std::make_pair<int&,PresentDetail&>(&local_84,aPStack_70);
          std::
          map<int,PresentDetail,std::less<int>,std::allocator<std::pair<int_const,PresentDetail>>>::
          insert<std::pair<int,PresentDetail>,void>
                    ((map<int,PresentDetail,std::less<int>,std::allocator<std::pair<int_const,PresentDetail>>>
                      *)(this + 8),(pair *)local_40);
          std::pair<int_const,PresentDetail>::~pair((pair<int_const,PresentDetail> *)local_40);
          PresentDetail::~PresentDetail(aPStack_70);
          std::string::~string(asStack_80);
          uVar10 = *(undefined8 *)(param_1 + 8);
          iVar2 = local_84;
          break;
        }
        uVar10 = *(undefined8 *)(param_1 + 8);
        uVar9 = (ulong)local_84;
        uVar5 = uVar5 + 1;
        iVar2 = local_84;
      }
      iVar2 = iVar2 + 1;
      local_84 = iVar2;
      uVar5 = FUN_03dbe724(uVar10,*(undefined8 *)(param_1 + 0x10));
      uVar9 = (ulong)iVar2;
    } while (uVar9 < uVar5);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentMgr::Load() */

void __thiscall NewerPresentMgr::Load(NewerPresentMgr *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  NetworkNewerPresent aNStack_d8 [80];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::map<int,PresentDetail,std::less<int>,std::allocator<std::pair<int_const,PresentDetail>>>::
  clear((map<int,PresentDetail,std::less<int>,std::allocator<std::pair<int_const,PresentDetail>>> *)
        (this + 8));
  *(undefined4 *)(this + 0x38) = 0;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03dbe5b8(local_80);
  cVar2 = '\0';
  if ((cVar1 != '\0') && (cVar2 = '\0', local_70 != '\0')) {
    NetworkNewerPresent::NetworkNewerPresent(aNStack_d8);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aNStack_d8);
    if (cVar2 != '\0') {
      SyncActivityData(this,aNStack_d8);
    }
    NetworkNewerPresent::~NetworkNewerPresent(aNStack_d8);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* NewerPresentMgr::Init() */

void __thiscall NewerPresentMgr::Init(NewerPresentMgr *this)

{
  char cVar1;
  
  cVar1 = Load(this);
  if (cVar1 == '\0') {
    return;
  }
  UISingletonDialog<UINewerPresent>::ShowDialog();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentMgr::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
NewerPresentMgr::onNotifyRefreshActivityList(NewerPresentMgr *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x3c] != (NewerPresentMgr)0x0)) {
    local_1c = 0x29f3;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      Init(this);
      this[0x3c] = (NewerPresentMgr)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentMgr::GetTargetSku(int) */

void NewerPresentMgr::GetTargetSku(int param_1)

{
  char *pcVar1;
  int in_w1;
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::operator+((string *)&DAT_06ada450,"0");
  DString::DString(aDStack_18,in_w1 + 1);
  pcVar1 = (char *)DString::c_str(aDStack_18);
  std::operator+(asStack_20,pcVar1);
  DString::~DString(aDStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentMgr::GetTargetPrice(int) */

void NewerPresentMgr::GetTargetPrice(int param_1)

{
  char cVar1;
  MagentoProductProps *this;
  string *extraout_x1;
  int iVar2;
  float fVar3;
  Magento aMStack_18 [8];
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  iVar2 = 0;
  local_8 = ___stack_chk_guard;
  GetTargetSku(param_1);
  Magento::GetProduct(aMStack_18,extraout_x1);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 != '\0') {
    this = (MagentoProductProps *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    fVar3 = (float)MagentoProductProps::GetPriceInUSD(this,false);
    iVar2 = (int)fVar3;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  std::string::~string((string *)aMStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentMgr::GetTargetShortDes(int) */

void __thiscall NewerPresentMgr::GetTargetShortDes(NewerPresentMgr *this,int param_1)

{
  char cVar1;
  string *extraout_x1;
  string *extraout_x1_00;
  Magento aMStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  Sexy aSStack_20 [8];
  wstring awStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574();
  GetTargetSku((int)this);
  Magento::GetProduct(aMStack_30,extraout_x1);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    MagentoProductProps::GetLocalizedShortDescription();
    Sexy::UTF8StringToWString(aSStack_20,extraout_x1_00);
    TodStringTranslate(awStack_18);
    FUN_054766c8();
    FUN_05476c50(auStack_10);
    FUN_05476c50(awStack_18);
    std::string::~string((string *)aSStack_20);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  std::string::~string((string *)aMStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentMgr::ShowNewerPresentDetail(int) */

void __thiscall NewerPresentMgr::ShowNewerPresentDetail(NewerPresentMgr *this,int param_1)

{
  int iVar1;
  UINewerPresentDetail *this_00;
  PresentDetail aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UINewerPresentDetail *)UISingletonDialog<UINewerPresentDetail>::ShowDialog();
  if (this_00 != (UINewerPresentDetail *)0x0) {
    FindTargetPresent((int)this);
    UINewerPresentDetail::InitView(this_00,(string *)aPStack_38,param_1);
    iVar1 = GetTargetPlantLevel((int)this);
    if (0 < iVar1) {
      MessageRouter::Post<int,int>
                ((MessageRouter *)gMessageRouter,Message::DisplayLevelSelect,iVar1);
    }
    PresentDetail::~PresentDetail(aPStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentMgr::BuyOffer(int) */

void __thiscall NewerPresentMgr::BuyOffer(NewerPresentMgr *this,int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  PurchaseBroker *this_01;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  MagentoProductProps *this_04;
  string *extraout_x1;
  string asStack_208 [8];
  undefined8 local_200;
  undefined8 local_1f8;
  DString aDStack_1f0 [16];
  int local_1e0;
  int local_1dc;
  PurchasedBundleInfo aPStack_1d0 [16];
  vector<bundleItemInfo,std::allocator<bundleItemInfo>> avStack_1c0 [24];
  string asStack_1a8 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_1a0 [40];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x38) = param_1;
  GetTargetSku((int)this);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PurchaseBroker *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_rightmost(this_00);
  PurchaseBroker::RequestPayment(this_01,asStack_208,0);
  uVar4 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar4);
  std::string::string(asStack_1a8,"");
  FUN_05462980(auStack_178,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  FindTargetPresent((int)this);
  PurchasedBundleInfo::PurchasedBundleInfo(aPStack_1d0);
  thunk_FUN_05475e00(aPStack_1d0,asStack_208);
  local_200 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(avStack_1a0);
  local_1f8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(avStack_1a0);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_200,(__normal_iterator *)&local_1f8), bVar3)
  {
    piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_200);
    iVar1 = piVar5[1];
    iVar2 = *piVar5;
    local_1e0 = iVar1;
    local_1dc = iVar2;
    std::vector<bundleItemInfo,std::allocator<bundleItemInfo>>::push_back
              (avStack_1c0,(bundleItemInfo *)&local_1e0);
    DString::DString(aDStack_1f0,iVar1);
    uVar6 = DString::c_str(aDStack_1f0);
    uVar6 = FUN_054603b8(auStack_168,uVar6);
    uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
    DString::DString((DString *)&local_1e0,iVar2);
    uVar7 = DString::c_str((DString *)&local_1e0);
    uVar6 = FUN_054603b8(uVar6,uVar7);
    FUN_054603b8(uVar6,&DAT_05594620);
    DString::~DString((DString *)&local_1e0);
    DString::~DString(aDStack_1f0);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_200);
  }
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  PlayerInfo::SetBundleInPurchase(this_03,aPStack_1d0);
  Magento::GetProductPtr((Magento *)asStack_208,extraout_x1);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_1e0);
  if (bVar3) {
    this_04 = (MagentoProductProps *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_1e0);
    MagentoProductProps::GetPriceInUSD(this_04,false);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_1e0);
  PurchasedBundleInfo::~PurchasedBundleInfo(aPStack_1d0);
  PresentDetail::~PresentDetail((PresentDetail *)asStack_1a8);
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_208);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentMgr::NotifyBundlePurchased(std::vector<PaymentBundleInfo,
   std::allocator<PaymentBundleInfo> > const&) */

void __thiscall NewerPresentMgr::NotifyBundlePurchased(NewerPresentMgr *this,vector *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  MagentoProductProps *this_00;
  TGALogMgr *pTVar8;
  string *extraout_x1;
  int iVar9;
  float fVar10;
  Magento aMStack_250 [8];
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238 [2];
  undefined8 local_228 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_218 [24];
  undefined8 local_200 [5];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_1d8 [48];
  GAME_ITEM_INFO aGStack_1a8 [8];
  int local_1a0 [10];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_1d8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_218);
  local_240 = FUN_03dc00d4(*(undefined8 *)param_1);
  local_238[0] = FUN_03dc0124(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_240,(__normal_iterator *)local_238), bVar1)
  {
    piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_240);
    ProfileChangeItemAmount(*piVar5,piVar5[1],false);
    local_228[0] = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                             ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                               *)amStack_1d8,(int *)aGStack_1a8);
    local_200[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)amStack_1d8);
    bVar1 = eastl::operator!=((rbtree_iterator *)local_228,(rbtree_iterator *)local_200);
    if (bVar1) {
      lVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_228);
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + local_1a0[0];
    }
    else {
      piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)amStack_1d8,(int *)aGStack_1a8);
      *piVar5 = local_1a0[0];
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_218,(int *)aGStack_1a8);
    }
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_1a8);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_240);
  }
  UIRedPacketResult::create((map *)amStack_1d8,(vector *)avStack_218,true);
  UISingletonDialog<UINewerPresent>::CloseDialog();
  GetTargetSku((int)this);
  uVar3 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar3);
  std::string::string((string *)aGStack_1a8,"");
  FUN_05462980(auStack_178,aGStack_1a8);
  std::string::~string((string *)aGStack_1a8);
  nop();
  FindTargetPresent((int)this);
  PurchasedBundleInfo::PurchasedBundleInfo((PurchasedBundleInfo *)local_200);
  thunk_FUN_05475e00((PurchasedBundleInfo *)local_200,aMStack_250);
  local_248 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_1a0);
  local_240 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)local_1a0);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_248,(__normal_iterator *)&local_240);
    if (!bVar1) break;
    piVar5 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_248);
    iVar9 = *piVar5;
    DString::DString((DString *)local_238,piVar5[1]);
    uVar6 = DString::c_str((DString *)local_238);
    uVar6 = FUN_054603b8(auStack_168,uVar6);
    uVar6 = FUN_054603b8(uVar6,&DAT_05593348);
    DString::DString((DString *)local_228,iVar9);
    uVar7 = DString::c_str((DString *)local_228);
    uVar6 = FUN_054603b8(uVar6,uVar7);
    FUN_054603b8(uVar6,&DAT_05594620);
    DString::~DString((DString *)local_228);
    DString::~DString((DString *)local_238);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_248);
  }
  Magento::GetProductPtr(aMStack_250,extraout_x1);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_240);
  iVar9 = 0;
  if (bVar2) {
    this_00 = (MagentoProductProps *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_240);
    fVar10 = (float)MagentoProductProps::GetPriceInUSD(this_00,bVar1);
    iVar9 = (int)fVar10;
  }
  pTVar8 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  FUN_05475d88((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_228,aMStack_250);
  FUN_05462824((DString *)local_238,auStack_178);
  TGALogMgr::LogNewuserPresent
            (pTVar8,2,(_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)local_228,
             (DString *)local_238,iVar9);
  std::string::~string((string *)local_238);
  std::string::~string((string *)local_228);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_240);
  PurchasedBundleInfo::~PurchasedBundleInfo((PurchasedBundleInfo *)local_200);
  PresentDetail::~PresentDetail((PresentDetail *)aGStack_1a8);
  FUN_054617bc(auStack_178);
  std::string::~string((string *)aMStack_250);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_218);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_1d8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentMgr::requestBuyOffer() */

void __thiscall NewerPresentMgr::requestBuyOffer(NewerPresentMgr *this)

{
  string *this_00;
  char *__s;
  DNetwork *this_01;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  DString aDStack_ce8 [1696];
  string asStack_648 [1600];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_d40,"i");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_d40);
  DString::DString(aDStack_ce8,*(int *)(this + 0x38));
  __s = (char *)DString::c_str(aDStack_ce8);
  std::string::append(this_00,__s,(size_t)__n);
  DString::~DString(aDStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)aDStack_ce8);
  FUN_03dbed38(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_648,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)aDStack_ce8);
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  GetTargetSku((int)this);
  PlayerInfo::RemoveBundleInPurchase(this_03,(string *)aDStack_ce8,0);
  std::string::~string((string *)aDStack_ce8);
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

