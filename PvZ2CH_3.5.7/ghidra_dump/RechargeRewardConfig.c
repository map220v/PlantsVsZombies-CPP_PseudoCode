// Class: RechargeRewardConfig


/* RechargeRewardConfig::getDefaultBanner() */

RechargeRewardConfig * __thiscall RechargeRewardConfig::getDefaultBanner(RechargeRewardConfig *this)

{
  return this + 0x68;
}


/* RechargeRewardConfig::RechargeRewardConfig() */

void __thiscall RechargeRewardConfig::RechargeRewardConfig(RechargeRewardConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0692a370;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  Set8BytesTo0(this + 0x68);
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  return;
}


/* RechargeRewardConfig::~RechargeRewardConfig() */

void __thiscall RechargeRewardConfig::~RechargeRewardConfig(RechargeRewardConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0692a370;
  std::string::~string((string *)(this + 0x68));
  std::vector<RechargeReward,std::allocator<RechargeReward>>::~vector
            ((vector<RechargeReward,std::allocator<RechargeReward>> *)(this + 0x50));
  std::vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>>::~vector
            ((vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>> *)
             (this + 0x38));
  std::vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>>::~vector
            ((vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>> *)
             (this + 0x20));
  std::vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>>::~vector
            ((vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>> *)
             (this + 8));
  nop();
  return;
}


/* RechargeRewardConfig::~RechargeRewardConfig() */

void __thiscall RechargeRewardConfig::~RechargeRewardConfig(RechargeRewardConfig *this)

{
  ~RechargeRewardConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardConfig::StaticClassInit() */

void RechargeRewardConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"RechargeReward");
    (*pcVar3)(plVar2,asStack_10,FUN_049e0994,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RechargeRewardContentConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_049e15b0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RechargeRewardConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_049e19e0,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeRewardConfig::StaticGetClass() */

long * RechargeRewardConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RechargeRewardConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RechargeRewardConfig::GetClass() const */

long * RechargeRewardConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"RechargeRewardConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RechargeRewardConfig::getCurrentAvailableContent(int const&) */

long __thiscall
RechargeRewardConfig::getCurrentAvailableContent(RechargeRewardConfig *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 8);
  iVar2 = FUN_049e0b58(uVar5,*(undefined8 *)(this + 0x10));
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    iVar2 = *param_1;
    lVar3 = (long)(int)uVar1;
    do {
      lVar4 = lVar3 + -1;
      lVar3 = FUN_049e0b80(uVar5,lVar3);
      if (*(int *)(lVar3 + 0x34) <= iVar2) {
        return lVar3;
      }
      lVar3 = lVar4;
    } while (lVar4 != ((long)(int)uVar1 + -1) - (ulong)uVar1);
  }
  return 0;
}


/* RechargeRewardConfig::getNextAvailableContent(int const&) */

long __thiscall
RechargeRewardConfig::getNextAvailableContent(RechargeRewardConfig *this,int *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 8);
  lVar1 = FUN_049e0b58(uVar4,*(undefined8 *)(this + 0x10));
  lVar3 = 0;
  do {
    if (lVar3 == lVar1) {
      return 0;
    }
    lVar2 = FUN_049e0b80(uVar4,lVar3);
    lVar3 = lVar3 + 1;
  } while (*(int *)(lVar2 + 0x34) < *param_1);
  return lVar2;
}


/* RechargeRewardConfig::getContentByIndex(int const&) */

undefined8 __thiscall
RechargeRewardConfig::getContentByIndex(RechargeRewardConfig *this,int *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 8);
  iVar1 = *param_1;
  uVar2 = FUN_049e0b58(uVar3,*(undefined8 *)(this + 0x10));
  if ((ulong)(long)iVar1 < uVar2) {
    uVar3 = FUN_049e0b80(uVar3,(long)iVar1);
    return uVar3;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardConfig::pickRandomRewardFromConfig(int) */

void __thiscall
RechargeRewardConfig::pickRandomRewardFromConfig(RechargeRewardConfig *this,int param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar7 = *(undefined8 *)(this + 8);
  uVar9 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  uVar4 = FUN_049e0b58(uVar7,*(undefined8 *)(this + 0x10));
  if (uVar9 < uVar4) {
    iVar3 = 0;
    pvVar5 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)FUN_049e0b80(uVar7,uVar9);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar5);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar5);
    while( true ) {
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (!bVar2) break;
      lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      iVar3 = iVar3 + *(int *)(lVar6 + 8);
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_18);
    }
    iVar3 = Sexy::Rand(iVar3);
    pvVar5 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)FUN_049e0b80(*(undefined8 *)(this + 8),uVar9);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(pvVar5);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar5);
    uVar8 = (uint)bVar2;
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2)
    {
      lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      uVar1 = uVar8 + *(int *)(lVar6 + 8);
      if ((iVar3 <= (int)uVar1) && ((int)uVar8 <= iVar3)) goto LAB_049e136c;
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_18);
      uVar8 = uVar1;
    }
  }
  lVar6 = 0;
LAB_049e136c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar6);
}


/* RechargeRewardConfig::StaticNew() */

RechargeRewardConfig * RechargeRewardConfig::StaticNew(void)

{
  RechargeRewardConfig *this;
  
  this = ::operator_new(0x78);
  RechargeRewardConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeRewardConfig::Init() */

void __thiscall RechargeRewardConfig::Init(RechargeRewardConfig *this)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_00;
  RechargeRewardConfig *pRVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x54);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
LAB_049e2640:
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
      pRVar3 = Sexy::RtObject::Cast<RechargeRewardConfig>(this_00);
      if (pRVar3 != (RechargeRewardConfig *)0x0) {
        std::vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>>::
        operator=((vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>> *
                  )(this + 0x20),(vector *)(pRVar3 + 0x20));
        std::vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>>::
        operator=((vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>> *
                  )(this + 0x38),(vector *)(pRVar3 + 0x38));
        std::vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>>::
        operator=((vector<RechargeRewardContentConfig,std::allocator<RechargeRewardContentConfig>> *
                  )(this + 8),(vector *)(this + 0x38));
        std::vector<RechargeReward,std::allocator<RechargeReward>>::operator=
                  ((vector<RechargeReward,std::allocator<RechargeReward>> *)(this + 0x50),
                   (vector *)(pRVar3 + 0x50));
        thunk_FUN_05475e00(this + 0x68,pRVar3 + 0x68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
        goto LAB_049e2640;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
  } while( true );
}

