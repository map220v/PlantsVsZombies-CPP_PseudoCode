// Class: ChristmasChargeManager


/* ChristmasChargeManager::~ChristmasChargeManager() */

void __thiscall ChristmasChargeManager::~ChristmasChargeManager(ChristmasChargeManager *this)

{
  *(undefined ***)this = &PTR__ChristmasChargeManager_066ca610;
  Sexy::LazySingleton<ChristmasChargeManager>::~LazySingleton
            ((LazySingleton<ChristmasChargeManager> *)this);
  return;
}


/* ChristmasChargeManager::~ChristmasChargeManager() */

void __thiscall ChristmasChargeManager::~ChristmasChargeManager(ChristmasChargeManager *this)

{
  ~ChristmasChargeManager(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasChargeManager::getAvatarIdByPlantID(int) const */

void ChristmasChargeManager::getAvatarIdByPlantID(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  NameMapperBase *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  this = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
  uVar2 = NameMapperBase::GetIdForName(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasChargeManager::getPlantChipIdByPlantID(int) */

void ChristmasChargeManager::getPlantChipIdByPlantID(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  NameMapperBase *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  this = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
  uVar2 = NameMapperBase::GetIdForName(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* ChristmasChargeManager::ChristmasChargeManager() */

void __thiscall ChristmasChargeManager::ChristmasChargeManager(ChristmasChargeManager *this)

{
  Sexy::LazySingleton<ChristmasChargeManager>::LazySingleton
            ((LazySingleton<ChristmasChargeManager> *)this);
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__ChristmasChargeManager_066ca610;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasChargeManager::getAlreadyUsedID(std::vector<int, std::allocator<int> > const&) */

void __thiscall
ChristmasChargeManager::getAlreadyUsedID(ChristmasChargeManager *this,vector *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined4 *puVar5;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
    uVar4 = 0;
  }
  else {
    local_20 = FUN_039275dc(*(undefined8 *)param_1);
    local_18 = FUN_0392762c(*(undefined8 *)(param_1 + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      puVar5 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20)
      ;
      iVar3 = PlantNameMapperServerID::GetInstance();
      NameMapperBase::GetNameForId(iVar3);
      cVar1 = PlayerInfo::IsCurrentPlantLevelMax(this_01,asStack_10,false);
      if (cVar1 == '\0') {
        uVar4 = *puVar5;
        std::string::~string(asStack_10);
        goto LAB_0392773c;
      }
      std::string::~string(asStack_10);
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_20);
    }
    uVar4 = 0;
  }
LAB_0392773c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasChargeManager::IsVecContainID(std::vector<int, std::allocator<int> > const&, int) const
    */

void __thiscall
ChristmasChargeManager::IsVecContainID(ChristmasChargeManager *this,vector *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  bVar2 = false;
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<int,std::allocator<int>>::empty((vector<int,std::allocator<int>> *)param_1);
  if (cVar1 == '\0') {
    local_18 = FUN_039275dc(*(undefined8 *)param_1);
    local_10 = FUN_0392762c(*(undefined8 *)(param_1 + 8));
    while ((bVar2 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2
           && (piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                         ((exception_ptr *)&local_18), *piVar3 != param_2))) {
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasChargeManager::getOriginalID(std::vector<int, std::allocator<int> > const&,
   std::vector<int, std::allocator<int> > const&) const */

void __thiscall
ChristmasChargeManager::getOriginalID(ChristmasChargeManager *this,vector *param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  uint *puVar5;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
    uVar4 = 0;
  }
  else {
    local_20 = FUN_039275dc(*(undefined8 *)param_1);
    local_18 = FUN_0392762c(*(undefined8 *)(param_1 + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      puVar5 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      uVar4 = *puVar5;
      Sexy::OutputDebugStrF((wchar_t *)"ChristmasChargeManager::getOriginalID %d",(ulong)uVar4);
      cVar1 = IsVecContainID(this,param_2,uVar4);
      if (cVar1 == '\0') {
        iVar3 = PlantNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar3);
        cVar1 = PlayerInfo::IsCurrentPlantLevelMax(this_01,asStack_10,false);
        if (cVar1 == '\0') {
          std::string::~string(asStack_10);
          goto LAB_03927940;
        }
        std::string::~string(asStack_10);
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_20);
    }
    uVar4 = 0;
  }
LAB_03927940:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasChargeManager::getOriginalUnLockID(std::vector<int, std::allocator<int> > const&,
   std::vector<int, std::allocator<int> > const&) const */

void __thiscall
ChristmasChargeManager::getOriginalUnLockID
          (ChristmasChargeManager *this,vector *param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  uint *puVar5;
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) {
    uVar4 = 0;
  }
  else {
    local_20 = FUN_039275dc(*(undefined8 *)param_1);
    local_18 = FUN_0392762c(*(undefined8 *)(param_1 + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      puVar5 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      uVar4 = *puVar5;
      Sexy::OutputDebugStrF
                ((wchar_t *)"ChristmasChargeManager::getOriginalUnLockID %d",(ulong)uVar4);
      cVar1 = IsVecContainID(this,param_2,uVar4);
      if (cVar1 == '\0') {
        iVar3 = PlantNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar3);
        cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_10);
        if (cVar1 == '\0') {
          std::string::~string(asStack_10);
          goto LAB_03927a7c;
        }
        std::string::~string(asStack_10);
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_20);
    }
    uVar4 = 0;
  }
LAB_03927a7c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasChargeManager::UpdateRewardBehaviorEventLog(std::vector<S2C_WechatReward,
   std::allocator<S2C_WechatReward> >&) */

void __thiscall
ChristmasChargeManager::UpdateRewardBehaviorEventLog(ChristmasChargeManager *this,vector *param_1)

{
  bool bVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  vector *pvVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  string asStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  std::string::string(asStack_20,"2018_Christmas_Recharge_Piece");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_38,asStack_20);
  std::string::~string(asStack_20);
  nop();
  iVar2 = PlayerInfo::GetNumTodayRechargeCurrency(this_01);
  uVar7 = 0x14;
  if (0x32 < iVar2) {
    uVar6 = 0x32;
    if (100 < iVar2) {
      uVar6 = 100;
    }
    uVar7 = (ulong)uVar6;
  }
  Sexy::StrFormat("pay%d",asStack_68,uVar7);
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_38,asStack_68);
  pvVar3 = (vector *)ActivityConfig::GetChristmasProtectData((ActivityConfig *)this_01);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_20,pvVar3);
  Set8BytesTo0(asStack_60);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)asStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40), bVar1) {
    uVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    FUN_05475d88((string *)&local_50,uVar4);
    thunk_FUN_054757c0(asStack_60,(string *)&local_50);
    FUN_05475ad8(asStack_60,&DAT_05593348);
    std::string::~string((string *)&local_50);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_38,asStack_60);
  Set8BytesTo0(asStack_58);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)param_1);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)param_1);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    puVar5 = (uint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    Sexy::StrFormat("%d*%d",(string *)&local_40,(ulong)*puVar5,(ulong)puVar5[1]);
    thunk_FUN_054757c0(asStack_58,(string *)&local_40);
    FUN_05475ad8(asStack_58,&DAT_05593348);
    std::string::~string((string *)&local_40);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  std::string::string((string *)&local_40,"Join");
  BehaviorLog::event((string *)&local_40,(vector *)avStack_38,asStack_58);
  std::string::~string((string *)&local_40);
  nop();
  std::string::~string(asStack_58);
  std::string::~string(asStack_60);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)asStack_20);
  std::string::~string(asStack_68);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasChargeManager::addAward(CDFReceiveReward const&) */

void __thiscall
ChristmasChargeManager::addAward(ChristmasChargeManager *this,CDFReceiveReward *param_1)

{
  bool bVar1;
  ChristmasChargeReward *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  int *piVar2;
  NetworkMgr *this_03;
  INetworkMsgProcess *this_04;
  wchar_t local_48 [2];
  undefined8 local_40;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ChristmasChargeReward *)UISingletonDialog<ChristmasChargeReward>::ShowDialog();
  ChristmasChargeReward::loadData(this_00,(vector *)(param_1 + 0x18));
  ChristmasChargeReward::initView(this_00);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  NewYearChargeManager::trimAwardData((vector *)this);
  UpdateRewardBehaviorEventLog(this,(vector *)avStack_38);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_38);
  local_20[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(avStack_38);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)local_20);
    if (!bVar1) break;
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    if (*piVar2 == 0xbc0) {
      PlayerInfo::AddGems(this_02,piVar2[1],true);
    }
    else {
      PlayerInfo::AddCommonGachaReward((int)this_02,*piVar2,SUB41(piVar2[1],0),false);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  local_48[1] = 1;
  local_48[0] = L'⧛';
  std::pair<wchar_t_const,wchar_t>::pair<wchar_t,wchar_t,void>
            ((pair<wchar_t_const,wchar_t> *)&local_40,local_48,local_48 + 1);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20,
             (pair *)&local_40);
  this_03 = (NetworkMgr *)NetworkMgr::Instance();
  this_04 = (INetworkMsgProcess *)NetworkMgr::GetNewNetWorkProcess(this_03);
  INetworkMsgProcess::RequestActivityList(this_04,(vector *)local_20,0,true);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_20);
  std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::~vector
            ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasChargeManager::addNumTodayChargeCurrency(int) */

void __thiscall
ChristmasChargeManager::addNumTodayChargeCurrency(ChristmasChargeManager *this,int param_1)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03924b84(local_80);
  if ((cVar1 == '\0') || (local_70 == '\0')) {
    ActiveItem::~ActiveItem(aAStack_88);
  }
  else {
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + param_1;
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasChargeManager::GetConfig(ChagreDoubleFesivalConfig&) */

void __thiscall
ChristmasChargeManager::GetConfig(ChristmasChargeManager *this,ChagreDoubleFesivalConfig *param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03924b84(local_80);
  cVar3 = '\0';
  if ((cVar1 != '\0') && (cVar3 = local_70, local_70 != '\0')) {
    ActiveItem::GetDataSerialized(aAStack_88,(RtObject *)param_1);
  }
  ActiveItem::~ActiveItem(aAStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasChargeManager::getChristmasValuablePlantID() */

void __thiscall ChristmasChargeManager::getChristmasValuablePlantID(ChristmasChargeManager *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 local_170;
  ActiveItem aAStack_168 [8];
  undefined4 local_160;
  char local_150;
  ChagreDoubleFesivalConfig aCStack_e8 [8];
  vector avStack_e0 [24];
  vector<int,std::allocator<int>> avStack_c8 [192];
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03924b84(local_160);
  if ((cVar1 == '\0') || (local_150 == '\0')) goto LAB_0392e55c;
  ChagreDoubleFesivalConfig::ChagreDoubleFesivalConfig(aCStack_e8);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_168,(RtObject *)aCStack_e8);
  if (cVar1 == '\0') {
LAB_0392e5b4:
    iVar3 = 0;
  }
  else {
    iVar3 = getOriginalUnLockID(this,avStack_e0,(vector *)avStack_c8);
    if (iVar3 == 0) {
      iVar3 = getOriginalID(this,avStack_e0,(vector *)avStack_c8);
      if (iVar3 == 0) {
        iVar3 = getAlreadyUsedID(this,(vector *)avStack_c8);
        if (iVar3 == 0) {
          cVar1 = std::vector<int,std::allocator<int>>::empty(avStack_c8);
          if (cVar1 == '\0') {
            local_170 = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                 *)avStack_c8);
            piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_170)
            ;
            iVar3 = *piVar4;
            if (iVar3 != 0) goto LAB_0392e5b8;
          }
          cVar1 = std::vector<int,std::allocator<int>>::empty
                            ((vector<int,std::allocator<int>> *)avStack_e0);
          if (cVar1 != '\0') goto LAB_0392e5b4;
          local_170 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)avStack_e0);
          piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_170);
          iVar3 = *piVar4;
        }
      }
    }
  }
LAB_0392e5b8:
  ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig(aCStack_e8);
LAB_0392e55c:
  ActiveItem::~ActiveItem(aAStack_168);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasChargeManager::getCurPlantIDFromServer() */

void ChristmasChargeManager::getCurPlantIDFromServer(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ActiveItem aAStack_168 [8];
  undefined4 local_160;
  char local_150;
  ChagreDoubleFesivalConfig aCStack_e8 [8];
  undefined8 local_e0 [3];
  undefined8 local_c8;
  undefined8 local_c0;
  long local_8;
  
  uVar4 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03924b84(local_160);
  if (cVar1 == '\0') goto LAB_0392e6c4;
  ChagreDoubleFesivalConfig::ChagreDoubleFesivalConfig(aCStack_e8);
  cVar1 = ActiveItem::GetDataSerialized(aAStack_168,(RtObject *)aCStack_e8);
  if ((cVar1 == '\0') || (local_150 == '\0')) {
LAB_0392e714:
    uVar4 = 0;
  }
  else {
    cVar1 = std::vector<int,std::allocator<int>>::empty
                      ((vector<int,std::allocator<int>> *)&local_c8);
    if (cVar1 == '\0') {
      iVar2 = FUN_03924b90(local_c8,local_c0);
      puVar3 = (undefined4 *)FUN_03924bb0(local_c8,(long)(iVar2 + -1));
      uVar4 = *puVar3;
    }
    else {
      cVar1 = std::vector<int,std::allocator<int>>::empty
                        ((vector<int,std::allocator<int>> *)local_e0);
      if (cVar1 != '\0') goto LAB_0392e714;
      puVar3 = (undefined4 *)FUN_03924bb0(local_e0[0],0);
      uVar4 = *puVar3;
    }
  }
  ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig(aCStack_e8);
LAB_0392e6c4:
  ActiveItem::~ActiveItem(aAStack_168);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasChargeManager::getGivePlantIDTime() const */

void ChristmasChargeManager::getGivePlantIDTime(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ActiveItem aAStack_168 [8];
  undefined4 local_160;
  char local_150;
  ChagreDoubleFesivalConfig aCStack_e8 [208];
  undefined8 local_18;
  long local_8;
  
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar2);
  cVar1 = FUN_03924b84(local_160);
  if ((cVar1 != '\0') && (local_150 != '\0')) {
    ChagreDoubleFesivalConfig::ChagreDoubleFesivalConfig(aCStack_e8);
    cVar1 = ActiveItem::GetDataSerialized(aAStack_168,(RtObject *)aCStack_e8);
    uVar3 = local_18;
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig(aCStack_e8);
  }
  ActiveItem::~ActiveItem(aAStack_168);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* ChristmasChargeManager::isActivitySameDay() const */

void ChristmasChargeManager::isActivitySameDay(void)

{
  long lVar1;
  BaseBufferResource *this;
  long lVar2;
  
  lVar1 = getGivePlantIDTime();
  this = (BaseBufferResource *)ServerTime::Instance();
  lVar2 = Sexy::BaseBufferResource::GetPtr(this);
  LawnApp::isSameDay(gLawnApp,lVar1,lVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChristmasChargeManager::NewYearChargeAward() */

void __thiscall ChristmasChargeManager::NewYearChargeAward(ChristmasChargeManager *this)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  NetworkMgr *this_02;
  long *plVar12;
  ulong uVar13;
  int local_1f4;
  undefined4 local_1f0;
  int local_1ec;
  string asStack_1e8 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_1e0 [24];
  vector<int,std::allocator<int>> avStack_1c8 [24];
  vector<int,std::allocator<int>> avStack_1b0 [24];
  vector<int,std::allocator<int>> avStack_198 [24];
  vector<int,std::allocator<int>> avStack_180 [24];
  ActiveItem aAStack_168 [8];
  undefined4 local_160;
  char local_150;
  ChagreDoubleFesivalConfig aCStack_e8 [8];
  vector<int,std::allocator<int>> avStack_e0 [48];
  undefined8 local_b0;
  undefined8 local_a8;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar4 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
  ActivityManager::GetActiveItem(iVar4);
  cVar3 = FUN_03924b84(local_160);
  if (cVar3 != '\0') {
    ChagreDoubleFesivalConfig::ChagreDoubleFesivalConfig(aCStack_e8);
    cVar3 = ActiveItem::GetDataSerialized(aAStack_168,(RtObject *)aCStack_e8);
    if (((cVar3 != '\0') && (local_150 != '\0')) &&
       (cVar3 = std::vector<int,std::allocator<int>>::empty(avStack_e0), cVar3 == '\0')) {
      uVar5 = PlayerInfo::GetNumTodayRechargeCurrency(this_01);
      Sexy::OutputDebugStrF((wchar_t *)"NewYearChargeAward today recharge  =  %d",(ulong)uVar5);
      iVar6 = ImageLib::Image::GetWidth((Image *)this);
      Sexy::BaseTaskResource::GetType((BaseTaskResource *)this);
      uVar7 = getPlantChipIdByPlantID((int)this);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_1e0);
      iVar4 = iVar6;
      for (uVar13 = (ulong)iVar6; uVar9 = FUN_039252c8(local_b0,local_a8), uVar13 < uVar9;
          uVar13 = uVar13 + 1) {
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)avStack_1c8);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)avStack_1b0);
        piVar10 = (int *)FUN_03924b9c(local_b0,uVar13);
        if ((int)uVar5 < *piVar10) {
          std::vector<int,std::allocator<int>>::~vector(avStack_1b0);
          std::vector<int,std::allocator<int>>::~vector(avStack_1c8);
          break;
        }
        Sexy::FlagsMod::FlagsMod((FlagsMod *)&local_1f0);
        local_1f0 = uVar7;
        lVar11 = FUN_03924b9c(local_b0,uVar13);
        local_1ec = *(int *)(lVar11 + 4);
        std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::push_back
                  ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)avStack_1e0,
                   (S2C_WechatReward *)&local_1f0);
        piVar10 = (int *)FUN_03924b9c(local_b0,uVar13);
        iVar1 = *piVar10;
        std::vector<int,std::allocator<int>>::push_back(avStack_1c8,(int *)&local_1f0);
        std::vector<int,std::allocator<int>>::push_back(avStack_1c8,&local_1ec);
        iVar8 = PlantChipNameMapperServerID::GetInstance();
        NameMapperBase::GetNameForId(iVar8);
        local_1f4 = PlayerInfo::GetPlantPieceCount(this_01,asStack_1e8,false);
        std::vector<int,std::allocator<int>>::push_back(avStack_1b0,(int *)&local_1f0);
        std::vector<int,std::allocator<int>>::push_back(avStack_1b0,&local_1f4);
        puVar2 = gMessageRouter;
        if (iVar1 != 0) {
          std::vector<int,std::allocator<int>>::vector(avStack_198,(vector *)avStack_1c8);
          std::vector<int,std::allocator<int>>::vector(avStack_180,(vector *)avStack_1b0);
          MessageRouter::
          Post<int,std::vector<int,std::allocator<int>>const&,std::vector<int,std::allocator<int>>const&,int,std::vector<int,std::allocator<int>>,std::vector<int,std::allocator<int>>>
                    ((MessageRouter *)puVar2,Message::DoubleFestivalRechargeReward,iVar1,avStack_198
                     ,avStack_180);
          std::vector<int,std::allocator<int>>::~vector(avStack_180);
          std::vector<int,std::allocator<int>>::~vector(avStack_198);
        }
        iVar4 = iVar4 + 1;
        std::string::~string(asStack_1e8);
        std::vector<int,std::allocator<int>>::~vector(avStack_1b0);
        std::vector<int,std::allocator<int>>::~vector(avStack_1c8);
      }
      if (iVar6 < iVar4) {
        WorldMap_LuaButtonsImpl::RegisterHandler((WorldMap_LuaButtonsImpl *)this,iVar4);
        this_02 = (NetworkMgr *)NetworkMgr::Instance();
        plVar12 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
        (**(code **)(*plVar12 + 0x260))(plVar12,0x29db,avStack_1e0,iVar4,uVar5);
      }
      std::vector<S2C_WechatReward,std::allocator<S2C_WechatReward>>::~vector
                ((vector<S2C_WechatReward,std::allocator<S2C_WechatReward>> *)avStack_1e0);
      ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig(aCStack_e8);
      ActiveItem::~ActiveItem(aAStack_168);
      goto LAB_0392fb1c;
    }
    ChagreDoubleFesivalConfig::~ChagreDoubleFesivalConfig(aCStack_e8);
  }
  ActiveItem::~ActiveItem(aAStack_168);
LAB_0392fb1c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

