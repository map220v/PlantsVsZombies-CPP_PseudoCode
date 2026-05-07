// Class: ConsumptionRewardInfo


/* ConsumptionRewardInfo::~ConsumptionRewardInfo() */

void __thiscall ConsumptionRewardInfo::~ConsumptionRewardInfo(ConsumptionRewardInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_068024d0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20));
  std::vector<TopicItem,std::allocator<TopicItem>>::~vector
            ((vector<TopicItem,std::allocator<TopicItem>> *)(this + 8));
  nop();
  return;
}


/* ConsumptionRewardInfo::~ConsumptionRewardInfo() */

void __thiscall ConsumptionRewardInfo::~ConsumptionRewardInfo(ConsumptionRewardInfo *this)

{
  ~ConsumptionRewardInfo(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardInfo::StaticClassInit() */

void ConsumptionRewardInfo::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RewardItem");
    (*pcVar3)(plVar2,asStack_10,FUN_041d052c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"TopicItem");
    (*pcVar3)(plVar2,asStack_10,FUN_041d1138,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ConsumptionRewardInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_041d14ec,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConsumptionRewardInfo::StaticGetClass() */

long * ConsumptionRewardInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ConsumptionRewardInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ConsumptionRewardInfo::GetClass() const */

long * ConsumptionRewardInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"ConsumptionRewardInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardInfo::GetCurrentTopicIndex() */

void __thiscall ConsumptionRewardInfo::GetCurrentTopicIndex(ConsumptionRewardInfo *this)

{
  char cVar1;
  string *psVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = 0;
  do {
    uVar5 = *(undefined8 *)(this + 8);
    uVar6 = uVar4 & 0xffffffff;
    uVar3 = FUN_041d0400(uVar5,*(undefined8 *)(this + 0x10));
    if (uVar3 <= uVar4) {
      uVar6 = 0;
      break;
    }
    psVar2 = (string *)FUN_041d0428(uVar5,uVar4);
    LawnApp::GetActivityConfig();
    ActivityConfig::GetConsumptionValidTopic();
    cVar1 = std::operator==(psVar2,asStack_10);
    std::string::~string(asStack_10);
    uVar4 = uVar4 + 1;
  } while (cVar1 == '\0');
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


/* ConsumptionRewardInfo::IsExsit(std::string&, std::string&) */

void __thiscall
ConsumptionRewardInfo::IsExsit(ConsumptionRewardInfo *this,string *param_1,string *param_2)

{
  bool bVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  bVar1 = std::operator==(param_1,"plant_");
  if (bVar1) {
    PlayerInfo::GetIsPlantUnlocked(this_01,param_2);
    return;
  }
  bVar1 = std::operator==(param_1,"avatar_piece_");
  if (!bVar1) {
    return;
  }
  PlayerInfo::IsPlantAvatarUnLocked(this_01,param_2,0,0);
  return;
}


/* ConsumptionRewardInfo::SetCurrentTopicItemFromServer(std::string) */

TopicItem * ConsumptionRewardInfo::SetCurrentTopicItemFromServer(TopicItem *param_1)

{
  TopicItem::TopicItem(param_1);
  return param_1;
}


/* ConsumptionRewardInfo::ConsumptionRewardInfo() */

void __thiscall ConsumptionRewardInfo::ConsumptionRewardInfo(ConsumptionRewardInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_068024d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* ConsumptionRewardInfo::StaticNew() */

ConsumptionRewardInfo * ConsumptionRewardInfo::StaticNew(void)

{
  ConsumptionRewardInfo *this;
  
  this = ::operator_new(0x38);
  ConsumptionRewardInfo(this);
  return this;
}


/* ConsumptionRewardInfo::GetReplaceItem(TopicItem&) */

void __thiscall
ConsumptionRewardInfo::GetReplaceItem(ConsumptionRewardInfo *this,TopicItem *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(param_1 + 0x28));
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)(param_1 + 0x28));
  FUN_041d1c48(uVar1,uVar2,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardInfo::RepalceReward(TopicItem&, std::string&) */

void __thiscall
ConsumptionRewardInfo::RepalceReward(ConsumptionRewardInfo *this,TopicItem *param_1,string *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = GetReplaceItem(this,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x28));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_031dcc6c((string *)&local_10,param_1 + 0x20,param_2);
    FUN_05474278(uVar2,(string *)&local_10);
    std::string::~string((string *)&local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardInfo::ReplaceExtra(TopicItem&) */

void __thiscall ConsumptionRewardInfo::ReplaceExtra(ConsumptionRewardInfo *this,TopicItem *param_1)

{
  bool bVar1;
  string *this_00;
  long lVar2;
  size_t __n;
  undefined8 local_18;
  undefined8 local_10;
  size_t local_8;
  
  local_8 = ___stack_chk_guard;
  __n = ___stack_chk_guard;
  local_18 = GetReplaceItem(this,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x28));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    this_00 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    std::string::append(this_00,"coin",__n);
    lVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    *(undefined4 *)(lVar2 + 0x10) = 100000;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardInfo::GetMainPlantName(TopicItem&) */

void ConsumptionRewardInfo::GetMainPlantName(TopicItem *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x1;
  string *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(in_x1 + 0x28);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  local_18 = FUN_041d1fcc(uVar2,uVar3,in_x1);
  lVar4 = FUN_05474178(in_x1 + 0x20);
  if (lVar4 != 0) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar1) {
      uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      uVar3 = FUN_05474178(in_x1 + 0x20);
      FUN_05475ffc(uVar2,uVar3,0xffffffffffffffff);
      goto LAB_041d208c;
    }
  }
  std::string::string(in_x8,"");
  nop();
LAB_041d208c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardInfo::GetCurrentTopicItem() */

void ConsumptionRewardInfo::GetCurrentTopicItem(void)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  char cVar2;
  TopicItem *in_x0;
  undefined8 uVar3;
  undefined8 uVar4;
  TopicItem *pTVar5;
  string *psVar6;
  TopicItem *in_x8;
  string asStack_30 [8];
  undefined8 local_28;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(in_x0 + 8);
  TopicItem::TopicItem(in_x8);
  LawnApp::GetActivityConfig();
  ActivityConfig::GetConsumptionValidTopic();
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this);
  local_28 = FUN_041d1858(uVar3,uVar4,asStack_30);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_10);
  if (bVar1) {
    pTVar5 = (TopicItem *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    TopicItem::operator=(in_x8,pTVar5);
    GetMainPlantName(in_x0);
    cVar2 = FUN_0547419c(asStack_20);
    if (cVar2 == '\0') {
      cVar2 = IsExsit((ConsumptionRewardInfo *)in_x0,(string *)(in_x8 + 0x20),asStack_20);
      if (cVar2 != '\0') {
        local_18 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(in_x0 + 0x20));
        local_10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(in_x0 + 0x20));
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
              bVar1) {
          psVar6 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
          ;
          cVar2 = IsExsit((ConsumptionRewardInfo *)in_x0,(string *)(in_x8 + 0x20),psVar6);
          if (cVar2 == '\0') {
            RepalceReward((ConsumptionRewardInfo *)in_x0,in_x8,psVar6);
            goto LAB_041d28e0;
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        }
        ReplaceExtra((ConsumptionRewardInfo *)in_x0,in_x8);
      }
    }
LAB_041d28e0:
    std::string::~string(asStack_20);
  }
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConsumptionRewardInfo::InitDate() */

void __thiscall ConsumptionRewardInfo::InitDate(ConsumptionRewardInfo *this)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_00;
  ConsumptionRewardInfo *pCVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x55);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_041d2ed0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pCVar3 = Sexy::RtObject::Cast<ConsumptionRewardInfo>(this_00);
    if (pCVar3 != (ConsumptionRewardInfo *)0x0) {
      std::vector<TopicItem,std::allocator<TopicItem>>::operator=
                ((vector<TopicItem,std::allocator<TopicItem>> *)(this + 8),(vector *)(pCVar3 + 8));
      std::vector<std::string,std::allocator<std::string>>::operator=
                ((vector<std::string,std::allocator<std::string>> *)(this + 0x20),
                 (vector *)(pCVar3 + 0x20));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      goto LAB_041d2ed0;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
  } while( true );
}

