// Class: FestivalGamePageMiniGame


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageMiniGame::GetLayoutName() */

void __thiscall FestivalGamePageMiniGame::GetLayoutName(FestivalGamePageMiniGame *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIFestivalGamePageMiniGame");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* FestivalGamePageMiniGame::~FestivalGamePageMiniGame() */

void __thiscall FestivalGamePageMiniGame::~FestivalGamePageMiniGame(FestivalGamePageMiniGame *this)

{
  *(undefined ***)this = &PTR_GetClass_0671fc10;
  *(undefined **)(this + 0xd8) = &DAT_0671ff78;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x140);
  UISingletonDialog<FestivalGamePageMiniGame>::~UISingletonDialog
            ((UISingletonDialog<FestivalGamePageMiniGame> *)this);
  return;
}


/* FestivalGamePageMiniGame::~FestivalGamePageMiniGame() */

void __thiscall FestivalGamePageMiniGame::~FestivalGamePageMiniGame(FestivalGamePageMiniGame *this)

{
  ~FestivalGamePageMiniGame(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageMiniGame::showFestivalGameEntrance() */

void FestivalGamePageMiniGame::showFestivalGameEntrance(void)

{
  MiniGameManager *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (MiniGameManager *)Sexy::LazySingleton<MiniGameManager>::GetInstancePtr();
  MiniGameManager::loadData(this);
  std::string::string(asStack_10,"OpenMiniGameUI");
  Cpp2Lua(asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageMiniGame::FestivalGamePageMiniGame() */

void __thiscall FestivalGamePageMiniGame::FestivalGamePageMiniGame(FestivalGamePageMiniGame *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<FestivalGamePageMiniGame>::UISingletonDialog
            ((UISingletonDialog<FestivalGamePageMiniGame> *)this);
  this[0x131] = (FestivalGamePageMiniGame)0x0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_0671fc10;
  *(undefined **)(this + 0xd8) = &DAT_0671ff78;
  FUN_05478178(this + 0x140,&DAT_056f11a8,&local_20);
  nop();
  Sexy::Color::Color((Color *)(this + 0x148),1);
  *(undefined4 *)(this + 0x158) = 0x2a02;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_40 = local_20;
  uStack_38 = uStack_18;
  local_30 = local_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<FestivalGamePageMiniGame,void(FestivalGamePageMiniGame::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageMiniGame::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
FestivalGamePageMiniGame::onNotifyRefreshActivityList
          (FestivalGamePageMiniGame *this,bool param_1,set *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x131] != (FestivalGamePageMiniGame)0x0)) {
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
      (**(code **)(*(long *)this + 0x340))(this);
    }
  }
  this[0x131] = (FestivalGamePageMiniGame)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageMiniGame::ButtonDepress(int) */

void __thiscall FestivalGamePageMiniGame::ButtonDepress(FestivalGamePageMiniGame *this,int param_1)

{
  char cVar1;
  int iVar2;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  wchar_t local_b0 [2];
  pair<wchar_t_const,wchar_t> apStack_a8 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_a0 [24];
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1f8) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_03ac12f8(local_80);
    if ((cVar1 == '\0') || (local_70 == '\0')) {
      (**(code **)(*(long *)this + 0x350))(this);
    }
    else {
      this[0x131] = (FestivalGamePageMiniGame)0x1;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_a0);
      local_b0[1] = 1;
      local_b0[0] = *(wchar_t *)(this + 0x158);
      std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_a8,local_b0,local_b0 + 1)
      ;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_a0,
                 (pair *)apStack_a8);
      this_00 = (NetworkMgr *)NetworkMgr::Instance();
      this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
      INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_a0,0,true);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_a0);
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to FestivalGamePageMiniGame::ButtonDepress(int) */

void __thiscall FestivalGamePageMiniGame::ButtonDepress(FestivalGamePageMiniGame *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

