// Class: WorldCupManager


/* WorldCupManager::setCurTeamID(int) */

void __thiscall WorldCupManager::setCurTeamID(WorldCupManager *this,int param_1)

{
  *(int *)(this + 0x50) = param_1;
  return;
}


/* WorldCupManager::OnMessageCallback(UIMessageBox*, int) */

void WorldCupManager::OnMessageCallback(UIMessageBox *param_1,int param_2)

{
  if (UISingletonDialog<UIMessageBox>::m_pInstance != (long *)0x0) {
    (**(code **)(*UISingletonDialog<UIMessageBox>::m_pInstance + 0x318))();
    UISingletonDialog<UIMessageBox>::m_pInstance = (long *)0x0;
  }
  return;
}


/* WorldCupManager::addWorldCupTikets(int) */

void __thiscall WorldCupManager::addWorldCupTikets(WorldCupManager *this,int param_1)

{
  *(int *)(this + 0x48) = *(int *)(this + 0x48) + param_1;
  return;
}


/* WorldCupManager::addBuyTicketTimes() */

void __thiscall WorldCupManager::addBuyTicketTimes(WorldCupManager *this)

{
  *(int *)(this + 0x74) = *(int *)(this + 0x74) + 1;
  return;
}


/* WorldCupManager::subscribeWorldCupTickets(int) */

void __thiscall WorldCupManager::subscribeWorldCupTickets(WorldCupManager *this,int param_1)

{
  *(int *)(this + 0x48) = *(int *)(this + 0x48) - param_1;
  return;
}


/* WorldCupManager::canPlayWorldCupGame() const */

bool __thiscall WorldCupManager::canPlayWorldCupGame(WorldCupManager *this)

{
  int iVar1;
  
  iVar1 = PakInterface::GetFileSearchOrder((PakInterface *)this);
  return 0 < iVar1;
}


/* WorldCupManager::addCurLoopNum() */

void __thiscall WorldCupManager::addCurLoopNum(WorldCupManager *this)

{
  if (7 < *(int *)(this + 0x4c) + 1) {
    *(undefined4 *)(this + 0x4c) = 7;
    this[0x90] = (WorldCupManager)0x1;
    return;
  }
  *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 1;
  return;
}


/* WorldCupManager::ClearData() */

void __thiscall WorldCupManager::ClearData(WorldCupManager *this)

{
  this[0x90] = (WorldCupManager)0x0;
  this[8] = (WorldCupManager)0x0;
  *(undefined4 *)(this + 0x4c) = 1;
  return;
}


/* WorldCupManager::setIsQuit(bool) */

void __thiscall WorldCupManager::setIsQuit(WorldCupManager *this,bool param_1)

{
  this[0x91] = (WorldCupManager)param_1;
  return;
}


/* WorldCupManager::getIsQuit() const */

WorldCupManager __thiscall WorldCupManager::getIsQuit(WorldCupManager *this)

{
  return this[0x91];
}


/* WorldCupManager::isNeedConsumeTickets() */

bool __thiscall WorldCupManager::isNeedConsumeTickets(WorldCupManager *this)

{
  return *(int *)(this + 0x4c) < 2;
}


/* WorldCupManager::getCurLoopNum() const */

int __thiscall WorldCupManager::getCurLoopNum(WorldCupManager *this)

{
  char cVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  cVar1 = PlayerInfo::GetHasPlayedWorldCup(this_01);
  iVar2 = 0;
  if ((cVar1 != '\0') && (iVar2 = *(int *)(this + 0x4c), iVar2 == 0)) {
    iVar2 = 1;
  }
  return iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldCupManager::setIsUnLockByTeamID(int, bool) */

void __thiscall WorldCupManager::setIsUnLockByTeamID(WorldCupManager *this,int param_1,bool param_2)

{
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x30));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x30));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
LAB_0395012c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == param_1) {
      *(bool *)(piVar2 + 9) = param_2;
      goto LAB_0395012c;
    }
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_18);
  } while( true );
}


/* WorldCupManager::WorldCupManager() */

void __thiscall WorldCupManager::WorldCupManager(WorldCupManager *this)

{
  Sexy::LazySingleton<WorldCupManager>::LazySingleton((LazySingleton<WorldCupManager> *)this);
  this[8] = (WorldCupManager)0x0;
  *(undefined ***)this = &PTR__WorldCupManager_066d1990;
  UIWorldCupConfig::UIWorldCupConfig((UIWorldCupConfig *)(this + 0x10));
  this[0x90] = (WorldCupManager)0x0;
  this[0x91] = (WorldCupManager)0x0;
  return;
}


/* WorldCupManager::isCanBuyTicketNow() const */

bool __thiscall WorldCupManager::isCanBuyTicketNow(WorldCupManager *this)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = std::vector<int,std::allocator<int>>::empty
                    ((vector<int,std::allocator<int>> *)(this + 0x58));
  bVar2 = false;
  if (cVar1 == '\0') {
    bVar2 = *(int *)(this + 0x74) < *(int *)(this + 0x70);
  }
  return bVar2;
}


/* WorldCupManager::getCurTicketPrice() const */

undefined4 __thiscall WorldCupManager::getCurTicketPrice(WorldCupManager *this)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = isCanBuyTicketNow(this);
  if (cVar1 == '\0') {
    return 0x32;
  }
  puVar2 = (undefined4 *)FUN_0394e074(*(undefined8 *)(this + 0x58),(long)*(int *)(this + 0x74));
  return *puVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldCupManager::getSunByTeamID(int) const */

void __thiscall WorldCupManager::getSunByTeamID(WorldCupManager *this,int param_1)

{
  bool bVar1;
  worldCupInfo *pwVar2;
  undefined8 local_40;
  undefined8 local_38;
  int local_30 [8];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40 = FUN_0394fdd4(*(undefined8 *)(this + 0x30));
  local_38 = FUN_0394fe24(*(undefined8 *)(this + 0x38));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) {
      local_10 = 0;
LAB_03951470:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_10);
    }
    pwVar2 = (worldCupInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
    ;
    worldCupInfo::worldCupInfo((worldCupInfo *)local_30,pwVar2);
    if (local_30[0] == param_1) {
      std::pair<void*const,std::vector<int,std::allocator<int>>>::~pair
                ((pair<void*const,std::vector<int,std::allocator<int>>> *)local_30);
      goto LAB_03951470;
    }
    std::pair<void*const,std::vector<int,std::allocator<int>>>::~pair
              ((pair<void*const,std::vector<int,std::allocator<int>>> *)local_30);
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_40);
  } while( true );
}


/* WorldCupManager::getCurStageSunNum() const */

void __thiscall WorldCupManager::getCurStageSunNum(WorldCupManager *this)

{
  getSunByTeamID(this,*(int *)(this + 0x50));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldCupManager::getIsUnLockByTeamID(int) const */

void __thiscall WorldCupManager::getIsUnLockByTeamID(WorldCupManager *this,int param_1)

{
  undefined1 uVar1;
  worldCupInfo *pwVar2;
  undefined8 local_40;
  undefined8 local_38;
  int local_30 [9];
  undefined1 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_40 = FUN_0394fdd4(*(undefined8 *)(this + 0x30));
  local_38 = FUN_0394fe24(*(undefined8 *)(this + 0x38));
  do {
    uVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!(bool)uVar1) {
LAB_03951550:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar1);
      }
      return;
    }
    pwVar2 = (worldCupInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
    ;
    worldCupInfo::worldCupInfo((worldCupInfo *)local_30,pwVar2);
    if (local_30[0] == param_1) {
      std::pair<void*const,std::vector<int,std::allocator<int>>>::~pair
                ((pair<void*const,std::vector<int,std::allocator<int>>> *)local_30);
      uVar1 = local_c;
      goto LAB_03951550;
    }
    std::pair<void*const,std::vector<int,std::allocator<int>>>::~pair
              ((pair<void*const,std::vector<int,std::allocator<int>>> *)local_30);
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_40);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldCupManager::getTeamPlantByTeamID(int) const */

void WorldCupManager::getTeamPlantByTeamID(int param_1)

{
  bool bVar1;
  worldCupInfo *pwVar2;
  int in_w1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_40;
  undefined8 local_38;
  int local_30 [2];
  vector avStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_40 = FUN_0394fdd4(*(undefined8 *)((ulong)(uint)param_1 + 0x30));
  local_38 = FUN_0394fe24(*(undefined8 *)((ulong)(uint)param_1 + 0x38));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) {
LAB_03951c78:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pwVar2 = (worldCupInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
    ;
    worldCupInfo::worldCupInfo((worldCupInfo *)local_30,pwVar2);
    if (local_30[0] == in_w1) {
      std::vector<int,std::allocator<int>>::operator=
                ((vector<int,std::allocator<int>> *)in_x8,avStack_28);
      std::pair<void*const,std::vector<int,std::allocator<int>>>::~pair
                ((pair<void*const,std::vector<int,std::allocator<int>>> *)local_30);
      goto LAB_03951c78;
    }
    std::pair<void*const,std::vector<int,std::allocator<int>>>::~pair
              ((pair<void*const,std::vector<int,std::allocator<int>>> *)local_30);
    __gnu_cxx::
    __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
    ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                  *)&local_40);
  } while( true );
}


/* WorldCupManager::getCurTeamPlantByTeamID() const */

void WorldCupManager::getCurTeamPlantByTeamID(void)

{
  int in_w0;
  
  getTeamPlantByTeamID(in_w0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldCupManager::UpdateWorldCupTicketLog(int) */

void __thiscall WorldCupManager::UpdateWorldCupTicketLog(WorldCupManager *this,int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_1c8 [16];
  string asStack_1b8 [8];
  string asStack_1b0 [8];
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_1b8,"");
  nop();
  uVar1 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar1);
  FUN_0546065c(auStack_168,param_1);
  FUN_05462824(asStack_190,auStack_178);
  FUN_05474278(asStack_1b8,asStack_190);
  std::string::~string(asStack_190);
  std::string::string(asStack_190,"");
  FUN_05462980(auStack_178,asStack_190);
  std::string::~string(asStack_190);
  nop();
  std::string::string(asStack_1b0,"2018_WINTER");
  std::string::string(asStack_1a0,"ICE_HOCKEY_TICKET");
  FUN_05475d88(asStack_198,asStack_1b8);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190,asStack_1a0,2,
             auStack_1c8);
  std::string::string(asStack_1a8,"");
  BehaviorLog::inGameBehavior(asStack_1b0,(vector *)asStack_190,asStack_1a8);
  std::string::~string(asStack_1a8);
  nop();
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  nop();
  std::string::~string(asStack_1b0);
  nop();
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_1b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WorldCupManager::~WorldCupManager() */

void __thiscall WorldCupManager::~WorldCupManager(WorldCupManager *this)

{
  *(undefined ***)this = &PTR__WorldCupManager_066d1990;
  UIWorldCupConfig::~UIWorldCupConfig((UIWorldCupConfig *)(this + 0x10));
  Sexy::LazySingleton<WorldCupManager>::~LazySingleton((LazySingleton<WorldCupManager> *)this);
  return;
}


/* WorldCupManager::~WorldCupManager() */

void __thiscall WorldCupManager::~WorldCupManager(WorldCupManager *this)

{
  ~WorldCupManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldCupManager::loadData() */

void __thiscall WorldCupManager::loadData(WorldCupManager *this)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar3);
  cVar1 = FUN_0394e068(local_80);
  uVar2 = 0;
  if ((cVar1 != '\0') && (uVar2 = 0, local_70 != '\0')) {
    uVar2 = ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)(this + 0x10));
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldCupManager::UpdateWorldCupEndGameLog(int, bool, int) */

void __thiscall
WorldCupManager::UpdateWorldCupEndGameLog
          (WorldCupManager *this,int param_1,bool param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  vector *pvVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ProfileMgr *pPVar11;
  PlayerInfo *pPVar12;
  char *__s;
  uint uVar13;
  ulong uVar14;
  string *this_00;
  undefined8 uVar15;
  undefined1 auStack_218 [8];
  string asStack_210 [8];
  string asStack_208 [8];
  string asStack_200 [8];
  string asStack_1f8 [8];
  string asStack_1f0 [8];
  string asStack_1e8 [8];
  DString aDStack_1e0 [16];
  undefined8 local_1d0 [3];
  DString aDStack_1b8 [16];
  DString aDStack_1a8 [16];
  DString aDStack_198 [16];
  DString local_188 [16];
  string asStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  string *this_01;
  
  local_8 = ___stack_chk_guard;
  uVar13 = (uint)param_2;
  std::string::string(asStack_210,"");
  nop();
  std::string::string(asStack_208,"");
  nop();
  std::string::string(asStack_200,"");
  nop();
  DString::DString(aDStack_1e0);
  std::string::string(asStack_1f8,"mat_2018NewYear_currency");
  nop();
  uVar3 = operator|(0x10,8);
  FUN_05462470(asStack_178,uVar3);
  FUN_0546065c(auStack_168,param_1);
  FUN_05462824((string *)local_1d0,asStack_178);
  FUN_05474278(asStack_210,(string *)local_1d0);
  std::string::~string((string *)local_1d0);
  std::string::string((string *)local_1d0,"");
  FUN_05462980(asStack_178,(string *)local_1d0);
  std::string::~string((string *)local_1d0);
  nop();
  if (param_2) {
    FUN_0546065c(auStack_168,1);
    FUN_05462824((string *)local_1d0,asStack_178);
    FUN_05474278(asStack_208,(string *)local_1d0);
    std::string::~string((string *)local_1d0);
    std::string::string((string *)local_1d0,"");
    FUN_05462980(asStack_178,(string *)local_1d0);
    std::string::~string((string *)local_1d0);
    nop();
    pvVar7 = (vector *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    std::
    vector<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>,std::allocator<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>>>
    ::vector((vector<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>,std::allocator<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>>>
              *)local_1d0,pvVar7);
    uVar14 = 0;
    uVar13 = 0;
    while( true ) {
      puVar9 = (undefined8 *)FUN_0394e1d8(local_1d0[0],(long)param_3);
      uVar15 = *puVar9;
      uVar10 = FUN_0394e1e4(uVar15,puVar9[1]);
      if (uVar10 <= uVar14) break;
      puVar8 = (undefined4 *)FUN_0394e20c(uVar15,uVar14);
      uVar3 = *puVar8;
      iVar1 = puVar8[1];
      iVar4 = MaterialItemMapper::GetInstance();
      NameMapperBase::GetNameForId(iVar4);
      cVar2 = std::operator==(asStack_1e8,asStack_1f8);
      std::string::~string(asStack_1e8);
      uVar6 = uVar13 + iVar1;
      if (cVar2 == '\0') {
        uVar6 = uVar13;
      }
      FUN_0546065c(auStack_168,uVar3);
      FUN_05462824(asStack_1e8,asStack_178);
      thunk_FUN_054757c0(asStack_200,asStack_1e8);
      std::string::~string(asStack_1e8);
      std::string::string(asStack_1e8,"");
      FUN_05462980(asStack_178,asStack_1e8);
      std::string::~string(asStack_1e8);
      nop();
      FUN_05475ad8(asStack_200,&DAT_055d8588);
      FUN_0546065c(auStack_168,iVar1);
      FUN_05462824(asStack_1e8,asStack_178);
      thunk_FUN_054757c0(asStack_200,asStack_1e8);
      std::string::~string(asStack_1e8);
      std::string::string(asStack_1e8,"");
      FUN_05462980(asStack_178,asStack_1e8);
      std::string::~string(asStack_1e8);
      nop();
      FUN_05475ad8(asStack_200,&DAT_05594620);
      uVar14 = uVar14 + 1;
      uVar13 = uVar6;
    }
    std::
    vector<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>,std::allocator<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>>>
    ::~vector((vector<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>,std::allocator<std::vector<wcAwardInfo,std::allocator<wcAwardInfo>>>>
               *)local_1d0);
    pPVar11 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar12 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar11);
    if (pPVar12 == (PlayerInfo *)0x0) {
      uVar6 = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = PlayerInfo::GetMaterialNum(pPVar12,asStack_1f8);
      uVar6 = uVar5 - uVar13;
    }
  }
  else {
    FUN_0546065c(auStack_168,0);
    FUN_05462824((string *)local_1d0,asStack_178);
    FUN_05474278(asStack_208,(string *)local_1d0);
    std::string::~string((string *)local_1d0);
    std::string::string((string *)local_1d0,"");
    FUN_05462980(asStack_178,(string *)local_1d0);
    std::string::~string((string *)local_1d0);
    nop();
    pPVar11 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar12 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar11);
    if (pPVar12 == (PlayerInfo *)0x0) {
      uVar13 = 0;
      uVar6 = 0;
      uVar5 = uVar13;
    }
    else {
      uVar6 = PlayerInfo::GetMaterialNum(pPVar12,asStack_1f8);
      uVar5 = uVar6;
    }
  }
  DString::DString(aDStack_1b8,asStack_1f8);
  DString::DString(aDStack_1a8,uVar13);
  DString::DString(aDStack_198,uVar5);
  DString::DString(local_188,uVar6);
  std::vector<DString,std::allocator<DString>>::vector
            ((vector<DString,std::allocator<DString>> *)local_1d0,aDStack_1b8,4,asStack_1e8);
  DString::join(aDStack_1e0,(vector *)local_1d0,";");
  std::vector<DString,std::allocator<DString>>::~vector
            ((vector<DString,std::allocator<DString>> *)local_1d0);
  this_00 = asStack_178;
  do {
    this_01 = this_00;
    this_00 = this_01 + -0x10;
    (*(code *)**(undefined8 **)this_00)(this_00);
  } while (this_00 != (string *)aDStack_1b8);
  __s = (char *)DString::c_str(aDStack_1e0);
  std::string::string(asStack_1f0,__s);
  nop();
  std::string::string(asStack_1e8,"2018_WINTER");
  std::string::string(this_00,"ICE_HOCKEY");
  FUN_05475d88(this_01 + -8,asStack_210);
  FUN_05475d88(this_01,asStack_208);
  FUN_05475d88(this_01 + 8,asStack_200);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)local_1d0,this_00,4,auStack_218);
  BehaviorLog::inGameBehavior(asStack_1e8,(vector *)local_1d0,asStack_1f0);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_1d0);
  std::string::~string(this_01 + 8);
  std::string::~string(this_01);
  std::string::~string(this_01 + -8);
  std::string::~string(this_00);
  nop();
  std::string::~string(asStack_1e8);
  nop();
  std::string::~string(asStack_1f0);
  FUN_054617bc(asStack_178);
  std::string::~string(asStack_1f8);
  DString::~DString(aDStack_1e0);
  std::string::~string(asStack_200);
  std::string::~string(asStack_208);
  std::string::~string(asStack_210);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

