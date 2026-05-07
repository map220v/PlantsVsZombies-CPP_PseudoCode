// Class: OfferBundleConfig


/* OfferBundleConfig::OfferBundleConfig() */

void __thiscall OfferBundleConfig::OfferBundleConfig(OfferBundleConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066bebd0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  Set8BytesTo0(this + 0x20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  return;
}


/* OfferBundleConfig::~OfferBundleConfig() */

void __thiscall OfferBundleConfig::~OfferBundleConfig(OfferBundleConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_066bebd0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x88));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x70));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x58));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x40));
  std::vector<OppoNewerDailyReward,std::allocator<OppoNewerDailyReward>>::~vector
            ((vector<OppoNewerDailyReward,std::allocator<OppoNewerDailyReward>> *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::vector<BundleInfo,std::allocator<BundleInfo>>::~vector
            ((vector<BundleInfo,std::allocator<BundleInfo>> *)(this + 8));
  nop();
  return;
}


/* OfferBundleConfig::~OfferBundleConfig() */

void __thiscall OfferBundleConfig::~OfferBundleConfig(OfferBundleConfig *this)

{
  ~OfferBundleConfig(this);
  AK::FreeHook(this);
  return;
}


/* OfferBundleConfig::GetAvatarPiecesRewardCount() */

undefined4 __thiscall OfferBundleConfig::GetAvatarPiecesRewardCount(OfferBundleConfig *this)

{
  return *(undefined4 *)(this + 0xa0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfferBundleConfig::StaticClassInit() */

void OfferBundleConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"BundleInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_038f9744,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"rewardItem");
    (*pcVar3)(plVar2,asStack_10,FUN_038f94a4,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"OppoNewerDailyReward");
    (*pcVar3)(plVar2,asStack_10,FUN_038fa48c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"OfferBundleConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_038fa6bc,0xa8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* OfferBundleConfig::StaticGetClass() */

long * OfferBundleConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"OfferBundleConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OfferBundleConfig::GetClass() const */

long * OfferBundleConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"OfferBundleConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* OfferBundleConfig::GetPlantIDByCreatedTime(long) */

undefined4 __thiscall
OfferBundleConfig::GetPlantIDByCreatedTime(OfferBundleConfig *this,long param_1)

{
  undefined4 uVar1;
  long __time1;
  undefined4 *puVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  double dVar6;
  
  __time1 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (__time1 == 0) {
    puVar2 = (undefined4 *)FUN_038f95f8(*(undefined8 *)(this + 0x40),0);
    uVar1 = *puVar2;
  }
  else {
    dVar6 = difftime(__time1,param_1);
    iVar4 = (int)(dVar6 * 1.1574074074074073e-05);
    if (0 < iVar4) {
      uVar5 = *(undefined8 *)(this + 0x40);
      uVar3 = FUN_038f9494(uVar5,*(undefined8 *)(this + 0x48));
      if ((ulong)(long)iVar4 < uVar3) {
        puVar2 = (undefined4 *)FUN_038f95f8(uVar5,(long)iVar4);
        return *puVar2;
      }
      puVar2 = (undefined4 *)FUN_038f95f8(uVar5,uVar3 - 1);
      return *puVar2;
    }
    puVar2 = (undefined4 *)FUN_038f95f8(*(undefined8 *)(this + 0x40),0);
    uVar1 = *puVar2;
  }
  return uVar1;
}


/* OfferBundleConfig::GetRechargeLevel(int) */

ulong __thiscall OfferBundleConfig::GetRechargeLevel(OfferBundleConfig *this,int param_1)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = *(undefined8 *)(this + 0x58);
  uVar3 = 0;
  uVar1 = FUN_038f9494(uVar4,*(undefined8 *)(this + 0x60));
  do {
    uVar5 = uVar3 & 0xffffffff;
    if (uVar3 == uVar1) {
      return uVar3 & 0xffffffff;
    }
    piVar2 = (int *)FUN_038f95f8(uVar4,uVar3);
    uVar3 = uVar3 + 1;
  } while (*piVar2 <= param_1);
  return uVar5;
}


/* OfferBundleConfig::GetRechargeValue(int) */

undefined4 __thiscall OfferBundleConfig::GetRechargeValue(OfferBundleConfig *this,int param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if (-1 < param_1) {
    uVar3 = *(undefined8 *)(this + 0x58);
    uVar1 = FUN_038f9494(uVar3,*(undefined8 *)(this + 0x60));
    if ((ulong)(long)param_1 < uVar1) {
      puVar2 = (undefined4 *)FUN_038f95f8(uVar3,(long)param_1);
      return *puVar2;
    }
  }
  return 0;
}


/* OfferBundleConfig::GetPlantPiecesRewardCount(int, int) */

undefined4 __thiscall
OfferBundleConfig::GetPlantPiecesRewardCount(OfferBundleConfig *this,int param_1,int param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if (param_1 == 2) {
    if (-1 < param_2) {
      uVar3 = *(undefined8 *)(this + 0x70);
      uVar1 = FUN_038f9494(uVar3,*(undefined8 *)(this + 0x78));
      if ((ulong)(long)param_2 < uVar1) goto LAB_038f9fa0;
    }
  }
  else if ((param_1 == 1) && (-1 < param_2)) {
    uVar3 = *(undefined8 *)(this + 0x88);
    uVar1 = FUN_038f9494(uVar3,*(undefined8 *)(this + 0x90));
    if ((ulong)(long)param_2 < uVar1) {
LAB_038f9fa0:
      puVar2 = (undefined4 *)FUN_038f95f8(uVar3,(long)param_2);
      return *puVar2;
    }
  }
  return 0;
}


/* OfferBundleConfig::ShouldGetAvatarPieces(int) */

bool __thiscall OfferBundleConfig::ShouldGetAvatarPieces(OfferBundleConfig *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_038f9494(*(undefined8 *)(this + 0x58),*(undefined8 *)(this + 0x60));
  return lVar1 + -1 == (long)param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfferBundleConfig::GetBundleOfferGemAmount(std::string const&) */

void __thiscall OfferBundleConfig::GetBundleOfferGemAmount(OfferBundleConfig *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  string *psVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    uVar3 = (uint)bVar2;
    if (!bVar2) {
LAB_038fa180:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = std::operator==(psVar4,param_1);
    if (cVar1 != '\0') {
      uVar3 = *(uint *)(psVar4 + 8);
      goto LAB_038fa180;
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfferBundleConfig::GetBundleDisplayImageName(std::string const&) */

void __thiscall
OfferBundleConfig::GetBundleDisplayImageName(OfferBundleConfig *this,string *param_1)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  OfferBundleConfig *pOVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      pOVar4 = this + 0x20;
LAB_038fa244:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pOVar4);
    }
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = std::operator==(psVar3,param_1);
    if (cVar1 != '\0') {
      pOVar4 = (OfferBundleConfig *)(psVar3 + 0x10);
      goto LAB_038fa244;
    }
    std::move_iterator<Sexy::LeaderboardEntry*>::operator++
              ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
  } while( true );
}


/* OfferBundleConfig::StaticNew() */

OfferBundleConfig * OfferBundleConfig::StaticNew(void)

{
  OfferBundleConfig *this;
  
  this = ::operator_new(0xa8);
  OfferBundleConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OfferBundleConfig::Refresh() */

void __thiscall OfferBundleConfig::Refresh(OfferBundleConfig *this)

{
  bool bVar1;
  undefined8 uVar2;
  RtObject *this_00;
  OfferBundleConfig *pOVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x68);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pOVar3 = Sexy::RtObject::Cast<OfferBundleConfig>(this_00);
      if (pOVar3 != (OfferBundleConfig *)0x0) {
        std::vector<BundleInfo,std::allocator<BundleInfo>>::operator=
                  ((vector<BundleInfo,std::allocator<BundleInfo>> *)(this + 8),
                   (vector *)(pOVar3 + 8));
        std::vector<OppoNewerDailyReward,std::allocator<OppoNewerDailyReward>>::operator=
                  ((vector<OppoNewerDailyReward,std::allocator<OppoNewerDailyReward>> *)
                   (this + 0x28),(vector *)(pOVar3 + 0x28));
        std::vector<int,std::allocator<int>>::operator=
                  ((vector<int,std::allocator<int>> *)(this + 0x40),(vector *)(pOVar3 + 0x40));
        std::vector<int,std::allocator<int>>::operator=
                  ((vector<int,std::allocator<int>> *)(this + 0x58),(vector *)(pOVar3 + 0x58));
        std::vector<int,std::allocator<int>>::operator=
                  ((vector<int,std::allocator<int>> *)(this + 0x70),(vector *)(pOVar3 + 0x70));
        std::vector<int,std::allocator<int>>::operator=
                  ((vector<int,std::allocator<int>> *)(this + 0x88),(vector *)(pOVar3 + 0x88));
        *(undefined4 *)(this + 0xa0) = *(undefined4 *)(pOVar3 + 0xa0);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

