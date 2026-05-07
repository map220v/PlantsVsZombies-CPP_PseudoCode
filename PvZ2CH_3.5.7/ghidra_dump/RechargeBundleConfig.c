// Class: RechargeBundleConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleConfig::StaticClassInit() */

void RechargeBundleConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"BundlePushCondition");
    (*pcVar3)(plVar2,asStack_10,FUN_049e7bdc,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"S2C_BonusInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_049e79ac,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"BundleItem");
    (*pcVar3)(plVar2,asStack_10,FUN_049e8524,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"BundleDetail");
    (*pcVar3)(plVar2,asStack_10,FUN_049e89c8,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"BundleTypeList");
    (*pcVar3)(plVar2,asStack_10,FUN_049e8df0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RechargeBundleConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_049e9174,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeBundleConfig::StaticGetClass() */

long * RechargeBundleConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RechargeBundleConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RechargeBundleConfig::GetClass() const */

long * RechargeBundleConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"RechargeBundleConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RechargeBundleConfig::IsBundleAvailable(BundleItem const&, int const&) */

bool __thiscall
RechargeBundleConfig::IsBundleAvailable(RechargeBundleConfig *this,BundleItem *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)param_1;
  uVar3 = FUN_049e7990(uVar5,*(undefined8 *)(param_1 + 8));
  if (uVar3 == 1) {
    piVar4 = (int *)FUN_049e799c(uVar5,0);
    return *param_2 < *piVar4;
  }
  if (1 < uVar3) {
    iVar1 = *param_2;
    piVar4 = (int *)FUN_049e799c(uVar5,0);
    bVar2 = false;
    if (*piVar4 <= iVar1) {
      piVar4 = (int *)FUN_049e799c(uVar5,1);
      bVar2 = iVar1 < *piVar4;
    }
    return bVar2;
  }
  return true;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleConfig::IsBundleListAvailable(BundleTypeList const&) */

void __thiscall
RechargeBundleConfig::IsBundleListAvailable(RechargeBundleConfig *this,BundleTypeList *param_1)

{
  bool bVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_10,param_1 + 0x18);
  bVar1 = std::operator==(asStack_10,"always");
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* RechargeBundleConfig::RechargeBundleConfig() */

void __thiscall RechargeBundleConfig::RechargeBundleConfig(RechargeBundleConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0692b5d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 0xe10;
  return;
}


/* RechargeBundleConfig::StaticNew() */

RechargeBundleConfig * RechargeBundleConfig::StaticNew(void)

{
  RechargeBundleConfig *this;
  
  this = ::operator_new(0x40);
  RechargeBundleConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleConfig::getBundleListPushCondition(int) */

void __thiscall
RechargeBundleConfig::getBundleListPushCondition(RechargeBundleConfig *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_049e989c(uVar2,uVar3,local_24);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    lVar4 = 0;
  }
  else {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    lVar4 = lVar4 + 0x18;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleConfig::getBundlePushConditionStrById(int) */

void RechargeBundleConfig::getBundlePushConditionStrById(int param_1)

{
  long lVar1;
  long lVar2;
  int in_w1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  lVar2 = getBundleListPushCondition((RechargeBundleConfig *)(ulong)(uint)param_1,in_w1);
  if (lVar2 == 0) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    FUN_05475d88();
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleConfig::getBundleListExpireTime(int) */

void __thiscall
RechargeBundleConfig::getBundleListExpireTime(RechargeBundleConfig *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_049e9ba8(uVar2,uVar3,local_24);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  iVar5 = 0;
  if (!bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    iVar5 = *(int *)(lVar4 + 0x28);
    if (iVar5 < 1) {
      iVar5 = *(int *)(this + 0x38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleConfig::getBundleDetailById(int) */

void __thiscall RechargeBundleConfig::getBundleDetailById(RechargeBundleConfig *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_049e9e48(uVar2,uVar3,local_24);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleConfig::getBundleById(int, int) */

void __thiscall
RechargeBundleConfig::getBundleById(RechargeBundleConfig *this,int param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar4;
  int local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  local_28 = param_2;
  local_24 = param_1;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(pvVar4);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(pvVar4);
  local_20 = FUN_049e96c8(uVar2,uVar3,&local_24);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(pvVar4);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_20,(__normal_iterator *)&local_10);
  if (!bVar1) {
    pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(pvVar4);
    pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(pvVar4);
    local_18 = FUN_049ea0c8(uVar2,uVar3,&local_28);
    pvVar4 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar4);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      uVar2 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      goto LAB_049ea1e0;
    }
  }
  uVar2 = 0;
LAB_049ea1e0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* RechargeBundleConfig::getBundleListBuyTimes(int, int) */

undefined4 __thiscall
RechargeBundleConfig::getBundleListBuyTimes(RechargeBundleConfig *this,int param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = getBundleById(this,param_1,param_2);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x1c);
  }
  return uVar1;
}


/* RechargeBundleConfig::~RechargeBundleConfig() */

void __thiscall RechargeBundleConfig::~RechargeBundleConfig(RechargeBundleConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_0692b5d0;
  std::vector<BundleTypeList,std::allocator<BundleTypeList>>::~vector
            ((vector<BundleTypeList,std::allocator<BundleTypeList>> *)(this + 0x20));
  std::vector<BundleDetail,std::allocator<BundleDetail>>::~vector
            ((vector<BundleDetail,std::allocator<BundleDetail>> *)(this + 8));
  nop();
  return;
}


/* RechargeBundleConfig::~RechargeBundleConfig() */

void __thiscall RechargeBundleConfig::~RechargeBundleConfig(RechargeBundleConfig *this)

{
  ~RechargeBundleConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleConfig::getBGImageByType(std::string const&) */

void __thiscall RechargeBundleConfig::getBGImageByType(RechargeBundleConfig *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  string *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&DAT_06b774d8);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&DAT_06b774d8);
  local_18 = FUN_049ea68c(uVar2,uVar3,this);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&DAT_06b774d8);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleConfig::getUITypeByType(std::string const&) */

void RechargeBundleConfig::getUITypeByType(string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&DAT_06b774d8);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&DAT_06b774d8);
  local_18 = FUN_049ea980(uVar2,uVar3,param_1);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&DAT_06b774d8);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  uVar5 = 0;
  if (!bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    uVar5 = *(undefined4 *)(lVar4 + 0x10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleConfig::makeAvailableBundleList(BundleTypeList const&, std::vector<BundleItem,
   std::allocator<BundleItem> >&, bool, int const&) */

void __thiscall
RechargeBundleConfig::makeAvailableBundleList
          (RechargeBundleConfig *this,BundleTypeList *param_1,vector *param_2,bool param_3,
          int *param_4)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  ProfileMgr *this_00;
  BundleItem *pBVar4;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<BundleItem,std::allocator<BundleItem>>::clear
            ((vector<BundleItem,std::allocator<BundleItem>> *)param_2);
  if ((param_3) || (cVar2 = IsBundleListAvailable(this,param_1), cVar2 != '\0')) {
    std::vector<BundleItem,std::allocator<BundleItem>>::vector
              ((vector<BundleItem,std::allocator<BundleItem>> *)&local_20,(vector *)param_1);
    lVar3 = FUN_049e7b00(local_20,local_18);
    if (lVar3 != 0) {
      this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
      ProfileMgr::GetCurrentProfile(this_00);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar1) {
        pBVar4 = (BundleItem *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        cVar2 = IsBundleAvailable(this,pBVar4,param_4);
        if (cVar2 != '\0') {
          std::vector<BundleItem,std::allocator<BundleItem>>::push_back
                    ((vector<BundleItem,std::allocator<BundleItem>> *)param_2,pBVar4);
        }
        std::move_iterator<SexyURL::KeyedValue*>::operator++
                  ((move_iterator<SexyURL::KeyedValue*> *)&local_30);
      }
    }
    std::vector<BundleItem,std::allocator<BundleItem>>::~vector
              ((vector<BundleItem,std::allocator<BundleItem>> *)&local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeBundleConfig::chooseRandomBundleFromType(int, bool, int const&) */

void __thiscall
RechargeBundleConfig::chooseRandomBundleFromType
          (RechargeBundleConfig *this,int param_1,bool param_2,int *param_3)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  BundleTypeList *pBVar5;
  long lVar6;
  int local_34 [3];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  local_34[0] = param_1;
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_28 = FUN_049e94f4(uVar3,uVar4,local_34);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    pBVar5 = (BundleTypeList *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    makeAvailableBundleList(this,pBVar5,(vector *)&local_20,param_2,param_3);
    lVar6 = FUN_049e7b00(local_20,local_18);
    if (lVar6 != 0) {
      iVar2 = Sexy::Rand((int)lVar6);
      lVar6 = FUN_049e7b28(local_20,(long)iVar2);
      uVar3 = getBundleDetailById(this,*(int *)(lVar6 + 0x18));
    }
    std::vector<BundleItem,std::allocator<BundleItem>>::~vector
              ((vector<BundleItem,std::allocator<BundleItem>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

