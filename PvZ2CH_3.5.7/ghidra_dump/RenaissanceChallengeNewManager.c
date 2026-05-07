// Class: RenaissanceChallengeNewManager


/* RenaissanceChallengeNewManager::RenaissanceChallengeNewManager() */

void __thiscall
RenaissanceChallengeNewManager::RenaissanceChallengeNewManager(RenaissanceChallengeNewManager *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<RenaissanceChallengeNewManager>::LazySingleton
            ((LazySingleton<RenaissanceChallengeNewManager> *)this);
  *(undefined ***)this = &PTR__RenaissanceChallengeNewManager_06714ab0;
  RenaissanceChallengeActivityData::RenaissanceChallengeActivityData
            ((RenaissanceChallengeActivityData *)(this + 8));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<RenaissanceChallengeNewManager,void(RenaissanceChallengeNewManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* RenaissanceChallengeNewManager::~RenaissanceChallengeNewManager() */

void __thiscall
RenaissanceChallengeNewManager::~RenaissanceChallengeNewManager
          (RenaissanceChallengeNewManager *this)

{
  *(undefined ***)this = &PTR__RenaissanceChallengeNewManager_06714ab0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  RenaissanceChallengeActivityData::~RenaissanceChallengeActivityData
            ((RenaissanceChallengeActivityData *)(this + 8));
  Sexy::LazySingleton<RenaissanceChallengeNewManager>::~LazySingleton
            ((LazySingleton<RenaissanceChallengeNewManager> *)this);
  return;
}


/* RenaissanceChallengeNewManager::~RenaissanceChallengeNewManager() */

void __thiscall
RenaissanceChallengeNewManager::~RenaissanceChallengeNewManager
          (RenaissanceChallengeNewManager *this)

{
  ~RenaissanceChallengeNewManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeNewManager::ReloadData() */

void __thiscall RenaissanceChallengeNewManager::ReloadData(RenaissanceChallengeNewManager *this)

{
  char cVar1;
  int iVar2;
  NameMapperBase *this_00;
  string asStack_90 [8];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03aac1c4(local_80);
  if (((cVar1 != '\0') && (local_70 != '\0')) &&
     (ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 8)), 0 < *(int *)(this + 0x38)))
  {
    this_00 = (NameMapperBase *)MaterialItemMapper::GetInstance();
    Sexy::StrFormat("mat_renaissance_challenge_statue_%d",asStack_90,(ulong)*(uint *)(this + 0x38));
    DAT_06a884dc = NameMapperBase::GetIdForName(this_00,asStack_90);
    std::string::~string(asStack_90);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaissanceChallengeNewManager::GetResourceId() */

undefined4 __thiscall
RenaissanceChallengeNewManager::GetResourceId(RenaissanceChallengeNewManager *this)

{
  ReloadData(this);
  return *(undefined4 *)(this + 0x38);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaissanceChallengeNewManager::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
RenaissanceChallengeNewManager::onNotifyRefreshActivityList
          (RenaissanceChallengeNewManager *this,bool param_1,set *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    uVar2 = std::set<int,std::less<int>,std::allocator<int>>::begin
                      ((set<int,std::less<int>,std::allocator<int>> *)param_2);
    uVar3 = std::
            map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>::
            end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)param_2);
    local_18 = std::find<std::_Rb_tree_const_iterator<int>,int>(uVar2,uVar3);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      ReloadData(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

