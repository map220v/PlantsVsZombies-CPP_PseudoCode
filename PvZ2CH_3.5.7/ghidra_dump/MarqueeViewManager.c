// Class: MarqueeViewManager


/* MarqueeViewManager::PopFront() */

void __thiscall MarqueeViewManager::PopFront(MarqueeViewManager *this)

{
  char cVar1;
  
  cVar1 = std::deque<MarqueeViewItemData,std::allocator<MarqueeViewItemData>>::empty
                    ((deque<MarqueeViewItemData,std::allocator<MarqueeViewItemData>> *)(this + 0x10)
                    );
  if (cVar1 != '\0') {
    return;
  }
  std::deque<MarqueeViewItemData,std::allocator<MarqueeViewItemData>>::pop_front
            ((deque<MarqueeViewItemData,std::allocator<MarqueeViewItemData>> *)(this + 0x10));
  return;
}


/* MarqueeViewManager::~MarqueeViewManager() */

void __thiscall MarqueeViewManager::~MarqueeViewManager(MarqueeViewManager *this)

{
  *(undefined ***)this = &PTR__MarqueeViewManager_0697edb0;
  std::deque<MarqueeViewItemData,std::allocator<MarqueeViewItemData>>::~deque
            ((deque<MarqueeViewItemData,std::allocator<MarqueeViewItemData>> *)(this + 0x10));
  Sexy::LazySingleton<MarqueeViewManager>::~LazySingleton((LazySingleton<MarqueeViewManager> *)this)
  ;
  return;
}


/* MarqueeViewManager::~MarqueeViewManager() */

void __thiscall MarqueeViewManager::~MarqueeViewManager(MarqueeViewManager *this)

{
  ~MarqueeViewManager(this);
  AK::FreeHook(this);
  return;
}


/* MarqueeViewManager::MarqueeViewManager() */

void __thiscall MarqueeViewManager::MarqueeViewManager(MarqueeViewManager *this)

{
  Sexy::LazySingleton<MarqueeViewManager>::LazySingleton((LazySingleton<MarqueeViewManager> *)this);
  this[8] = (MarqueeViewManager)0x0;
  *(undefined ***)this = &PTR__MarqueeViewManager_0697edb0;
  std::deque<MarqueeViewItemData,std::allocator<MarqueeViewItemData>>::deque();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MarqueeViewManager::ConstructDataInfo(std::deque<std::wstring, std::allocator<std::wstring > >&)
    */

void __thiscall MarqueeViewManager::ConstructDataInfo(MarqueeViewManager *this,deque *param_1)

{
  bool bVar1;
  string *psVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_a0 [40];
  wstring awStack_78 [8];
  wstring awStack_70 [8];
  wstring awStack_68 [8];
  string asStack_60 [8];
  undefined8 local_58 [4];
  wstring awStack_38 [40];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::begin();
  std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::end();
  bVar1 = std::operator!=((_Deque_iterator *)local_58,(_Deque_iterator *)awStack_38);
  if (bVar1) {
    do {
      psVar2 = (string *)FUN_04bfac00(local_58[0]);
      Sexy::UTF8StringToSexyString(psVar2);
      FUN_05478178(awStack_38,L"[CARNIVAL_MARQUEE_TEMPLATE]",asStack_60);
      TodReplaceString(awStack_38,L"{NAME}",awStack_78);
      FUN_05476c50(awStack_38);
      nop();
      FUN_05476574(awStack_68);
      uVar6 = 0;
      while( true ) {
        lVar4 = FUN_04bfac00(local_58[0]);
        uVar7 = *(undefined8 *)(lVar4 + 8);
        uVar5 = FUN_04bfac04(uVar7,*(undefined8 *)(lVar4 + 0x10));
        if (uVar5 <= uVar6) break;
        piVar3 = (int *)FUN_04bfac18(uVar7,uVar6);
        GetGameItemInfo(*piVar3,0x7fffffff,0);
        thunk_FUN_05477668(awStack_68,auStack_10);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)awStack_38);
        std::string::string(asStack_60,"X");
        Sexy::ToWString(asStack_60);
        thunk_FUN_05477668(awStack_68,awStack_38);
        FUN_05476c50(awStack_38);
        std::string::~string(asStack_60);
        nop();
        lVar4 = FUN_04bfac00(local_58[0]);
        lVar4 = FUN_04bfac18(*(undefined8 *)(lVar4 + 8),uVar6);
        std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar4 + 4));
        Sexy::ToWString(asStack_60);
        thunk_FUN_05477668(awStack_68,awStack_38);
        FUN_05476c50(awStack_38);
        std::string::~string(asStack_60);
        std::string::string(asStack_60," ");
        Sexy::ToWString(asStack_60);
        thunk_FUN_05477668(awStack_68,awStack_38);
        FUN_05476c50(awStack_38);
        std::string::~string(asStack_60);
        nop();
        uVar6 = uVar6 + 1;
      }
      TodReplaceString(awStack_70,L"{INFO}",awStack_68);
      FUN_054766c8(awStack_70,awStack_38);
      FUN_05476c50(awStack_38);
      std::deque<std::wstring,std::allocator<std::wstring>>::push_back
                ((deque<std::wstring,std::allocator<std::wstring>> *)param_1,awStack_70);
      FUN_05476c50(awStack_68);
      FUN_05476c50(awStack_70);
      FUN_05476c50(awStack_78);
      FUN_04bfba64(auStack_a0,(_Deque_iterator *)local_58);
      std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::end();
      bVar1 = std::operator!=((_Deque_iterator *)local_58,(_Deque_iterator *)awStack_38);
    } while (bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MarqueeViewManager::ConstructDataInfo(std::vector<std::wstring, std::allocator<std::wstring > >&)
    */

void __thiscall MarqueeViewManager::ConstructDataInfo(MarqueeViewManager *this,vector *param_1)

{
  bool bVar1;
  string *psVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_a0 [40];
  wstring awStack_78 [8];
  wstring awStack_70 [8];
  wstring awStack_68 [8];
  string asStack_60 [8];
  undefined8 local_58 [4];
  wstring awStack_38 [40];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::begin();
  std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::end();
  bVar1 = std::operator!=((_Deque_iterator *)local_58,(_Deque_iterator *)awStack_38);
  if (bVar1) {
    do {
      psVar2 = (string *)FUN_04bfac00(local_58[0]);
      Sexy::UTF8StringToSexyString(psVar2);
      FUN_05478178(awStack_38,L"[CARNIVAL_MARQUEE_TEMPLATE]",asStack_60);
      TodReplaceString(awStack_38,L"{NAME}",awStack_78);
      FUN_05476c50(awStack_38);
      nop();
      FUN_05476574(awStack_68);
      uVar6 = 0;
      while( true ) {
        lVar4 = FUN_04bfac00(local_58[0]);
        uVar7 = *(undefined8 *)(lVar4 + 8);
        uVar5 = FUN_04bfac04(uVar7,*(undefined8 *)(lVar4 + 0x10));
        if (uVar5 <= uVar6) break;
        piVar3 = (int *)FUN_04bfac18(uVar7,uVar6);
        GetGameItemInfo(*piVar3,0x7fffffff,0);
        thunk_FUN_05477668(awStack_68,auStack_10);
        GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)awStack_38);
        std::string::string(asStack_60,"X");
        Sexy::ToWString(asStack_60);
        thunk_FUN_05477668(awStack_68,awStack_38);
        FUN_05476c50(awStack_38);
        std::string::~string(asStack_60);
        nop();
        lVar4 = FUN_04bfac00(local_58[0]);
        lVar4 = FUN_04bfac18(*(undefined8 *)(lVar4 + 8),uVar6);
        std::to_string<ActivityTypeID>((ActivityTypeID *)(lVar4 + 4));
        Sexy::ToWString(asStack_60);
        thunk_FUN_05477668(awStack_68,awStack_38);
        FUN_05476c50(awStack_38);
        std::string::~string(asStack_60);
        std::string::string(asStack_60," ");
        Sexy::ToWString(asStack_60);
        thunk_FUN_05477668(awStack_68,awStack_38);
        FUN_05476c50(awStack_38);
        std::string::~string(asStack_60);
        nop();
        uVar6 = uVar6 + 1;
      }
      TodReplaceString(awStack_70,L"{INFO}",awStack_68);
      FUN_054766c8(awStack_70,awStack_38);
      FUN_05476c50(awStack_38);
      std::vector<std::wstring,std::allocator<std::wstring>>::push_back
                ((vector<std::wstring,std::allocator<std::wstring>> *)param_1,awStack_70);
      FUN_05476c50(awStack_68);
      FUN_05476c50(awStack_70);
      FUN_05476c50(awStack_78);
      FUN_04bfba64(auStack_a0,(_Deque_iterator *)local_58);
      std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::end();
      bVar1 = std::operator!=((_Deque_iterator *)local_58,(_Deque_iterator *)awStack_38);
    } while (bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MarqueeViewManager::RequestMarqueeData() */

void __thiscall MarqueeViewManager::RequestMarqueeData(MarqueeViewManager *this)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  DNetwork *this_00;
  undefined4 local_dc8 [2];
  string asStack_dc0 [8];
  function<bool(Sexy::Touch_const&)> afStack_db8 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d98 [48];
  ActiveItem aAStack_d68 [8];
  undefined4 local_d60;
  char local_d50;
  string asStack_ce8 [2776];
  string asStack_210 [520];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[8] == (MarqueeViewManager)0x0) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_04bfabac(local_d60);
    if ((cVar1 == '\0') || (local_d50 == '\0')) {
      this[8] = (MarqueeViewManager)0x1;
      ActiveItem::~ActiveItem(aAStack_d68);
    }
    else {
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map(amStack_d98);
      std::string::string(asStack_dc0,"t");
      uVar3 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d98,asStack_dc0);
      local_dc8[0] = 1;
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_dc8);
      FUN_05474278(uVar3,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::~string(asStack_dc0);
      nop();
      std::string::string(asStack_dc0,"limit");
      uVar3 = std::
              map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                            *)amStack_d98,asStack_dc0);
      local_dc8[0] = 10;
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_dc8);
      FUN_05474278(uVar3,asStack_ce8);
      std::string::~string(asStack_ce8);
      std::string::~string(asStack_dc0);
      nop();
      this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
      _PacketId::_PacketId((_PacketId *)asStack_ce8);
      FUN_04bfb03c(afStack_db8,this);
      std::string::string(asStack_dc0,"[NET_CONNECTING]");
      DNetwork::requestMsg
                (this_00,asStack_210,(map *)amStack_d98,30.0,(function *)afStack_db8,true,true,
                 asStack_dc0,0);
      std::string::~string(asStack_dc0);
      nop();
      std::function<bool(Sexy::Touch_const&)>::~function(afStack_db8);
      _PacketId::~_PacketId((_PacketId *)asStack_ce8);
      std::
      map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
      ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
              *)amStack_d98);
      ActiveItem::~ActiveItem(aAStack_d68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

