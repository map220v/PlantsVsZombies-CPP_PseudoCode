// Class: CardGameNetworkMgr


/* CardGameNetworkMgr::GetWorldData(std::string const&) */

long __thiscall CardGameNetworkMgr::GetWorldData(CardGameNetworkMgr *this,string *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x50);
  lVar2 = FUN_0356beec(uVar5,*(undefined8 *)(this + 0x58));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      lVar4 = FUN_0356bf14(uVar5,0);
      return lVar4;
    }
    lVar3 = FUN_0356bf14(uVar5,lVar4);
    cVar1 = std::operator==((string *)(lVar3 + 0x20),param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  return lVar3;
}


/* CardGameNetworkMgr::GetCurrentWorldData() */

void __thiscall CardGameNetworkMgr::GetCurrentWorldData(CardGameNetworkMgr *this)

{
  GetWorldData(this,(string *)(this + 0x10));
  return;
}


/* CardGameNetworkMgr::GetPrefixWorldIndex(std::string const&) */

ulong __thiscall CardGameNetworkMgr::GetPrefixWorldIndex(CardGameNetworkMgr *this,string *param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x50);
  uVar4 = 0;
  uVar2 = FUN_0356beec(uVar5,*(undefined8 *)(this + 0x58));
  while( true ) {
    if (uVar4 == uVar2) {
      return 0;
    }
    lVar3 = FUN_0356bf14(uVar5,uVar4);
    cVar1 = std::operator==((string *)(lVar3 + 0x20),param_1);
    if (cVar1 != '\0') break;
    uVar4 = uVar4 + 1;
  }
  return uVar4 & 0xffffffff;
}


/* CardGameNetworkMgr::GetCurrentPrefixWorldIndex() */

void __thiscall CardGameNetworkMgr::GetCurrentPrefixWorldIndex(CardGameNetworkMgr *this)

{
  GetPrefixWorldIndex(this,(string *)(this + 0x10));
  return;
}


/* CardGameNetworkMgr::GetCurrentLevelFirstReward(bool, int) */

undefined4 __thiscall
CardGameNetworkMgr::GetCurrentLevelFirstReward(CardGameNetworkMgr *this,bool param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  iVar1 = GetCurrentPrefixWorldIndex(this);
  if (param_1) {
    lVar3 = FUN_0356bf14(*(undefined8 *)(this + 0x50),(long)iVar1);
    uVar5 = *(undefined8 *)(lVar3 + 0x50);
    uVar4 = FUN_0356bf1c(uVar5,*(undefined8 *)(lVar3 + 0x58));
    uVar2 = 0;
    if ((ulong)(long)param_2 < uVar4) {
      lVar3 = FUN_0356bf58(uVar5,(long)param_2);
      uVar2 = *(undefined4 *)(lVar3 + 100);
    }
  }
  else {
    lVar3 = FUN_0356bf14(*(undefined8 *)(this + 0x50),(long)iVar1);
    uVar5 = *(undefined8 *)(lVar3 + 0x38);
    uVar4 = FUN_0356bf1c(uVar5,*(undefined8 *)(lVar3 + 0x40));
    uVar2 = 0;
    if ((ulong)(long)param_2 < uVar4) {
      lVar3 = FUN_0356bf58(uVar5,(long)param_2);
      return *(undefined4 *)(lVar3 + 100);
    }
  }
  return uVar2;
}


/* CardGameNetworkMgr::GetCurrentStarNumber(std::string const&) */

undefined4 __thiscall
CardGameNetworkMgr::GetCurrentStarNumber(CardGameNetworkMgr *this,string *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x50);
  lVar2 = FUN_0356beec(uVar5,*(undefined8 *)(this + 0x58));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    lVar3 = FUN_0356bf14(uVar5,lVar4);
    cVar1 = std::operator==((string *)(lVar3 + 0x20),param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  return *(undefined4 *)(lVar3 + 0x18);
}


/* CardGameNetworkMgr::GetMaxStarNumber(std::string const&) */

undefined4 __thiscall CardGameNetworkMgr::GetMaxStarNumber(CardGameNetworkMgr *this,string *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x50);
  lVar2 = FUN_0356beec(uVar5,*(undefined8 *)(this + 0x58));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return 0;
    }
    lVar3 = FUN_0356bf14(uVar5,lVar4);
    cVar1 = std::operator==((string *)(lVar3 + 0x20),param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  return *(undefined4 *)(lVar3 + 0x1c);
}


/* CardGameNetworkMgr::AddWorldStar(std::string const&, int) */

void __thiscall
CardGameNetworkMgr::AddWorldStar(CardGameNetworkMgr *this,string *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x50);
  lVar2 = FUN_0356beec(uVar5,*(undefined8 *)(this + 0x58));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return;
    }
    lVar3 = FUN_0356bf14(uVar5,lVar4);
    cVar1 = std::operator==((string *)(lVar3 + 0x20),param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + param_2;
  return;
}


/* CardGameNetworkMgr::SetWorldStar(std::string const&, int) */

void __thiscall
CardGameNetworkMgr::SetWorldStar(CardGameNetworkMgr *this,string *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x50);
  lVar2 = FUN_0356beec(uVar5,*(undefined8 *)(this + 0x58));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      return;
    }
    lVar3 = FUN_0356bf14(uVar5,lVar4);
    cVar1 = std::operator==((string *)(lVar3 + 0x20),param_1);
    lVar4 = lVar4 + 1;
  } while (cVar1 == '\0');
  *(int *)(lVar3 + 0x18) = param_2;
  return;
}


/* CardGameNetworkMgr::GetLevelStatus(std::string const&, bool, int) */

undefined4 __thiscall
CardGameNetworkMgr::GetLevelStatus
          (CardGameNetworkMgr *this,string *param_1,bool param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar7 = *(undefined8 *)(this + 0x50);
  lVar3 = FUN_0356beec(uVar7,*(undefined8 *)(this + 0x58));
  if (param_3 == 0) {
    if (param_2) {
      uVar9 = 0;
      for (lVar8 = 0; lVar8 != lVar3; lVar8 = lVar8 + 1) {
        lVar4 = FUN_0356bf14(uVar7,lVar8);
        cVar1 = std::operator==((string *)(lVar4 + 0x20),param_1);
        if (cVar1 != '\0') {
          uVar10 = *(undefined8 *)(lVar4 + 0x50);
          lVar4 = FUN_0356bf1c(uVar10,*(undefined8 *)(lVar4 + 0x58));
          if (lVar4 != 0) {
            lVar4 = FUN_0356bf58(uVar10,0);
            uVar9 = *(uint *)(lVar4 + 100);
          }
        }
      }
    }
    else {
      lVar8 = 0;
      uVar9 = 0;
      while (lVar4 = lVar8, lVar8 != lVar3) {
        while( true ) {
          lVar8 = lVar4 + 1;
          lVar4 = FUN_0356bf14(uVar7,lVar4);
          cVar1 = std::operator==((string *)(lVar4 + 0x20),param_1);
          if (cVar1 == '\0') break;
          lVar4 = FUN_0356bf58(*(undefined8 *)(lVar4 + 0x38),0);
          uVar9 = *(uint *)(lVar4 + 100);
          if (uVar9 == 0) {
            uVar9 = 1;
          }
          lVar4 = lVar8;
          if (lVar8 == lVar3) goto LAB_0356d094;
        }
      }
    }
  }
  else if (param_3 < 0) {
    if (param_2) {
      return 1;
    }
    uVar9 = 0;
    lVar8 = 0;
    while (lVar4 = lVar8 + 1, lVar8 != lVar3) {
      lVar6 = FUN_0356bf14(uVar7,lVar8);
      cVar1 = std::operator==((string *)(lVar6 + 0x20),param_1);
      lVar8 = lVar4;
      if (cVar1 != '\0') {
        uVar10 = *(undefined8 *)(lVar6 + 0x38);
        lVar4 = FUN_0356bf58(uVar10,(long)param_3);
        uVar9 = *(uint *)(lVar4 + 100);
        if (uVar9 == 0) {
          lVar4 = FUN_0356bf58(uVar10,(long)(param_3 + -1));
          uVar9 = (uint)(*(int *)(lVar4 + 100) == 2);
        }
      }
    }
  }
  else if (param_2) {
    lVar8 = 0;
    uVar9 = 0;
LAB_0356d164:
    lVar4 = lVar8;
    if (lVar8 != lVar3) {
      while( true ) {
        lVar8 = lVar4 + 1;
        lVar4 = FUN_0356bf14(uVar7,lVar4);
        cVar1 = std::operator==((string *)(lVar4 + 0x20),param_1);
        if (cVar1 == '\0') break;
        uVar10 = *(undefined8 *)(lVar4 + 0x50);
        uVar5 = FUN_0356bf1c(uVar10,*(undefined8 *)(lVar4 + 0x58));
        if (uVar5 <= (ulong)(long)param_3) break;
        lVar4 = FUN_0356bf58(uVar10,(long)param_3);
        uVar9 = *(uint *)(lVar4 + 100);
        lVar4 = lVar8;
        if (lVar8 == lVar3) goto LAB_0356d094;
      }
      goto LAB_0356d164;
    }
  }
  else {
    lVar8 = 0;
    uVar9 = 0;
LAB_0356d0e0:
    lVar4 = lVar8;
    if (lVar8 != lVar3) {
      while( true ) {
        lVar8 = lVar4 + 1;
        lVar4 = FUN_0356bf14(uVar7,lVar4);
        cVar1 = std::operator==((string *)(lVar4 + 0x20),param_1);
        if (cVar1 == '\0') break;
        uVar10 = *(undefined8 *)(lVar4 + 0x38);
        lVar4 = FUN_0356bf58(uVar10,(long)param_3);
        uVar9 = *(uint *)(lVar4 + 100);
        if (uVar9 != 0) break;
        lVar4 = FUN_0356bf58(uVar10,(long)(param_3 + -1));
        uVar9 = (uint)(*(int *)(lVar4 + 100) == 2);
        lVar4 = lVar8;
        if (lVar8 == lVar3) goto LAB_0356d094;
      }
      goto LAB_0356d0e0;
    }
  }
LAB_0356d094:
  uVar2 = 2;
  if ((uVar9 != 1) && (uVar2 = 3, uVar9 != 2)) {
    uVar2 = 1;
  }
  return uVar2;
}


/* CardGameNetworkMgr::OnObtainStarReward(std::string const&, int) */

void __thiscall
CardGameNetworkMgr::OnObtainStarReward(CardGameNetworkMgr *this,string *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(this + 0x50);
  lVar5 = 0;
  lVar2 = FUN_0356beec(uVar6,*(undefined8 *)(this + 0x58));
  if (lVar2 != 0) {
    do {
      lVar3 = FUN_0356bf14(uVar6,lVar5);
      cVar1 = std::operator==((string *)(lVar3 + 0x20),param_1);
      if ((cVar1 != '\0') && (-1 < param_2)) {
        uVar7 = *(undefined8 *)(lVar3 + 0x68);
        uVar4 = FUN_0356bf84(uVar7,*(undefined8 *)(lVar3 + 0x70));
        if ((ulong)(long)param_2 < uVar4) {
          lVar3 = FUN_0356bfac(uVar7,(long)param_2);
          *(undefined4 *)(lVar3 + 8) = 1;
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar2);
  }
  return;
}


/* CardGameNetworkMgr::CardGameNetworkMgr() */

void __thiscall CardGameNetworkMgr::CardGameNetworkMgr(CardGameNetworkMgr *this)

{
  undefined *puVar1;
  size_t in_x2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<CardGameNetworkMgr>::LazySingleton((LazySingleton<CardGameNetworkMgr> *)this);
  *(undefined ***)this = &PTR__CardGameNetworkMgr_0665ba50;
  Set8BytesTo0((string *)(this + 0x10));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x20));
  CardGameMainEntryData::CardGameMainEntryData((CardGameMainEntryData *)(this + 0x40));
  CardGameEndOfPlayData::CardGameEndOfPlayData((CardGameEndOfPlayData *)(this + 0x98));
  Set8BytesTo0((string *)(this + 0x108));
  this[8] = (CardGameNetworkMgr)0x0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  this[0x18] = (CardGameNetworkMgr)0x0;
  *(undefined4 *)(this + 0x100) = 0;
  std::string::append((string *)(this + 0x108),"",in_x2);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<CardGameNetworkMgr,void(CardGameNetworkMgr::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameNetworkMgr::GetLevelStarNumber(std::string const&, bool, MapEventItem const*) */

void __thiscall
CardGameNetworkMgr::GetLevelStarNumber
          (CardGameNetworkMgr *this,string *param_1,bool param_2,MapEventItem *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  MapEventItem *pMVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = 0;
  if (param_2) {
    iVar10 = -1;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    lVar3 = FUN_0356b98c(*(undefined8 *)(param_3 + 0xe8));
    WorldMapUtils::GetOrderedMainSpinePath((string *)(lVar3 + 0x38),(vector *)&local_20);
    lVar4 = FUN_0356bf68(local_20,local_18);
    lVar3 = 0;
    do {
      if (lVar3 == lVar4) break;
      puVar5 = (undefined8 *)FUN_0356bf74(local_20,lVar3);
      pMVar9 = (MapEventItem *)*puVar5;
      iVar2 = FUN_0356b988(*(undefined4 *)(pMVar9 + 0x14));
      if (iVar2 == 1) {
        iVar10 = iVar10 + 1;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != pMVar9);
    uVar11 = *(undefined8 *)(this + 0x50);
    lVar4 = FUN_0356beec(uVar11,*(undefined8 *)(this + 0x58));
    for (lVar3 = 0; lVar3 != lVar4; lVar3 = lVar3 + 1) {
      lVar6 = FUN_0356bf14(uVar11,lVar3);
      cVar1 = std::operator==((string *)(lVar6 + 0x20),param_1);
      if (cVar1 != '\0') {
        if (iVar10 != -1) {
          uVar11 = *(undefined8 *)(lVar6 + 0x50);
          iVar2 = 0;
          uVar7 = FUN_0356bf1c(uVar11,*(undefined8 *)(lVar6 + 0x58));
          if ((ulong)(long)iVar10 < uVar7) {
            lVar3 = FUN_0356bf58(uVar11,(long)iVar10);
            uVar11 = *(undefined8 *)(lVar3 + 0x48);
            iVar2 = 0;
            lVar4 = FUN_0356b994(uVar11,*(undefined8 *)(lVar3 + 0x50));
            lVar3 = 0;
            while (lVar3 != lVar4) {
              lVar6 = lVar3 + 1;
              piVar8 = (int *)FUN_0356bf7c(uVar11,lVar3);
              lVar3 = lVar6;
              if (*piVar8 == 1) {
                iVar2 = iVar2 + 1;
              }
            }
          }
          goto LAB_0356ed14;
        }
        break;
      }
    }
    iVar2 = 0;
LAB_0356ed14:
    std::vector<MapEventItem_const*,std::allocator<MapEventItem_const*>>::~vector
              ((vector<MapEventItem_const*,std::allocator<MapEventItem_const*>> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


/* CardGameNetworkMgr::~CardGameNetworkMgr() */

void __thiscall CardGameNetworkMgr::~CardGameNetworkMgr(CardGameNetworkMgr *this)

{
  *(undefined ***)this = &PTR__CardGameNetworkMgr_0665ba50;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::string::~string((string *)(this + 0x108));
  CardGameEndOfPlayData::~CardGameEndOfPlayData((CardGameEndOfPlayData *)(this + 0x98));
  CardGameMainEntryData::~CardGameMainEntryData((CardGameMainEntryData *)(this + 0x40));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x20));
  std::string::~string((string *)(this + 0x10));
  Sexy::LazySingleton<CardGameNetworkMgr>::~LazySingleton((LazySingleton<CardGameNetworkMgr> *)this)
  ;
  return;
}


/* CardGameNetworkMgr::~CardGameNetworkMgr() */

void __thiscall CardGameNetworkMgr::~CardGameNetworkMgr(CardGameNetworkMgr *this)

{
  ~CardGameNetworkMgr(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameNetworkMgr::GetChallengeStatus(int, bool) */

void CardGameNetworkMgr::GetChallengeStatus(int param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  CardGameNetworkMgr *this;
  long lVar3;
  undefined8 uVar4;
  char in_w2;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *in_x8;
  undefined4 local_24;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  this = (CardGameNetworkMgr *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  if (in_w2 == '\0') {
    lVar3 = FUN_0356bf14(*(undefined8 *)(this + 0x50),0);
    iVar1 = FUN_0356bf1c(*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(lVar3 + 0x40));
    iVar2 = GetCurrentPrefixWorldIndex(this);
    if ((int)(uint)param_2 < iVar1) {
      lVar3 = FUN_0356bf14(*(undefined8 *)(this + 0x50),(long)iVar2);
      uVar4 = *(undefined8 *)(lVar3 + 0x38);
      goto LAB_0356f110;
    }
  }
  else {
    lVar3 = FUN_0356bf14(*(undefined8 *)(this + 0x50),0);
    iVar1 = FUN_0356bf1c(*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(lVar3 + 0x58));
    iVar2 = GetCurrentPrefixWorldIndex(this);
    if ((int)(uint)param_2 < iVar1) {
      lVar3 = FUN_0356bf14(*(undefined8 *)(this + 0x50),(long)iVar2);
      uVar4 = *(undefined8 *)(lVar3 + 0x50);
LAB_0356f110:
      lVar3 = FUN_0356bf58(uVar4,(uint)param_2);
      std::vector<int,std::allocator<int>>::vector
                ((vector<int,std::allocator<int>> *)in_x8,(vector *)(lVar3 + 0x48));
      goto LAB_0356f0ac;
    }
  }
  local_24 = 0;
  std::vector<int,std::allocator<int>>::vector((ulong)avStack_20,(int *)0x3,(allocator *)&local_24);
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            (in_x8,(vector *)avStack_20);
  std::vector<int,std::allocator<int>>::~vector(avStack_20);
LAB_0356f0ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameNetworkMgr::RequestMainEntryData(std::function<void ()>) */

void __thiscall CardGameNetworkMgr::RequestMainEntryData(CardGameNetworkMgr *this,function *param_2)

{
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined1 auStack_28 [8];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x18] == (CardGameNetworkMgr)0x0) {
    this_00 = (NetworkMgr *)NetworkMgr::Instance();
    this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
              (avStack_20,&DAT_057515e0,1,auStack_28);
    INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_20,0,false);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(avStack_20);
    this[0x18] = (CardGameNetworkMgr)0x1;
    std::function<void()>::operator=((function<void()> *)(this + 0x20),param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameNetworkMgr::GetLevelBonus(bool, int) */

void CardGameNetworkMgr::GetLevelBonus(bool param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  vector *pvVar5;
  int in_w2;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *in_x8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetCurrentPrefixWorldIndex((CardGameNetworkMgr *)(ulong)param_1);
  uVar2 = *(undefined8 *)((CardGameNetworkMgr *)(ulong)param_1 + 0x50);
  if ((param_2 & 0xffU) == 0) {
    lVar3 = FUN_0356bf14(uVar2,(long)iVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x38);
    uVar4 = FUN_0356bf1c(uVar2,*(undefined8 *)(lVar3 + 0x40));
  }
  else {
    lVar3 = FUN_0356bf14(uVar2,(long)iVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x50);
    uVar4 = FUN_0356bf1c(uVar2,*(undefined8 *)(lVar3 + 0x58));
  }
  if ((ulong)(long)in_w2 < uVar4) {
    pvVar5 = (vector *)FUN_0356bf58(uVar2,(long)in_w2);
    std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::vector
              ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)in_x8,pvVar5
              );
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (in_x8,(vector *)avStack_20);
    std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::~vector
              ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)avStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameNetworkMgr::GetLevelFirstRewardBonus(bool, int) */

void CardGameNetworkMgr::GetLevelFirstRewardBonus(bool param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int in_w2;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *in_x8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetCurrentPrefixWorldIndex((CardGameNetworkMgr *)(ulong)param_1);
  uVar2 = *(undefined8 *)((CardGameNetworkMgr *)(ulong)param_1 + 0x50);
  if ((param_2 & 0xffU) == 0) {
    lVar3 = FUN_0356bf14(uVar2,(long)iVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x38);
    uVar4 = FUN_0356bf1c(uVar2,*(undefined8 *)(lVar3 + 0x40));
  }
  else {
    lVar3 = FUN_0356bf14(uVar2,(long)iVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x50);
    uVar4 = FUN_0356bf1c(uVar2,*(undefined8 *)(lVar3 + 0x58));
  }
  if ((ulong)(long)in_w2 < uVar4) {
    lVar3 = FUN_0356bf58(uVar2,(long)in_w2);
    std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::vector
              ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)in_x8,
               (vector *)(lVar3 + 0x18));
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (in_x8,(vector *)avStack_20);
    std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::~vector
              ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)avStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameNetworkMgr::GetLevelCardBonus(bool, int) */

void CardGameNetworkMgr::GetLevelCardBonus(bool param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int in_w2;
  vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *in_x8;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = GetCurrentPrefixWorldIndex((CardGameNetworkMgr *)(ulong)param_1);
  uVar2 = *(undefined8 *)((CardGameNetworkMgr *)(ulong)param_1 + 0x50);
  if ((param_2 & 0xffU) == 0) {
    lVar3 = FUN_0356bf14(uVar2,(long)iVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x38);
    uVar4 = FUN_0356bf1c(uVar2,*(undefined8 *)(lVar3 + 0x40));
  }
  else {
    lVar3 = FUN_0356bf14(uVar2,(long)iVar1);
    uVar2 = *(undefined8 *)(lVar3 + 0x50);
    uVar4 = FUN_0356bf1c(uVar2,*(undefined8 *)(lVar3 + 0x58));
  }
  if ((ulong)(long)in_w2 < uVar4) {
    lVar3 = FUN_0356bf58(uVar2,(long)in_w2);
    std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::vector
              ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)in_x8,
               (vector *)(lVar3 + 0x30));
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
              (in_x8,(vector *)avStack_20);
    std::vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>>::~vector
              ((vector<CardGameLevelBonusData,std::allocator<CardGameLevelBonusData>> *)avStack_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameNetworkMgr::syncMainEntryInfo() */

void __thiscall CardGameNetworkMgr::syncMainEntryInfo(CardGameNetworkMgr *this)

{
  int iVar1;
  ActiveItem aAStack_88 [24];
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar1);
  if (local_70 != '\0') {
    ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x40));
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameNetworkMgr::testResponse() */

void __thiscall CardGameNetworkMgr::testResponse(CardGameNetworkMgr *this)

{
  bool bVar1;
  
  if (this[0x18] != (CardGameNetworkMgr)0x0) {
    syncMainEntryInfo(this);
    this[0x18] = (CardGameNetworkMgr)0x0;
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x20));
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)(this + 0x20));
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameNetworkMgr::onNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
CardGameNetworkMgr::onNotifyRefreshActivityList(CardGameNetworkMgr *this,bool param_1,set *param_2)

{
  bool bVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1) && (this[0x18] != (CardGameNetworkMgr)0x0)) {
    local_1c = 0x2a65;
    local_18 = std::set<int,std::less<int>,std::allocator<int>>::find
                         ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_1c);
    local_10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
    if (bVar1) {
      syncMainEntryInfo(this);
    }
    this[0x18] = (CardGameNetworkMgr)0x0;
    bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x20));
    if (bVar1) {
      std::function<void()>::operator()((function<void()> *)(this + 0x20));
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameNetworkMgr::RequestEndPlayData(CardGameEndPlayParamData) */

void __thiscall CardGameNetworkMgr::RequestEndPlayData(CardGameNetworkMgr *this,byte *param_2)

{
  string *psVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  DNetwork *this_00;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2616];
  string asStack_2b0 [680];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  std::string::string(asStack_ce8,"type");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_ce8);
  if (*param_2 == 0) {
    pcVar3 = "0";
  }
  else {
    pcVar3 = "1";
  }
  std::string::append(psVar1,pcVar3,0x5594000);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_ce8,"world");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_ce8);
  thunk_FUN_05475e00(uVar2,param_2 + 8);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"level");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString((DString *)asStack_ce8,*(int *)(param_2 + 0x10));
  pcVar3 = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar1,pcVar3,(size_t)psVar1);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  std::string::string(asStack_ce8,"tgt");
  uVar2 = std::
          map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                        *)amStack_d18,asStack_ce8);
  thunk_FUN_05475e00(uVar2,param_2 + 0x18);
  std::string::~string(asStack_ce8);
  nop();
  uVar2 = FUN_0547429c(param_2 + 8);
  uVar4 = FUN_0547429c(param_2 + 0x18);
  Sexy::OutputDebugStrF
            ((wchar_t *)
             "CardGameNetworkMgr::RequestEndPlayData type = %d, world = %s, level = %d, tgt = %s",
             (ulong)*param_2,uVar2,(ulong)*(uint *)(param_2 + 0x10),uVar4);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_0356c5bc(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_2b0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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

