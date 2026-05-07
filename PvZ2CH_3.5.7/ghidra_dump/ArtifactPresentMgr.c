// Class: ArtifactPresentMgr


/* ArtifactPresentMgr::ConvertToServerIndex(int) */

int __thiscall ArtifactPresentMgr::ConvertToServerIndex(ArtifactPresentMgr *this,int param_1)

{
  return (DAT_06ada4d0 - param_1) + -1;
}


/* ArtifactPresentMgr::ConvertToLocalIndex(int) */

int __thiscall ArtifactPresentMgr::ConvertToLocalIndex(ArtifactPresentMgr *this,int param_1)

{
  if (4 < param_1) {
    return (DAT_06ada4d0 - param_1) + -1;
  }
  return param_1 + DAT_06ada4d0 + -5;
}


/* ArtifactPresentMgr::Close() */

void ArtifactPresentMgr::Close(void)

{
  if (UISingletonDialog<UIArtifactPresent>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<UIArtifactPresent>::m_pInstance + 0x318))();
    UISingletonDialog<UIArtifactPresent>::m_pInstance = (long *)0x0;
  }
  return;
}


/* ArtifactPresentMgr::IsActive() */

bool ArtifactPresentMgr::IsActive(void)

{
  long lVar1;
  
  lVar1 = UISingletonDialog<UIArtifactPresent>::GetSingletonPtr();
  return lVar1 != 0;
}


/* ArtifactPresentMgr::RequestNetwork() */

void __thiscall ArtifactPresentMgr::RequestNetwork(ArtifactPresentMgr *this)

{
  ActivityManager *this_00;
  
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a50,true,0);
  this[0x3c] = (ArtifactPresentMgr)0x1;
  return;
}


/* ArtifactPresentMgr::onResultClosed() */

void __thiscall ArtifactPresentMgr::onResultClosed(ArtifactPresentMgr *this)

{
  if (this[0x3d] != (ArtifactPresentMgr)0x0) {
    RequestNetwork(this);
    this[0x3d] = (ArtifactPresentMgr)0x0;
  }
  return;
}


/* ArtifactPresentMgr::GetNumPresents() */

void __thiscall ArtifactPresentMgr::GetNumPresents(ArtifactPresentMgr *this)

{
  std::
  map<int,ArtifactPresentDetail,std::less<int>,std::allocator<std::pair<int_const,ArtifactPresentDetail>>>
  ::size((map<int,ArtifactPresentDetail,std::less<int>,std::allocator<std::pair<int_const,ArtifactPresentDetail>>>
          *)(this + 8));
  return;
}


/* ArtifactPresentMgr::GetServerIdList() */

vector<int,std::allocator<int>> * ArtifactPresentMgr::GetServerIdList(void)

{
  long in_x0;
  vector<int,std::allocator<int>> *in_x8;
  
  std::vector<int,std::allocator<int>>::vector(in_x8,(vector *)(in_x0 + 0x40));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPresentMgr::ArtifactPresentMgr() */

void __thiscall ArtifactPresentMgr::ArtifactPresentMgr(ArtifactPresentMgr *this)

{
  undefined *puVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  CBMemberTranslatorX aCStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::LazySingleton<ArtifactPresentMgr>::LazySingleton((LazySingleton<ArtifactPresentMgr> *)this);
  *(undefined ***)this = &PTR__ArtifactPresentMgr_0677af20;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::
  map<int,ArtifactPresentDetail,std::less<int>,std::allocator<std::pair<int_const,ArtifactPresentDetail>>>
  ::clear((map<int,ArtifactPresentDetail,std::less<int>,std::allocator<std::pair<int_const,ArtifactPresentDetail>>>
           *)(this + 8));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x40));
  *(undefined4 *)(this + 0x38) = 0;
  this[0x3c] = (ArtifactPresentMgr)0x0;
  this[0x3d] = (ArtifactPresentMgr)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_90 = local_50;
  uStack_88 = uStack_48;
  local_80 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<ArtifactPresentMgr,void(ArtifactPresentMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onResultClosed);
  Sexy::Delegate0::Delegate0<ArtifactPresentMgr,void(ArtifactPresentMgr::*)()>
            (aDStack_38,aCStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ResultClosed,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactPresentMgr::~ArtifactPresentMgr() */

void __thiscall ArtifactPresentMgr::~ArtifactPresentMgr(ArtifactPresentMgr *this)

{
  *(undefined ***)this = &PTR__ArtifactPresentMgr_0677af20;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x40));
  std::
  map<int,ArtifactPresentDetail,std::less<int>,std::allocator<std::pair<int_const,ArtifactPresentDetail>>>
  ::~map((map<int,ArtifactPresentDetail,std::less<int>,std::allocator<std::pair<int_const,ArtifactPresentDetail>>>
          *)(this + 8));
  Sexy::LazySingleton<ArtifactPresentMgr>::~LazySingleton((LazySingleton<ArtifactPresentMgr> *)this)
  ;
  return;
}


/* ArtifactPresentMgr::~ArtifactPresentMgr() */

void __thiscall ArtifactPresentMgr::~ArtifactPresentMgr(ArtifactPresentMgr *this)

{
  ~ArtifactPresentMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPresentMgr::FindTargetPresent(int) */

void ArtifactPresentMgr::FindTargetPresent(int param_1)

{
  bool bVar1;
  long lVar2;
  ArtifactPresentDetail *in_x8;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArtifactPresentDetail::ArtifactPresentDetail(in_x8);
  local_18 = std::
             map<int,ArtifactPresentDetail,std::less<int>,std::allocator<std::pair<int_const,ArtifactPresentDetail>>>
             ::find((map<int,ArtifactPresentDetail,std::less<int>,std::allocator<std::pair<int_const,ArtifactPresentDetail>>>
                     *)((ulong)(uint)param_1 + 8),local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)((ulong)(uint)param_1 + 8));
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar1) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    ArtifactPresentDetail::operator=(in_x8,(ArtifactPresentDetail *)(lVar2 + 8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPresentMgr::GetTargetOrgPrice(int) */

void ArtifactPresentMgr::GetTargetOrgPrice(int param_1)

{
  ArtifactPresentDetail aAStack_38 [36];
  undefined4 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindTargetPresent(param_1);
  ArtifactPresentDetail::~ArtifactPresentDetail(aAStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_14);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPresentMgr::GetTargetTypeName(int) */

void __thiscall ArtifactPresentMgr::GetTargetTypeName(ArtifactPresentMgr *this,int param_1)

{
  ArtifactPresentDetail aAStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindTargetPresent((int)this);
  FUN_05475d88();
  ArtifactPresentDetail::~ArtifactPresentDetail(aAStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPresentMgr::SyncActivityData(NetworkArtifactPresent const&) */

void __thiscall
ArtifactPresentMgr::SyncActivityData(ArtifactPresentMgr *this,NetworkArtifactPresent *param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  NameMapperBase *this_00;
  vector *pvVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  int local_7c;
  string asStack_78 [8];
  ArtifactPresentDetail aAStack_70 [8];
  vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>
  avStack_68 [24];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  pair<int_const,ArtifactPresentDetail> apStack_40 [56];
  long local_8;
  
  uVar9 = *(undefined8 *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  local_7c = 0;
  uVar3 = FUN_03dc4c04(uVar9,*(undefined8 *)(param_1 + 0x10));
  iVar2 = 0;
  while ((ulong)(long)iVar2 < uVar3) {
    puVar4 = (undefined8 *)FUN_03dc4c34(uVar9);
    lVar5 = FUN_03dc4c40(*puVar4,puVar4[1]);
    if (lVar5 != 0) {
      ArtifactPresentDetail::ArtifactPresentDetail(aAStack_70);
      std::string::string(asStack_78,"");
      nop();
      this_00 = (NameMapperBase *)ArtifactMapper::GetInstance();
      puVar4 = (undefined8 *)FUN_03dc4c34(*(undefined8 *)(param_1 + 8),(long)local_7c);
      lVar5 = FUN_03dc4df8(*puVar4);
      cVar1 = NameMapperBase::ContainsId(this_00,*(int *)(lVar5 + 4));
      if (cVar1 != '\0') {
        iVar2 = ArtifactMapper::GetInstance();
        puVar4 = (undefined8 *)FUN_03dc4c34(*(undefined8 *)(param_1 + 8),(long)local_7c);
        FUN_03dc4df8(*puVar4);
        NameMapperBase::GetNameForId(iVar2);
        FUN_05474278(asStack_78,apStack_40);
        std::string::~string((string *)apStack_40);
      }
      thunk_FUN_05475e00(aAStack_70,asStack_78);
      pvVar6 = (vector *)FUN_03dc4c34(*(undefined8 *)(param_1 + 8),(long)local_7c);
      std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>::
      operator=(avStack_68,pvVar6);
      lVar8 = (long)local_7c;
      puVar7 = (undefined4 *)FUN_03dc4aa4(*(undefined8 *)(param_1 + 0x20),lVar8);
      local_50 = *puVar7;
      puVar7 = (undefined4 *)FUN_03dc4aa4(*(undefined8 *)(param_1 + 0x38),lVar8);
      local_4c = *puVar7;
      puVar4 = (undefined8 *)FUN_03dc4c34(*(undefined8 *)(param_1 + 8),lVar8);
      lVar5 = FUN_03dc4df8(*puVar4);
      local_48 = *(undefined4 *)(lVar5 + 4);
      puVar7 = (undefined4 *)FUN_03dc4aa4(*(undefined8 *)(param_1 + 0x50),lVar8);
      local_44 = *puVar7;
      std::make_pair<int&,ArtifactPresentDetail&>(&local_7c,aAStack_70);
      std::
      map<int,ArtifactPresentDetail,std::less<int>,std::allocator<std::pair<int_const,ArtifactPresentDetail>>>
      ::insert<std::pair<int,ArtifactPresentDetail>,void>
                ((map<int,ArtifactPresentDetail,std::less<int>,std::allocator<std::pair<int_const,ArtifactPresentDetail>>>
                  *)(this + 8),(pair *)apStack_40);
      std::pair<int_const,ArtifactPresentDetail>::~pair(apStack_40);
      std::string::~string(asStack_78);
      ArtifactPresentDetail::~ArtifactPresentDetail(aAStack_70);
      iVar2 = local_7c;
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar3 = FUN_03dc4c04(uVar9,*(undefined8 *)(param_1 + 0x10));
    }
    iVar2 = iVar2 + 1;
    local_7c = iVar2;
  }
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x40),(vector *)(param_1 + 0x68));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPresentMgr::TestLoad() */

void __thiscall ArtifactPresentMgr::TestLoad(ArtifactPresentMgr *this)

{
  int local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_100 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_e8 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_d0 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_b8 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_a0 [24];
  NetworkArtifactPresent aNStack_88 [8];
  vector<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>,std::allocator<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>>>
  avStack_80 [24];
  vector<int,std::allocator<int>> avStack_68 [24];
  vector<int,std::allocator<int>> avStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<int,ArtifactPresentDetail,std::less<int>,std::allocator<std::pair<int_const,ArtifactPresentDetail>>>
  ::clear((map<int,ArtifactPresentDetail,std::less<int>,std::allocator<std::pair<int_const,ArtifactPresentDetail>>>
           *)(this + 8));
  *(undefined4 *)(this + 0x38) = 0;
  NetworkArtifactPresent::NetworkArtifactPresent(aNStack_88);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_100);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_e8);
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_140);
  local_13c = 1;
  local_140 = 1;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_138);
  local_134 = 0xbc0;
  local_138 = 100;
  std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>::
  push_back((vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>> *)
            avStack_e8,(NetworkArtifactPresentContent *)&local_140);
  std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>::
  push_back((vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>> *)
            avStack_e8,(NetworkArtifactPresentContent *)&local_138);
  std::
  vector<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>,std::allocator<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>>>
  ::push_back((vector<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>,std::allocator<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>>>
               *)avStack_100,(vector *)avStack_e8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_d0);
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_130);
  local_12c = 2;
  local_130 = 1;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_128);
  local_124 = 0xbc0;
  local_128 = 100;
  std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>::
  push_back((vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>> *)
            avStack_d0,(NetworkArtifactPresentContent *)&local_130);
  std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>::
  push_back((vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>> *)
            avStack_d0,(NetworkArtifactPresentContent *)&local_128);
  std::
  vector<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>,std::allocator<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>>>
  ::push_back((vector<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>,std::allocator<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>>>
               *)avStack_100,(vector *)avStack_d0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_b8);
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_120);
  local_11c = 3;
  local_120 = 1;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_118);
  local_114 = 0xbc0;
  local_118 = 100;
  std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>::
  push_back((vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>> *)
            avStack_b8,(NetworkArtifactPresentContent *)&local_120);
  std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>::
  push_back((vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>> *)
            avStack_b8,(NetworkArtifactPresentContent *)&local_118);
  std::
  vector<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>,std::allocator<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>>>
  ::push_back((vector<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>,std::allocator<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>>>
               *)avStack_100,(vector *)avStack_b8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_a0);
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_110);
  local_110 = 1;
  local_10c = 4;
  Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_108);
  local_108 = 100;
  local_104 = 0xbc0;
  std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>::
  push_back((vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>> *)
            avStack_a0,(NetworkArtifactPresentContent *)&local_110);
  std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>::
  push_back((vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>> *)
            avStack_a0,(NetworkArtifactPresentContent *)&local_108);
  std::
  vector<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>,std::allocator<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>>>
  ::push_back((vector<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>,std::allocator<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>>>
               *)avStack_100,(vector *)avStack_a0);
  std::
  vector<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>,std::allocator<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>>>
  ::operator=(avStack_80,(vector *)avStack_100);
  local_144 = 1;
  std::vector<int,std::allocator<int>>::push_back(avStack_68,&local_144);
  local_144 = 1;
  std::vector<int,std::allocator<int>>::push_back(avStack_68,&local_144);
  local_144 = 1;
  std::vector<int,std::allocator<int>>::push_back(avStack_68,&local_144);
  local_144 = 3;
  std::vector<int,std::allocator<int>>::push_back(avStack_68,&local_144);
  local_144 = 0x44;
  std::vector<int,std::allocator<int>>::push_back(avStack_50,&local_144);
  local_144 = 0x44;
  std::vector<int,std::allocator<int>>::push_back(avStack_50,&local_144);
  local_144 = 0x1e;
  std::vector<int,std::allocator<int>>::push_back(avStack_50,&local_144);
  local_144 = 0x62;
  std::vector<int,std::allocator<int>>::push_back(avStack_50,&local_144);
  SyncActivityData(this,aNStack_88);
  std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>::~vector
            ((vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>> *)
             avStack_a0);
  std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>::~vector
            ((vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>> *)
             avStack_b8);
  std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>::~vector
            ((vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>> *)
             avStack_d0);
  std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>::~vector
            ((vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>> *)
             avStack_e8);
  std::
  vector<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>,std::allocator<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>>>
  ::~vector((vector<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>,std::allocator<std::vector<NetworkArtifactPresentContent,std::allocator<NetworkArtifactPresentContent>>>>
             *)avStack_100);
  NetworkArtifactPresent::~NetworkArtifactPresent(aNStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* ArtifactPresentMgr::TestInit() */

void __thiscall ArtifactPresentMgr::TestInit(ArtifactPresentMgr *this)

{
  char cVar1;
  
  cVar1 = TestLoad(this);
  if (cVar1 == '\0') {
    return;
  }
  UISingletonDialog<UIArtifactPresent>::ShowDialog();
  return;
}


/* ArtifactPresentMgr::TestRequestNetwork() */

void ArtifactPresentMgr::TestRequestNetwork(void)

{
  char cVar1;
  ArtifactPresentMgr *in_x0;
  
  cVar1 = TestLoad(in_x0);
  if (cVar1 == '\0') {
    return;
  }
  UISingletonDialog<UIArtifactPresent>::ShowDialog();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPresentMgr::Load() */

void __thiscall ArtifactPresentMgr::Load(ArtifactPresentMgr *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  ActiveItem aAStack_108 [8];
  undefined4 local_100;
  char local_f0;
  NetworkArtifactPresent aNStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<int,ArtifactPresentDetail,std::less<int>,std::allocator<std::pair<int_const,ArtifactPresentDetail>>>
  ::clear((map<int,ArtifactPresentDetail,std::less<int>,std::allocator<std::pair<int_const,ArtifactPresentDetail>>>
           *)(this + 8));
  *(undefined4 *)(this + 0x38) = 0;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_03dc4a98(local_100);
  cVar2 = '\0';
  if ((cVar1 != '\0') && (cVar2 = '\0', local_f0 != '\0')) {
    NetworkArtifactPresent::NetworkArtifactPresent(aNStack_88);
    cVar2 = ActiveItem::GetDataSerialized(aAStack_108,(RtObject *)aNStack_88);
    if (cVar2 != '\0') {
      SyncActivityData(this,aNStack_88);
    }
    NetworkArtifactPresent::~NetworkArtifactPresent(aNStack_88);
  }
  ActiveItem::~ActiveItem(aAStack_108);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* ArtifactPresentMgr::Init() */

void __thiscall ArtifactPresentMgr::Init(ArtifactPresentMgr *this)

{
  char cVar1;
  
  cVar1 = Load(this);
  if (cVar1 == '\0') {
    return;
  }
  UISingletonDialog<UIArtifactPresent>::ShowDialog();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPresentMgr::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
ArtifactPresentMgr::onNotifyRefreshActivityList(ArtifactPresentMgr *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x3c] != (ArtifactPresentMgr)0x0)) {
    local_1c = 0x2a50;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      Init(this);
      this[0x3c] = (ArtifactPresentMgr)0x0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPresentMgr::GetTargetSku(int) */

void ArtifactPresentMgr::GetTargetSku(int param_1)

{
  char *pcVar1;
  int in_w1;
  string *in_x8;
  int iVar2;
  string asStack_20 [8];
  DString aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (in_w1 == 0) {
    std::string::string(in_x8,"com.popcap.pvz2.zongzi12");
    nop();
  }
  else if (in_w1 == 1) {
    std::string::string(in_x8,"com.popcap.ios.chs.PVZ2.EasterEgg30");
    nop();
  }
  else if (in_w1 == 2) {
    std::string::string(in_x8,"com.popcap.ios.chs.PVZ2.EasterEgg68");
    nop();
  }
  else {
    iVar2 = in_w1 + -2;
    if (((6 < in_w1 + -2) && (iVar2 = in_w1 + -1, 0x10 < in_w1 + -1)) &&
       (iVar2 = in_w1, 0x12 < in_w1)) {
      iVar2 = in_w1 + 1;
    }
    std::operator+((string *)&DAT_06ada5b0,"0");
    DString::DString(aDStack_18,iVar2);
    pcVar1 = (char *)DString::c_str(aDStack_18);
    std::operator+(asStack_20,pcVar1);
    DString::~DString(aDStack_18);
    std::string::~string(asStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPresentMgr::GetTargetPrice(int) */

void ArtifactPresentMgr::GetTargetPrice(int param_1)

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
/* ArtifactPresentMgr::GetTargetShortDes(int) */

void __thiscall ArtifactPresentMgr::GetTargetShortDes(ArtifactPresentMgr *this,int param_1)

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
/* ArtifactPresentMgr::ShowNewerPresentDetail(int) */

void __thiscall ArtifactPresentMgr::ShowNewerPresentDetail(ArtifactPresentMgr *this,int param_1)

{
  UIArtifactPresentDetail *this_00;
  ArtifactPresentDetail aAStack_38 [40];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (UIArtifactPresentDetail *)UISingletonDialog<UIArtifactPresentDetail>::ShowDialog();
  if (this_00 != (UIArtifactPresentDetail *)0x0) {
    FindTargetPresent((int)this);
    UIArtifactPresentDetail::InitView(this_00,local_10,param_1);
    ArtifactPresentDetail::~ArtifactPresentDetail(aAStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPresentMgr::BuyOffer(int) */

void __thiscall ArtifactPresentMgr::BuyOffer(ArtifactPresentMgr *this,int param_1)

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
  PurchasedBundleInfo aPStack_1d0 [8];
  int local_1c8;
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
  local_1c8 = param_1;
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
  ArtifactPresentDetail::~ArtifactPresentDetail((ArtifactPresentDetail *)asStack_1a8);
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_208);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPresentMgr::NotifyBundlePurchased(std::vector<PaymentBundleInfo,
   std::allocator<PaymentBundleInfo> > const&) */

void __thiscall ArtifactPresentMgr::NotifyBundlePurchased(ArtifactPresentMgr *this,vector *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  int *piVar7;
  NameMapperBase *this_00;
  undefined8 uVar8;
  undefined8 uVar9;
  MagentoProductProps *this_01;
  char *pcVar10;
  TGALogMgr *pTVar11;
  size_t __n;
  DString *__n_00;
  uint uVar12;
  int iVar13;
  float fVar14;
  Magento aMStack_268 [8];
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_240 [24];
  undefined8 local_228;
  string asStack_220 [8];
  string asStack_218 [8];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
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
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_240);
  local_258 = FUN_03dc5fc8(*(undefined8 *)param_1);
  local_250[0] = FUN_03dc6018(*(undefined8 *)(param_1 + 8));
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_258,(__normal_iterator *)local_250);
    uVar12 = (uint)bVar2;
    if (!bVar2) break;
    piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_258);
    ProfileChangeItemAmount(*piVar7,piVar7[1],false);
    local_228 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                          ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                           amStack_1d8,(int *)aGStack_1a8);
    local_200[0] = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)amStack_1d8);
    bVar2 = eastl::operator!=((rbtree_iterator *)&local_228,(rbtree_iterator *)local_200);
    if (bVar2) {
      lVar6 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_228);
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + local_1a0[0];
    }
    else {
      piVar7 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                      operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                  *)amStack_1d8,(int *)aGStack_1a8);
      *piVar7 = local_1a0[0];
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)avStack_240,(int *)aGStack_1a8);
    }
    GAME_ITEM_INFO::~GAME_ITEM_INFO(aGStack_1a8);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_258);
  }
  __n = 1;
  UIRedPacketResult::create((map *)amStack_1d8,(vector *)avStack_240,true);
  UISingletonDialog<UIArtifactPresent>::CloseDialog();
  TGANFSLinkageData::TGANFSLinkageData((TGANFSLinkageData *)&local_228);
  std::string::append((string *)&local_228,"3",__n);
  GetTargetSku((int)this);
  uVar5 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar5);
  __n_00 = (DString *)local_200;
  std::string::string((string *)aGStack_1a8,"");
  FUN_05462980(auStack_178,aGStack_1a8);
  std::string::~string((string *)aGStack_1a8);
  nop();
  FindTargetPresent((int)this);
  local_260 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_1a0);
  local_258 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)local_1a0);
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_260,(__normal_iterator *)&local_258);
    if (!bVar2) break;
    piVar7 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_260);
    uVar1 = piVar7[1];
    iVar13 = *piVar7;
    this_00 = (NameMapperBase *)ArtifactMapper::GetInstance();
    cVar3 = NameMapperBase::ContainsId(this_00,uVar1);
    if (cVar3 != '\0') {
      uVar12 = uVar1;
    }
    DString::DString((DString *)local_250,uVar1);
    uVar8 = DString::c_str((DString *)local_250);
    uVar8 = FUN_054603b8(auStack_168,uVar8);
    uVar8 = FUN_054603b8(uVar8,&DAT_05593348);
    DString::DString((DString *)local_200,iVar13);
    uVar9 = DString::c_str((DString *)local_200);
    uVar8 = FUN_054603b8(uVar8,uVar9);
    FUN_054603b8(uVar8,&DAT_05594620);
    DString::~DString((DString *)local_200);
    DString::~DString((DString *)local_250);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_260);
  }
  Magento::GetProductPtr(aMStack_268,(string *)(ulong)bVar2);
  bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)local_250);
  iVar13 = 0;
  if (bVar4) {
    this_01 = (MagentoProductProps *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_250);
    fVar14 = (float)MagentoProductProps::GetPriceInUSD(this_01,bVar2);
    iVar13 = (int)fVar14;
  }
  DString::DString((DString *)local_200,uVar12);
  pcVar10 = (char *)DString::c_str((DString *)local_200);
  std::string::append(asStack_220,pcVar10,(size_t)__n_00);
  DString::~DString((DString *)local_200);
  DString::DString((DString *)local_200,iVar13);
  pcVar10 = (char *)DString::c_str((DString *)local_200);
  std::string::append(asStack_218,pcVar10,(size_t)__n_00);
  DString::~DString((DString *)local_200);
  thunk_FUN_05475e00(auStack_210,aMStack_268);
  FUN_05462824((DString *)local_200,auStack_178);
  FUN_05474278(auStack_208,(DString *)local_200);
  std::string::~string((string *)local_200);
  pTVar11 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAArtifactPresentData::TGAArtifactPresentData
            ((TGAArtifactPresentData *)local_200,(TGAArtifactPresentData *)&local_228);
  TGALogMgr::LogArtifactPresent(pTVar11,(DString *)local_200);
  TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)local_200);
  this[0x3d] = (ArtifactPresentMgr)0x1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_250);
  ArtifactPresentDetail::~ArtifactPresentDetail((ArtifactPresentDetail *)aGStack_1a8);
  FUN_054617bc(auStack_178);
  std::string::~string((string *)aMStack_268);
  TGANFSLinkageData::~TGANFSLinkageData((TGANFSLinkageData *)&local_228);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_240);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)amStack_1d8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPresentMgr::requestBuyOffer() */

void __thiscall ArtifactPresentMgr::requestBuyOffer(ArtifactPresentMgr *this)

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
  FUN_03dc522c(afStack_d38,this);
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
  PlayerInfo::RemoveBundleInPurchase(this_03,(string *)aDStack_ce8,*(int *)(this + 0x38));
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

