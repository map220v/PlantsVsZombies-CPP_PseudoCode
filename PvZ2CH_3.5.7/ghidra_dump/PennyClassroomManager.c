// Class: PennyClassroomManager


/* PennyClassroomManager::SetCurrentLevel(int, int) */

void __thiscall
PennyClassroomManager::SetCurrentLevel(PennyClassroomManager *this,int param_1,int param_2)

{
  *(int *)(this + 0xc) = param_1;
  *(int *)(this + 0x10) = param_2;
  return;
}


/* PennyClassroomManager::RequestMainUI() */

void __thiscall PennyClassroomManager::RequestMainUI(PennyClassroomManager *this)

{
  ActivityManager *this_00;
  
  this[0x14] = (PennyClassroomManager)0x1;
  this_00 = (ActivityManager *)Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::Request(this_00,0x2a5b,false,0);
  return;
}


/* PennyClassroomManager::PennyClassroomManager() */

void __thiscall PennyClassroomManager::PennyClassroomManager(PennyClassroomManager *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  Sexy::LazySingleton<PennyClassroomManager>::LazySingleton
            ((LazySingleton<PennyClassroomManager> *)this);
  *(undefined ***)this = &PTR__PennyClassroomManager_069cf6f0;
  NetworkPennyClassroomData::NetworkPennyClassroomData((NetworkPennyClassroomData *)(this + 0x18));
  *(undefined4 *)(this + 0xc) = 0;
  this[8] = (PennyClassroomManager)0x1;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x14] = (PennyClassroomManager)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifyRefreshActivityList);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,std::set<int,std::less<int>,std::allocator<int>>const&,Sexy::CBMemberTranslatorX<PennyClassroomManager,void(PennyClassroomManager::*)(bool,std::set<int,std::less<int>,std::allocator<int>>const&)>>
            ((MessageRouter *)puVar1,Message::NotifyRefreshActivityList,&local_40);
  return;
}


/* PennyClassroomManager::IsPennyClassroomLevel() */

bool PennyClassroomManager::IsPennyClassroomLevel(void)

{
  bool bVar1;
  long lVar2;
  
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    bVar1 = BoardHelpers::HasGameModuleInLevelDefinition<PennyClassroomModuleProperties>();
    return bVar1;
  }
  return false;
}


/* PennyClassroomManager::~PennyClassroomManager() */

void __thiscall PennyClassroomManager::~PennyClassroomManager(PennyClassroomManager *this)

{
  *(undefined ***)this = &PTR__PennyClassroomManager_069cf6f0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  NetworkPennyClassroomData::~NetworkPennyClassroomData((NetworkPennyClassroomData *)(this + 0x18));
  Sexy::LazySingleton<PennyClassroomManager>::~LazySingleton
            ((LazySingleton<PennyClassroomManager> *)this);
  return;
}


/* PennyClassroomManager::~PennyClassroomManager() */

void __thiscall PennyClassroomManager::~PennyClassroomManager(PennyClassroomManager *this)

{
  ~PennyClassroomManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomManager::CheckShopItemsSoldOut() */

void __thiscall PennyClassroomManager::CheckShopItemsSoldOut(PennyClassroomManager *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>::vector
            ((vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>> *)&local_20,
             (vector *)(this + 0x98));
  lVar1 = FUN_04de7fa0(local_20,local_18);
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      uVar4 = 1;
      goto LAB_04ded908;
    }
    lVar2 = FUN_04de7fd0(local_20,lVar3);
    lVar3 = lVar3 + 1;
  } while (*(int *)(lVar2 + 0xc) <= *(int *)(lVar2 + 0x10));
  uVar4 = 0;
LAB_04ded908:
  std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>::~vector
            ((vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* PennyClassroomManager::GetData() */

NetworkPennyClassroomData * PennyClassroomManager::GetData(void)

{
  long in_x0;
  NetworkPennyClassroomData *in_x8;
  
  NetworkPennyClassroomData::NetworkPennyClassroomData
            (in_x8,(NetworkPennyClassroomData *)(in_x0 + 0x18));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomManager::CheckNoticeTips() */

void __thiscall PennyClassroomManager::CheckNoticeTips(PennyClassroomManager *this)

{
  int iVar1;
  int iVar2;
  vector *pvVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
  ::vector((vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
            *)&local_38,(vector *)(this + 0x68));
  uVar6 = local_38;
  iVar1 = FUN_04de7fe8(local_38,local_30);
  if (0 < iVar1) {
    lVar7 = 0;
    do {
      pvVar3 = (vector *)FUN_04de7eec(uVar6,lVar7);
      std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>::vector
                ((vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>> *)&local_20,
                 pvVar3);
      uVar6 = local_20;
      iVar2 = FUN_04de7ef8(local_20,local_18);
      if (0 < iVar2) {
        lVar5 = 0;
        do {
          piVar4 = (int *)FUN_04de7f20(uVar6,lVar5);
          if (*piVar4 == 1) {
            uVar6 = 1;
            std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>::~vector
                      ((vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>> *)
                       &local_20);
            goto LAB_04dee930;
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < iVar2);
      }
      lVar7 = lVar7 + 1;
      std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>::~vector
                ((vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>> *)&local_20)
      ;
      uVar6 = local_38;
    } while ((int)lVar7 < iVar1);
  }
  uVar6 = 0;
LAB_04dee930:
  std::
  vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
  ::~vector((vector<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>,std::allocator<std::vector<PennyClassroomIconData,std::allocator<PennyClassroomIconData>>>>
             *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* PennyClassroomManager::LoadData(NetworkPennyClassroomData) */

void __thiscall
PennyClassroomManager::LoadData(PennyClassroomManager *this,NetworkPennyClassroomData *param_2)

{
  PennyClassroomManager PVar1;
  
  NetworkPennyClassroomData::operator=((NetworkPennyClassroomData *)(this + 0x18),param_2);
  PVar1 = (PennyClassroomManager)CheckNoticeTips(this);
  this[8] = PVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PennyClassroomManager::NotifyRefreshActivityList(bool, std::set<int, std::less<int>,
   std::allocator<int> > const&) */

void __thiscall
PennyClassroomManager::NotifyRefreshActivityList
          (PennyClassroomManager *this,bool param_1,set *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  UIPennyClassroom *this_00;
  int local_21c;
  ActiveItem aAStack_218 [8];
  undefined4 local_210;
  char local_200;
  undefined8 local_198 [25];
  undefined8 local_d0 [25];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x14] != (PennyClassroomManager)0x0) {
    this[0x14] = (PennyClassroomManager)0x0;
    local_21c = 0x2a5b;
    local_198[0] = std::set<int,std::less<int>,std::allocator<int>>::find
                             ((set<int,std::less<int>,std::allocator<int>> *)param_2,&local_21c);
    local_d0[0] = std::
                  map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)param_2);
    bVar1 = eastl::operator!=((rbtree_iterator *)local_198,(rbtree_iterator *)local_d0);
    if (bVar1) {
      iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
      ActivityManager::GetActiveItem(iVar3);
      cVar2 = FUN_04de78e8(local_210);
      if ((cVar2 != '\0') && (local_200 != '\0')) {
        NetworkPennyClassroomData::NetworkPennyClassroomData((NetworkPennyClassroomData *)local_198)
        ;
        cVar2 = ActiveItem::GetDataSerialized(aAStack_218,(RtObject *)local_198);
        if ((cVar2 != '\0') &&
           (this_00 = (UIPennyClassroom *)UISingletonDialog<UIPennyClassroom>::ShowDialog(),
           this_00 != (UIPennyClassroom *)0x0)) {
          NetworkPennyClassroomData::NetworkPennyClassroomData
                    ((NetworkPennyClassroomData *)local_d0,(NetworkPennyClassroomData *)local_198);
          UIPennyClassroom::SetData(this_00,(NetworkPennyClassroomData *)local_d0);
          NetworkPennyClassroomData::~NetworkPennyClassroomData
                    ((NetworkPennyClassroomData *)local_d0);
          UIPennyClassroom::InitView(this_00);
        }
        NetworkPennyClassroomData::~NetworkPennyClassroomData
                  ((NetworkPennyClassroomData *)local_198);
      }
      ActiveItem::~ActiveItem(aAStack_218);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

