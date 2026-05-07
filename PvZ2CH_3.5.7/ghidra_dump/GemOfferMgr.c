// Class: GemOfferMgr


/* GemOfferMgr::CanShowHint() */

bool GemOfferMgr::CanShowHint(void)

{
  int iVar1;
  
  iVar1 = GameStateMgr::GetState(gGameStateMgr);
  return iVar1 == 6;
}


/* GemOfferMgr::ShowHint() */

void GemOfferMgr::ShowHint(void)

{
  LawnApp::ShowGemOfferHintUI(gLawnApp);
  return;
}


/* GemOfferMgr::~GemOfferMgr() */

void __thiscall GemOfferMgr::~GemOfferMgr(GemOfferMgr *this)

{
  *(undefined ***)this = &PTR__GemOfferMgr_06983050;
  std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::~map
            ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)(this + 8));
  Sexy::LazySingleton<GemOfferMgr>::~LazySingleton((LazySingleton<GemOfferMgr> *)this);
  return;
}


/* GemOfferMgr::~GemOfferMgr() */

void __thiscall GemOfferMgr::~GemOfferMgr(GemOfferMgr *this)

{
  ~GemOfferMgr(this);
  AK::FreeHook(this);
  return;
}


/* GemOfferMgr::ClearDatas() */

void __thiscall GemOfferMgr::ClearDatas(GemOfferMgr *this)

{
  *(undefined4 *)(this + 0x38) = 0;
  this[0x3c] = (GemOfferMgr)0x0;
  std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::clear
            ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)(this + 8));
  return;
}


/* GemOfferMgr::GemOfferMgr() */

void __thiscall GemOfferMgr::GemOfferMgr(GemOfferMgr *this)

{
  Sexy::LazySingleton<GemOfferMgr>::LazySingleton((LazySingleton<GemOfferMgr> *)this);
  *(undefined ***)this = &PTR__GemOfferMgr_06983050;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 8));
  *(undefined4 *)(this + 0x38) = 0;
  this[0x3c] = (GemOfferMgr)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemOfferMgr::ResetHintTimes() */

void __thiscall GemOfferMgr::ResetHintTimes(GemOfferMgr *this)

{
  bool bVar1;
  long lVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::begin
                       ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
                        (this + 8));
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)(this + 8));
  while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10), bVar1
        ) {
    lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
    *(undefined1 *)(lVar2 + 4) = 0;
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemOfferMgr::RequestNetwork() */

void GemOfferMgr::RequestNetwork(void)

{
  NetworkMgr *this;
  INetworkMsgProcess *this_00;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (NetworkMgr *)NetworkMgr::Instance();
  this_00 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            (avStack_20,&DAT_05755630,1,auStack_28);
  INetworkMsgProcess::RequestActivityList(this_00,(vector *)avStack_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemOfferMgr::NeedShowHint() */

void __thiscall GemOfferMgr::NeedShowHint(GemOfferMgr *this)

{
  bool bVar1;
  long lVar2;
  undefined1 uVar3;
  int local_24;
  long local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = LawnApp::GetRealBeijingTime(gLawnApp);
  lVar2 = LawnApp::BeijingTime(gLawnApp,&local_20);
  if (*(int *)(lVar2 + 4) <= *(int *)(this + 0x38)) {
    local_24 = *(int *)(lVar2 + 8);
    local_18 = std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::find
                         ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
                          (this + 8),&local_24);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)(this + 8));
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      lVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                        ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
      if (*(char *)(lVar2 + 4) == '\0') {
        *(undefined1 *)(lVar2 + 4) = 1;
        FUN_04c234e8(this + 0x3c);
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      goto LAB_04c24310;
    }
  }
  uVar3 = 0;
  FUN_04c234e8(this + 0x3c,0);
LAB_04c24310:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* GemOfferMgr::Update() */

void __thiscall GemOfferMgr::Update(GemOfferMgr *this)

{
  char cVar1;
  WorldMap *this_00;
  long lVar2;
  
  cVar1 = LawnApp::HasSpecialGemOffer(gLawnApp);
  if ((((cVar1 != '\0') && (cVar1 = CanShowHint(), cVar1 != '\0')) &&
      (this_00 = (WorldMap *)LawnApp::GetWorldMap(gLawnApp), this_00 != (WorldMap *)0x0)) &&
     (cVar1 = WorldMap::IsActionQueued(this_00), cVar1 == '\0')) {
    lVar2 = LawnApp::GetWorldMap(gLawnApp);
    lVar2 = FUN_04c234f0(*(undefined8 *)(lVar2 + 0x2b0));
    if (((lVar2 != 0) && (cVar1 = FUN_04c234f4(*(undefined1 *)(lVar2 + 0x7c)), cVar1 == '\0')) &&
       (cVar1 = NeedShowHint(this), cVar1 != '\0')) {
      ShowHint();
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemOfferMgr::InitTestData() */

void __thiscall GemOfferMgr::InitTestData(GemOfferMgr *this)

{
  map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *this_00;
  bool local_15;
  int local_14;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)(this + 8);
  local_8 = ___stack_chk_guard;
  LawnApp::SetSpecialGemOffer(gLawnApp,true);
  local_15 = false;
  *(undefined4 *)(this + 0x38) = 0x3c;
  local_14 = 9;
  local_10 = std::make_pair<int&,bool>(&local_14,&local_15);
  std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::
  insert<std::pair<int,bool>,void>(this_00,(pair *)&local_10);
  local_15 = false;
  local_14 = 0xc;
  local_10 = std::make_pair<int&,bool>(&local_14,&local_15);
  std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::
  insert<std::pair<int,bool>,void>(this_00,(pair *)&local_10);
  local_15 = false;
  local_14 = 0xe;
  local_10 = std::make_pair<int&,bool>(&local_14,&local_15);
  std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::
  insert<std::pair<int,bool>,void>(this_00,(pair *)&local_10);
  local_15 = false;
  local_14 = 0x11;
  local_10 = std::make_pair<int&,bool>(&local_14,&local_15);
  std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::
  insert<std::pair<int,bool>,void>(this_00,(pair *)&local_10);
  local_15 = false;
  local_14 = 0x12;
  local_10 = std::make_pair<int&,bool>(&local_14,&local_15);
  std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::
  insert<std::pair<int,bool>,void>(this_00,(pair *)&local_10);
  local_15 = false;
  local_14 = 0x14;
  local_10 = std::make_pair<int&,bool>(&local_14,&local_15);
  std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::
  insert<std::pair<int,bool>,void>(this_00,(pair *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemOfferMgr::SyncActivityData(GemOfferInfo const&) */

void __thiscall GemOfferMgr::SyncActivityData(GemOfferMgr *this,GemOfferInfo *param_1)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  bool local_15;
  int local_14;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar2 = FUN_04c234f8(uVar4,*(undefined8 *)(param_1 + 0x10));
    if (uVar2 <= uVar3) break;
    piVar1 = (int *)FUN_04c23504(uVar4,uVar3);
    local_14 = *piVar1;
    local_15 = false;
    local_10 = std::make_pair<int&,bool>(&local_14,&local_15);
    std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::
    insert<std::pair<int,bool>,void>
              ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)(this + 8),
               (pair *)&local_10);
    uVar3 = uVar3 + 1;
  }
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GemOfferMgr::RefreshActivity() */

void __thiscall GemOfferMgr::RefreshActivity(GemOfferMgr *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  GemOfferInfo aGStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  if (local_70 != '\0') {
    GemOfferInfo::GemOfferInfo(aGStack_b0);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)aGStack_b0);
    if ((cVar1 != '\0') && (lVar3 = FUN_04c234f8(local_a8,local_a0), lVar3 != 0)) {
      SyncActivityData(this,aGStack_b0);
    }
    GemOfferInfo::~GemOfferInfo(aGStack_b0);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

