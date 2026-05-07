// Class: RedPacketRewardInfo


/* RedPacketRewardInfo::~RedPacketRewardInfo() */

void __thiscall RedPacketRewardInfo::~RedPacketRewardInfo(RedPacketRewardInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_067ff120;
  std::vector<LaternRiddleDisplayConfig,std::allocator<LaternRiddleDisplayConfig>>::~vector
            ((vector<LaternRiddleDisplayConfig,std::allocator<LaternRiddleDisplayConfig>> *)
             (this + 0x50));
  std::vector<RedPacketRankRewardInfo,std::allocator<RedPacketRankRewardInfo>>::~vector
            ((vector<RedPacketRankRewardInfo,std::allocator<RedPacketRankRewardInfo>> *)
             (this + 0x38));
  std::vector<RewardElementInfo,std::allocator<RewardElementInfo>>::~vector
            ((vector<RewardElementInfo,std::allocator<RewardElementInfo>> *)(this + 0x20));
  std::vector<RewardElementInfo,std::allocator<RewardElementInfo>>::~vector
            ((vector<RewardElementInfo,std::allocator<RewardElementInfo>> *)(this + 8));
  nop();
  return;
}


/* RedPacketRewardInfo::~RedPacketRewardInfo() */

void __thiscall RedPacketRewardInfo::~RedPacketRewardInfo(RedPacketRewardInfo *this)

{
  ~RedPacketRewardInfo(this);
  AK::FreeHook(this);
  return;
}


/* RedPacketRewardInfo::GetCurrentDisplayConfig() */

void __thiscall RedPacketRewardInfo::GetCurrentDisplayConfig(RedPacketRewardInfo *this)

{
  FUN_041ae18c(*(undefined8 *)(this + 0x50),*(undefined4 *)(this + 0x68));
  return;
}


/* RedPacketRewardInfo::DropCount() */

undefined4 RedPacketRewardInfo::DropCount(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Sexy::Rand(100);
  iVar3 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
  uVar2 = 1;
  if ((0x13 < iVar3) && (uVar2 = 2, 0x3b < iVar3)) {
    uVar2 = 3;
    if (0x59 < iVar3) {
      uVar2 = 4;
    }
    return uVar2;
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPacketRewardInfo::UseExtraElement() */

void RedPacketRewardInfo::UseExtraElement(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ProfileMgr *this;
  PlayerInfo *this_00;
  RedPacketRewardInfo *this_01;
  long lVar4;
  bool bVar5;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  bVar5 = false;
  if (this_00 != (PlayerInfo *)0x0) {
    this_01 = (RedPacketRewardInfo *)LawnApp::GetRedPacketRewardInfo(gLawnApp);
    lVar4 = GetCurrentDisplayConfig(this_01);
    FUN_05475d88(asStack_10,lVar4 + 0x60);
    iVar2 = PlayerInfo::GetPlantPieceCount(this_00,asStack_10,false);
    cVar1 = PlayerInfo::GetIsPlantUnlocked(this_00,asStack_10);
    if (cVar1 == '\0') {
      bVar5 = 0x8b < iVar2;
    }
    else {
      bVar5 = false;
      uVar3 = PlayerInfo::GetPlantStarLevel(this_00,asStack_10,false);
      switch(uVar3) {
      case 2:
        bVar5 = 99 < iVar2;
        break;
      case 3:
        bVar5 = 0x31 < iVar2;
        break;
      case 4:
      case 5:
      case 6:
        bVar5 = true;
        break;
      case 0xffffffff:
      case 0:
      case 1:
        bVar5 = 0x81 < iVar2;
      }
    }
    std::string::~string(asStack_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPacketRewardInfo::GetTotalWeight() */

void __thiscall RedPacketRewardInfo::GetTotalWeight(RedPacketRewardInfo *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar4 = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = UseExtraElement();
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  if (cVar1 != '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x20);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    iVar4 = iVar4 + *(int *)(lVar3 + 0xc);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPacketRewardInfo::GetReward() */

void __thiscall RedPacketRewardInfo::GetReward(RedPacketRewardInfo *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  iVar5 = 0;
  local_8 = ___stack_chk_guard;
  iVar3 = GetTotalWeight(this);
  iVar3 = Sexy::Rand(iVar3 + 1);
  cVar1 = UseExtraElement();
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  if (cVar1 != '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x20);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    iVar5 = iVar5 + *(int *)(lVar4 + 0xc);
    if (iVar3 <= iVar5) goto LAB_041af320;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  lVar4 = 0;
LAB_041af320:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPacketRewardInfo::GetRankRewardInfo(int) */

void __thiscall RedPacketRewardInfo::GetRankRewardInfo(RedPacketRewardInfo *this,int param_1)

{
  bool bVar1;
  float *pfVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pfVar2 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((*pfVar2 <= (float)param_1) && ((float)param_1 <= pfVar2[1])) goto LAB_041af3e0;
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_18);
  }
  pfVar2 = (float *)0x0;
LAB_041af3e0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pfVar2);
}


/* RedPacketRewardInfo::RedPacketRewardInfo() */

void __thiscall RedPacketRewardInfo::RedPacketRewardInfo(RedPacketRewardInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_067ff120;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  return;
}


/* RedPacketRewardInfo::StaticNew() */

RedPacketRewardInfo * RedPacketRewardInfo::StaticNew(void)

{
  RedPacketRewardInfo *this;
  
  this = ::operator_new(0x70);
  RedPacketRewardInfo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPacketRewardInfo::StaticClassInit() */

void RedPacketRewardInfo::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  undefined4 local_38 [2];
  pair<std::string,unsigned_int> apStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_38[0] = 0;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"new_year",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"dragon_boat",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    std::string::string((string *)apStack_30,"LaternRiddleType");
    (*pcVar3)(plVar2,apStack_30,avStack_20,0);
    std::string::~string((string *)apStack_30);
    nop();
  }
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  ~vector((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
           *)avStack_20);
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"LaternRiddleDisplayConfig");
    (*pcVar3)(plVar2,avStack_20,FUN_041ae638,0x68,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"RewardElementInfo");
    (*pcVar3)(plVar2,avStack_20,FUN_041ae474,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"RankRewardEntity");
    (*pcVar3)(plVar2,avStack_20,FUN_041ae328,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"RedPacketRankRewardInfo");
    (*pcVar3)(plVar2,avStack_20,FUN_041af7c0,0x20,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"RedPacketRewardInfo");
    (*pcVar3)(plVar2,avStack_20,FUN_041b0d48,0x70,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RedPacketRewardInfo::StaticGetClass() */

long * RedPacketRewardInfo::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"RedPacketRewardInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RedPacketRewardInfo::GetClass() const */

long * RedPacketRewardInfo::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"RedPacketRewardInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPacketRewardInfo::InitDate() */

void __thiscall RedPacketRewardInfo::InitDate(RedPacketRewardInfo *this)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_00;
  RedPacketRewardInfo *this_01;
  vector *pvVar3;
  undefined4 *puVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x50);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_041b1eec:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      this_01 = Sexy::RtObject::Cast<RedPacketRewardInfo>(this_00);
      if (this_01 != (RedPacketRewardInfo *)0x0) {
        pvVar3 = (vector *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_end((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this_01);
        std::vector<RewardElementInfo,std::allocator<RewardElementInfo>>::operator=
                  ((vector<RewardElementInfo,std::allocator<RewardElementInfo>> *)(this + 8),pvVar3)
        ;
        pvVar3 = (vector *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_rightmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)this_01);
        std::vector<RewardElementInfo,std::allocator<RewardElementInfo>>::operator=
                  ((vector<RewardElementInfo,std::allocator<RewardElementInfo>> *)(this + 0x20),
                   pvVar3);
        pvVar3 = (vector *)GachaConfig::GetGachaPlantRewardList((GachaConfig *)this_01);
        std::vector<RedPacketRankRewardInfo,std::allocator<RedPacketRankRewardInfo>>::operator=
                  ((vector<RedPacketRankRewardInfo,std::allocator<RedPacketRankRewardInfo>> *)
                   (this + 0x38),pvVar3);
        pvVar3 = (vector *)Reflection::CRefSymbolDb::GetClasses((CRefSymbolDb *)this_01);
        std::vector<LaternRiddleDisplayConfig,std::allocator<LaternRiddleDisplayConfig>>::operator=
                  ((vector<LaternRiddleDisplayConfig,std::allocator<LaternRiddleDisplayConfig>> *)
                   (this + 0x50),pvVar3);
        puVar4 = (undefined4 *)
                 RechargeRewardConfig::getDefaultBanner((RechargeRewardConfig *)this_01);
        *(undefined4 *)(this + 0x68) = *puVar4;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
        goto LAB_041b1eec;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RedPacketRewardInfo::GetPrizePool(int) */

void RedPacketRewardInfo::GetPrizePool(int param_1)

{
  int iVar1;
  string *psVar2;
  int in_w1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar3;
  int iVar4;
  RedPackContent aRStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  if (0 < in_w1) {
    iVar4 = 0;
    do {
      iVar3 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      iVar1 = DropCount();
      if (0 < iVar1) {
        do {
          psVar2 = (string *)GetReward((RedPacketRewardInfo *)(ulong)(uint)param_1);
          if (psVar2 != (string *)0x0) {
            RedPackContent::RedPackContent(aRStack_30,psVar2,*(int *)(psVar2 + 8));
            std::vector<RedPackContent,std::allocator<RedPackContent>>::push_back
                      ((vector<RedPackContent,std::allocator<RedPackContent>> *)avStack_20,
                       aRStack_30);
            std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
                      ((pair<std::string_const,Sexy::PILifeValueTable> *)aRStack_30);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 != iVar1);
      }
      iVar4 = iVar4 + 1;
      std::
      vector<std::vector<RedPackContent,std::allocator<RedPackContent>>,std::allocator<std::vector<RedPackContent,std::allocator<RedPackContent>>>>
      ::push_back((vector<std::vector<RedPackContent,std::allocator<RedPackContent>>,std::allocator<std::vector<RedPackContent,std::allocator<RedPackContent>>>>
                   *)in_x8,(vector *)avStack_20);
      std::vector<RedPackContent,std::allocator<RedPackContent>>::~vector
                ((vector<RedPackContent,std::allocator<RedPackContent>> *)avStack_20);
    } while (iVar4 != in_w1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

