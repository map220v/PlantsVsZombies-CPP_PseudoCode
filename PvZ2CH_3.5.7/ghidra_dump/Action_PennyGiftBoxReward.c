// Class: Action_PennyGiftBoxReward


/* Action_PennyGiftBoxReward::~Action_PennyGiftBoxReward() */

void __thiscall
Action_PennyGiftBoxReward::~Action_PennyGiftBoxReward(Action_PennyGiftBoxReward *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a340;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* Action_PennyGiftBoxReward::~Action_PennyGiftBoxReward() */

void __thiscall
Action_PennyGiftBoxReward::~Action_PennyGiftBoxReward(Action_PennyGiftBoxReward *this)

{
  ~Action_PennyGiftBoxReward(this);
  AK::FreeHook(this);
  return;
}


/* Action_PennyGiftBoxReward::StaticGetClass() */

long * Action_PennyGiftBoxReward::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"Action_PennyGiftBoxReward",uVar2,StaticNew);
  return sClass;
}


/* Action_PennyGiftBoxReward::GetClass() const */

long * Action_PennyGiftBoxReward::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"Action_PennyGiftBoxReward",uVar2,StaticNew);
  return sClass;
}


/* Action_PennyGiftBoxReward::Action_PennyGiftBoxReward() */

void __thiscall
Action_PennyGiftBoxReward::Action_PennyGiftBoxReward(Action_PennyGiftBoxReward *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a340;
  return;
}


/* Action_PennyGiftBoxReward::StaticNew() */

Action_PennyGiftBoxReward * Action_PennyGiftBoxReward::StaticNew(void)

{
  Action_PennyGiftBoxReward *this;
  
  this = ::operator_new(0x18);
  Action_PennyGiftBoxReward(this);
  return this;
}


/* Action_PennyGiftBoxReward::CreateIfNeed(bool&) */

Action_PennyGiftBoxReward * Action_PennyGiftBoxReward::CreateIfNeed(bool *param_1)

{
  char cVar1;
  ProfileMgr *this;
  long lVar2;
  Action_PennyGiftBoxReward *this_00;
  
  if (*param_1 == false) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar2 = ProfileMgr::GetCurrentProfile(this);
    if (((lVar2 != 0) && (cVar1 = RiftUtils::IsWorldMapButtonsEnabled(), cVar1 != '\0')) &&
       (DAT_06b103a0 == '\0')) {
      DAT_06b103a0 = 1;
      this_00 = ::operator_new(0x18);
      this_00[8] = (Action_PennyGiftBoxReward)0x0;
      this_00[9] = (Action_PennyGiftBoxReward)0x0;
      this_00[10] = (Action_PennyGiftBoxReward)0x0;
      *(undefined4 *)(this_00 + 0xc) = 0;
      *(undefined4 *)(this_00 + 0x10) = 0;
      *(undefined8 *)this_00 = 0;
      Action_PennyGiftBoxReward(this_00);
      return this_00;
    }
  }
  return (Action_PennyGiftBoxReward *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_PennyGiftBoxReward::Start() */

void __thiscall Action_PennyGiftBoxReward::Start(Action_PennyGiftBoxReward *this)

{
  undefined *puVar1;
  NetworkMgr *this_00;
  INetworkMsgProcess *this_01;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  wchar_t local_78 [2];
  pair<wchar_t_const,wchar_t> apStack_70 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnNotifyRefreshActivityList);
  local_a0 = local_50;
  uStack_98 = uStack_48;
  local_90 = local_40;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<Action_PennyGiftBoxReward,void(Action_PennyGiftBoxReward::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_a0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x58);
  Sexy::Delegate0::Delegate0<Action_PennyGiftBoxReward,void(Action_PennyGiftBoxReward::*)()>
            (aDStack_38,avStack_68);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ShowRewardFinish,aDStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  local_78[1] = 1;
  local_78[0] = L'⪅';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>(apStack_70,local_78,local_78 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_68,
             (pair *)apStack_70);
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  this_01 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_00);
  INetworkMsgProcess::RequestActivityList(this_01,(vector *)avStack_68,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Action_PennyGiftBoxReward::OnNotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
Action_PennyGiftBoxReward::OnNotifyRefreshActivityList
          (Action_PennyGiftBoxReward *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ProfileMgr *pPVar5;
  ulong uVar6;
  TGALogMgr *pTVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 *puVar11;
  PlayerInfo *this_00;
  undefined8 uVar12;
  UIRedPacketResult *this_01;
  rbtree_iterator *__n;
  size_t __n_00;
  string asStack_2d8 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_2d0 [24];
  undefined4 local_2b8 [6];
  undefined8 local_2a0;
  undefined1 auStack_298 [40];
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined8 local_260 [3];
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 local_228;
  size_t local_218;
  undefined8 local_210;
  ActivityTypeID aAStack_200 [4];
  ActivityTypeID aAStack_1fc [4];
  ActiveItem aAStack_1f8 [8];
  undefined4 local_1f0;
  char local_1e0;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_2b8[0] = 0x2a85;
  local_2a0 = std::set<int,std::less<int>,std::allocator<int>>::find
                        ((set<int,std::less<int>,std::allocator<int>> *)param_2,(int *)local_2b8);
  local_260[0] = std::
                 map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        *)param_2);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_2a0,(rbtree_iterator *)local_260);
  if (bVar1) {
    pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    ProfileMgr::GetCurrentProfile(pPVar5);
    iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar3);
    cVar2 = FUN_0454b298(local_1f0);
    if ((cVar2 != '\0') && (local_1e0 != '\0')) {
      uVar4 = operator|(0x10,8);
      FUN_05462470(auStack_178,uVar4);
      __n = (rbtree_iterator *)&local_2a0;
      std::string::string((string *)local_260,"");
      FUN_05462980(auStack_178,(string *)local_260);
      std::string::~string((string *)local_260);
      nop();
      PennyGiftBoxSettleRewardData::PennyGiftBoxSettleRewardData
                ((PennyGiftBoxSettleRewardData *)local_260);
      ActiveItem::GetDataSerialized(aAStack_1f8,(RtObject *)local_260);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_2d0);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_2b8);
      uVar12 = local_248;
      uVar6 = FUN_0454b2ec(local_248,local_240);
      if (uVar6 != 0) {
        uVar9 = 0;
        while (uVar9 < uVar6) {
          piVar10 = (int *)FUN_0454b300(uVar12,uVar9);
          __n = (rbtree_iterator *)0x0;
          ProfileChangeItemAmount(*piVar10,piVar10[1],false);
          GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_2a0);
          piVar10 = (int *)FUN_0454b300(local_248,uVar9);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_2d0,piVar10);
          lVar8 = FUN_0454b300(local_248,uVar9);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)local_2b8,(int *)(lVar8 + 4));
          puVar11 = (undefined4 *)FUN_0454b300(local_248,uVar9);
          uVar12 = FUN_0546065c(auStack_168,*puVar11);
          uVar12 = FUN_054603b8(uVar12,&DAT_05593348);
          lVar8 = FUN_0454b300(local_248,uVar9);
          uVar12 = FUN_0546065c(uVar12,*(undefined4 *)(lVar8 + 4));
          FUN_054603b8(uVar12,&DAT_05594620);
          uVar12 = local_248;
          uVar6 = FUN_0454b2ec(local_248,local_240);
          uVar9 = uVar9 + 1;
        }
        TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)&local_2a0);
        std::string::append((string *)&local_2a0,"8",(size_t)__n);
        FUN_05462824(asStack_2d8,auStack_178);
        FUN_05474278(auStack_268,asStack_2d8);
        std::string::~string(asStack_2d8);
        std::to_string<ActivityTypeID>(aAStack_200);
        FUN_05474278(auStack_270,asStack_2d8);
        std::string::~string(asStack_2d8);
        pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogPennyGiftBox(pTVar7,(TGAPennyGiftBoxData *)&local_2a0);
        TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)&local_2a0);
      }
      lVar8 = FUN_0454b2ec(local_230,local_228);
      if (lVar8 != 0) {
        std::string::string((string *)&local_2a0,"");
        FUN_05462980(auStack_178,(rbtree_iterator *)&local_2a0);
        std::string::~string((string *)&local_2a0);
        nop();
        uVar6 = 0;
        while( true ) {
          uVar12 = local_230;
          uVar9 = FUN_0454b2ec(local_230,local_228);
          if (uVar9 <= uVar6) break;
          piVar10 = (int *)FUN_0454b300(uVar12,uVar6);
          ProfileChangeItemAmount(*piVar10,piVar10[1],false);
          GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_2a0);
          piVar10 = (int *)FUN_0454b300(local_230,uVar6);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_2d0,piVar10);
          lVar8 = FUN_0454b300(local_230,uVar6);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)local_2b8,(int *)(lVar8 + 4));
          puVar11 = (undefined4 *)FUN_0454b300(local_230,uVar6);
          uVar12 = FUN_0546065c(auStack_168,*puVar11);
          uVar12 = FUN_054603b8(uVar12,&DAT_05593348);
          lVar8 = FUN_0454b300(local_230,uVar6);
          uVar12 = FUN_0546065c(uVar12,*(undefined4 *)(lVar8 + 4));
          FUN_054603b8(uVar12,&DAT_05594620);
          uVar6 = uVar6 + 1;
        }
        uVar6 = 0;
        while( true ) {
          __n_00 = local_218;
          uVar9 = FUN_0454b30c(local_218,local_210);
          if (uVar9 <= uVar6) break;
          piVar10 = (int *)FUN_0454b318(__n_00,uVar6);
          ProfileChangeItemAmount(*piVar10,piVar10[1],false);
          GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)&local_2a0);
          piVar10 = (int *)FUN_0454b318(local_218,uVar6);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)avStack_2d0,piVar10);
          lVar8 = FUN_0454b318(local_218,uVar6);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)local_2b8,(int *)(lVar8 + 4));
          puVar11 = (undefined4 *)FUN_0454b318(local_218,uVar6);
          uVar12 = FUN_0546065c(auStack_168,*puVar11);
          uVar12 = FUN_054603b8(uVar12,&DAT_05593348);
          lVar8 = FUN_0454b318(local_218,uVar6);
          uVar12 = FUN_0546065c(uVar12,*(undefined4 *)(lVar8 + 4));
          FUN_054603b8(uVar12,&DAT_05594620);
          uVar6 = uVar6 + 1;
        }
        TGAPlantWarsData::TGAPlantWarsData((TGAPlantWarsData *)&local_2a0);
        std::string::append((string *)&local_2a0,"8",__n_00);
        FUN_05462824(asStack_2d8,auStack_178);
        FUN_05474278(auStack_268,asStack_2d8);
        std::string::~string(asStack_2d8);
        std::to_string<ActivityTypeID>(aAStack_1fc);
        FUN_05474278(auStack_270,asStack_2d8);
        std::string::~string(asStack_2d8);
        pPVar5 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar5);
        std::string::string(asStack_2d8,"mat_penny_gift_token");
        iVar3 = PlayerInfo::GetMaterialNum(this_00,asStack_2d8);
        std::string::~string(asStack_2d8);
        nop();
        std::string::string(asStack_2d8,"mat_penny_gift_token");
        PlayerInfo::SetMaterialNum(this_00,asStack_2d8,0);
        std::string::~string(asStack_2d8);
        nop();
        std::string::string(asStack_2d8,"");
        FUN_05462980(auStack_178,asStack_2d8);
        std::string::~string(asStack_2d8);
        nop();
        uVar12 = FUN_0546065c(auStack_168,iVar3);
        uVar12 = FUN_054603b8(uVar12,&DAT_05593348);
        uVar12 = FUN_0546065c(uVar12,-iVar3);
        uVar12 = FUN_054603b8(uVar12,&DAT_05593348);
        FUN_054603b8(uVar12,&DAT_05644d68);
        FUN_05462824(asStack_2d8,auStack_178);
        FUN_05474278(auStack_298,asStack_2d8);
        std::string::~string(asStack_2d8);
        pTVar7 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
        TGALogMgr::LogPennyGiftBox(pTVar7,(TGAPennyGiftBoxData *)&local_2a0);
        TGAPlantWarsData::~TGAPlantWarsData((TGAPlantWarsData *)&local_2a0);
      }
      FUN_05462824(asStack_2d8,auStack_178);
      cVar2 = std::vector<int,std::allocator<int>>::empty
                        ((vector<int,std::allocator<int>> *)local_2b8);
      if (cVar2 == '\0') {
        this_01 = (UIRedPacketResult *)
                  UIRedPacketResult::create((vector *)local_2b8,(vector *)avStack_2d0,true);
        TodStringTranslate(L"[PENNY_GIFT_RANK_REWARD]");
        UIRedPacketResult::setTitle(this_01,(wstring *)&local_2a0);
        FUN_05476c50((rbtree_iterator *)&local_2a0);
      }
      std::string::~string(asStack_2d8);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_2b8);
      std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_2d0);
      PennyGiftBoxSettleRewardData::~PennyGiftBoxSettleRewardData
                ((PennyGiftBoxSettleRewardData *)local_260);
      FUN_054617bc(auStack_178);
    }
    ActiveItem::~ActiveItem(aAStack_1f8);
  }
  (**(code **)(*(long *)this + 0x58))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

