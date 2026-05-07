// Class: Sexy::MetricsManager


/* Sexy::MetricsManager::SharedMetricsManagerOptional() */

undefined8 Sexy::MetricsManager::SharedMetricsManagerOptional(void)

{
  return DAT_06bbd588;
}


/* Sexy::MetricsManager::DeleteSharedMetricsManager() */

void Sexy::MetricsManager::DeleteSharedMetricsManager(void)

{
  if (DAT_06bbd588 != (long *)0x0) {
    (**(code **)(*DAT_06bbd588 + 0x50))();
    DAT_06bbd588 = (long *)0x0;
  }
  return;
}


/* Sexy::MetricsManager::SetCacheReportLimit(unsigned long) */

void __thiscall Sexy::MetricsManager::SetCacheReportLimit(MetricsManager *this,ulong param_1)

{
  *(ulong *)(this + 0x1570) = param_1;
  return;
}


/* Sexy::MetricsManager::SetProductName(std::string const&) */

void Sexy::MetricsManager::SetProductName(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x1530);
  return;
}


/* Sexy::MetricsManager::SetSkuCode(std::string const&) */

void Sexy::MetricsManager::SetSkuCode(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x1538);
  return;
}


/* Sexy::MetricsManager::SetPlatformName(std::string const&) */

void Sexy::MetricsManager::SetPlatformName(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x1528);
  return;
}


/* Sexy::MetricsManager::SetClientVersion(std::string const&) */

void Sexy::MetricsManager::SetClientVersion(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x1520);
  return;
}


/* Sexy::MetricsManager::SetAppLaunchDefaultThrottle(double) */

void __thiscall
Sexy::MetricsManager::SetAppLaunchDefaultThrottle(MetricsManager *this,double param_1)

{
  *(double *)(this + 0x14c8) = param_1;
  return;
}


/* Sexy::MetricsManager::SetSamplingKey(double) */

void __thiscall Sexy::MetricsManager::SetSamplingKey(MetricsManager *this,double param_1)

{
  *(double *)(this + 0x14d0) = param_1;
  return;
}


/* Sexy::MetricsManager::SetCopernicusServer(std::string const&) */

void Sexy::MetricsManager::SetCopernicusServer(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x1518);
  return;
}


/* Sexy::MetricsManager::SetGatsServer(std::string const&) */

void Sexy::MetricsManager::SetGatsServer(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x1510);
  return;
}


/* Sexy::MetricsManager::ReportString(std::string const&, std::string const&) */

void __thiscall
Sexy::MetricsManager::ReportString(MetricsManager *this,string *param_1,string *param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x15a8);
  if (lVar3 != 0) {
    pcVar1 = (char *)FUN_0547429c(param_1);
    pcVar2 = (char *)FUN_0547429c(param_2);
    StructuredData::AddString((StructuredData *)(lVar3 + 8),pcVar1,pcVar2);
    return;
  }
  return;
}


/* Sexy::MetricsManager::ReportNumber(std::string const&, double) */

void __thiscall
Sexy::MetricsManager::ReportNumber(MetricsManager *this,string *param_1,double param_2)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x15a8);
  if (lVar2 != 0) {
    pcVar1 = (char *)FUN_0547429c(param_1);
    StructuredData::AddNumber((StructuredData *)(lVar2 + 8),pcVar1,param_2);
    return;
  }
  return;
}


/* Sexy::MetricsManager::ReportInteger(std::string const&, long) */

void __thiscall
Sexy::MetricsManager::ReportInteger(MetricsManager *this,string *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x15a8);
  if (lVar2 != 0) {
    pcVar1 = (char *)FUN_0547429c(param_1);
    StructuredData::AddInteger((StructuredData *)(lVar2 + 8),pcVar1,param_2);
    return;
  }
  return;
}


/* Sexy::MetricsManager::ReportBoolean(std::string const&, bool) */

void __thiscall
Sexy::MetricsManager::ReportBoolean(MetricsManager *this,string *param_1,bool param_2)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x15a8);
  if (lVar2 != 0) {
    pcVar1 = (char *)FUN_0547429c(param_1);
    StructuredData::AddBoolean((StructuredData *)(lVar2 + 8),pcVar1,param_2);
    return;
  }
  return;
}


/* Sexy::MetricsManager::ReportDeviceId(std::string const&) */

void __thiscall Sexy::MetricsManager::ReportDeviceId(MetricsManager *this,string *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x15a8);
  if (lVar3 != 0) {
    pcVar1 = (char *)FUN_0547429c(param_1);
    pcVar2 = (char *)FUN_0547429c(this + 0x13b8);
    StructuredData::AddString((StructuredData *)(lVar3 + 8),pcVar1,pcVar2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MetricsManager::ReportHashedString(std::string const&, std::string const&) */

void __thiscall
Sexy::MetricsManager::ReportHashedString(MetricsManager *this,string *param_1,string *param_2)

{
  char *pcVar1;
  char *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x15a8) != 0) {
    Hash((Sexy *)param_2,param_1);
    pcVar1 = (char *)FUN_0547429c(param_1);
    pcVar2 = (char *)FUN_0547429c(asStack_10);
    StructuredData::AddString((StructuredData *)(*(long *)(this + 0x15a8) + 8),pcVar1,pcVar2);
    std::string::~string(asStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::MetricsManager::LogThrottles() */

void __thiscall Sexy::MetricsManager::LogThrottles(MetricsManager *this)

{
  char cVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  ulong uVar2;
  Value *this_01;
  undefined8 uVar3;
  Value *pVVar4;
  
  cVar1 = StructuredData::Readable((StructuredData *)(this + 0x13c0));
  if ((cVar1 != '\0') &&
     (this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)StructuredData::ObjectForPath((StructuredData *)(this + 0x13c0),"$.Throttles"),
     this_00 !=
     (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      *)0x0)) {
    uVar2 = FUN_051696c8(*(undefined4 *)(this_00 + 0x10));
    OutputDebugStrF((wchar_t *)"MetricsManager throttles: (%d)\n",uVar2 & 0xffffffff);
    for (this_01 = (Value *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_rightmost(this_00);
        pVVar4 = (Value *)StructuredData::Value::ChildrenEnd((Value *)this_00), this_01 != pVVar4;
        this_01 = (Value *)StructuredData::Value::Next(this_01)) {
      uVar3 = FUN_051696c4(*(undefined8 *)(this_01 + 8));
      StructuredData::Value::NumberForPath(this_01,".value",-1.0);
      OutputDebugStrF((wchar_t *)"   %s = %f\n",uVar3);
    }
    return;
  }
  return;
}


/* Sexy::MetricsManager::VersionString() const */

void __thiscall Sexy::MetricsManager::VersionString(MetricsManager *this)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0547429c(&DAT_06bbd538);
  StrFormat("%s;%d",uVar1,2);
  return;
}


/* Sexy::MetricsManager::PlatformName() const */

MetricsManager * __thiscall Sexy::MetricsManager::PlatformName(MetricsManager *this)

{
  return this + 0x1528;
}


/* Sexy::MetricsManager::ProductName() const */

MetricsManager * __thiscall Sexy::MetricsManager::ProductName(MetricsManager *this)

{
  return this + 0x1530;
}


/* Sexy::MetricsManager::ClientVersion() const */

MetricsManager * __thiscall Sexy::MetricsManager::ClientVersion(MetricsManager *this)

{
  return this + 0x1520;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MetricsManager::GatsPath() const */

void Sexy::MetricsManager::GatsPath(void)

{
  long in_x0;
  undefined8 uVar1;
  undefined8 uVar2;
  string *extraout_x1;
  string asStack_18 [8];
  string asStack_10 [8];
  string *local_8;
  
  local_8 = ___stack_chk_guard;
  StringToLower((Sexy *)(in_x0 + 0x1530),___stack_chk_guard);
  StringToLower((Sexy *)(in_x0 + 0x1528),extraout_x1);
  uVar1 = FUN_0547429c(asStack_18);
  uVar2 = FUN_0547429c(asStack_10);
  StrFormat("/v2/%s-%s.json",uVar1,uVar2);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::MetricsManager::GatsTimestamp() const */

undefined8 __thiscall Sexy::MetricsManager::GatsTimestamp(MetricsManager *this)

{
  return *(undefined8 *)(this + 0x14b0);
}


/* Sexy::MetricsManager::GatsErrorTimestamp() const */

undefined8 __thiscall Sexy::MetricsManager::GatsErrorTimestamp(MetricsManager *this)

{
  return *(undefined8 *)(this + 0x14b8);
}


/* Sexy::MetricsManager::GatsErrorResponse() const */

MetricsManager * __thiscall Sexy::MetricsManager::GatsErrorResponse(MetricsManager *this)

{
  return this + 0x1438;
}


/* Sexy::MetricsManager::GatsServer() const */

MetricsManager * __thiscall Sexy::MetricsManager::GatsServer(MetricsManager *this)

{
  return this + 0x1510;
}


/* Sexy::MetricsManager::CopernicusServer() const */

MetricsManager * __thiscall Sexy::MetricsManager::CopernicusServer(MetricsManager *this)

{
  return this + 0x1518;
}


/* Sexy::MetricsManager::SamplingKey() const */

undefined1  [16] __thiscall Sexy::MetricsManager::SamplingKey(MetricsManager *this)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(this + 0x14d0);
  auVar1._8_8_ = 0;
  return auVar1;
}


/* Sexy::MetricsManager::DeviceId() const */

MetricsManager * __thiscall Sexy::MetricsManager::DeviceId(MetricsManager *this)

{
  return this + 0x13b8;
}


/* Sexy::MetricsManager::RegisterThrottlesSchema() */

void __thiscall Sexy::MetricsManager::RegisterThrottlesSchema(MetricsManager *this)

{
  NetworkServiceManager::RegisterSchemaJSON
            (*(NetworkServiceManager **)(this + 0x10),(string *)&DAT_06bbd578,
             (string *)&sThrottlesSchemaJSON,(StructuredData *)0x0);
  return;
}


/* Sexy::MetricsManager::UseNetworkServiceManager(Sexy::NetworkServiceManager*, std::string const&)
    */

void __thiscall
Sexy::MetricsManager::UseNetworkServiceManager
          (MetricsManager *this,NetworkServiceManager *param_1,string *param_2)

{
  *(NetworkServiceManager **)(this + 0x10) = param_1;
  thunk_FUN_05475e00(this + 0x18,param_2);
  RegisterThrottlesSchema(this);
  return;
}


/* Sexy::MetricsManager::EnsureNetworkServiceManager() */

void __thiscall Sexy::MetricsManager::EnsureNetworkServiceManager(MetricsManager *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x10) != 0) {
    return;
  }
  uVar1 = NetworkServiceManager::DefaultNetworkServiceManager();
  *(undefined8 *)(this + 0x10) = uVar1;
  FUN_05474ff8(this + 0x18);
  RegisterThrottlesSchema(this);
  return;
}


/* Sexy::MetricsManager::EnsureGatsThrottleFreshness() */

void __thiscall Sexy::MetricsManager::EnsureGatsThrottleFreshness(MetricsManager *this)

{
  int iVar1;
  time_t tVar2;
  
  tVar2 = time((time_t *)0x0);
  iVar1 = (**(code **)(**(long **)(gSexyAppBase + 0x48) + 0x20))(*(long **)(gSexyAppBase + 0x48));
  if ((((this[0x15b0] == (MetricsManager)0x0) && (iVar1 != 0)) &&
      (this[0x1508] != (MetricsManager)0x0)) &&
     ((300 < tVar2 - *(long *)(this + 0x14b0) && (300 < tVar2 - *(long *)(this + 0x14b8))))) {
    nop();
    return;
  }
  return;
}


/* Sexy::MetricsManager::GatsValueForPath(std::string const&) */

undefined8 __thiscall Sexy::MetricsManager::GatsValueForPath(MetricsManager *this,string *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  cVar1 = StructuredData::Readable((StructuredData *)(this + 0x13c0));
  if (cVar1 != '\0') {
    EnsureGatsThrottleFreshness(this);
    pcVar2 = (char *)FUN_0547429c(param_1);
    uVar3 = StructuredData::ValueForPath((StructuredData *)(this + 0x13c0),pcVar2);
    return uVar3;
  }
  return 0;
}


/* Sexy::MetricsManager::ApplicationActivated() */

void __thiscall Sexy::MetricsManager::ApplicationActivated(MetricsManager *this)

{
  time_t tVar1;
  
  OutputDebugStrF((wchar_t *)"METRICS MANAGER: APPLICATION ACTIVATED\n");
  tVar1 = time((time_t *)0x0);
  if (tVar1 < *(long *)(this + 0x14b0)) {
    *(time_t *)(this + 0x14b0) = tVar1;
  }
  EnsureGatsThrottleFreshness(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MetricsManager::MetricsManager() */

void __thiscall Sexy::MetricsManager::MetricsManager(MetricsManager *this)

{
  MTRand *this_00;
  MetricsManager *pMVar1;
  uint uVar2;
  ulong uVar3;
  char *__s;
  string *extraout_x1;
  string *__n;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  this_00 = (MTRand *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  pMVar1 = this + 0x13b8;
  NetworkServiceListener::NetworkServiceListener((NetworkServiceListener *)this);
  INetworkStatusListener::INetworkStatusListener((INetworkStatusListener *)(this + 8));
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_ToString_06a2ed90;
  *(undefined ***)(this + 8) = &PTR__MetricsManager_06a2ee00;
  Set8BytesTo0(this + 0x18);
  MTRand::MTRand(this_00);
  Set8BytesTo0(pMVar1);
  StructuredData::StructuredData((StructuredData *)(this + 0x13c0),1);
  StructuredData::StructuredData((StructuredData *)(this + 0x1438));
  *(undefined8 *)(this + 0x14b0) = 0;
  *(undefined8 *)(this + 0x14b8) = 0;
  *(undefined8 *)(this + 0x14c0) = 0;
  *(undefined8 *)(this + 0x14c8) = 0x3ff0000000000000;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x14d8));
  this[0x1508] = (MetricsManager)0x1;
  FUN_05475d88(this + 0x1510,&DAT_06bbd580);
  FUN_05475d88(this + 0x1518,&DAT_06bbd530);
  Set8BytesTo0(this + 0x1520);
  Set8BytesTo0((string *)(this + 0x1528));
  Set8BytesTo0(this + 0x1530);
  Set8BytesTo0(this + 0x1538);
  this[0x1540] = (MetricsManager)0x1;
  Set8BytesTo0(this + 0x1548);
  Set8BytesTo0(this + 0x1550);
  Set8BytesTo0(this + 0x1558);
  Set8BytesTo0(this + 0x1560);
  Set8BytesTo0(this + 0x1568);
  *(undefined8 *)(this + 0x1570) = 1000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1578));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1590));
  *(undefined8 *)(this + 0x15a8) = 0;
  this[0x15b0] = (MetricsManager)0x0;
  uVar3 = time((time_t *)0x0);
  MTRand::SRand(this_00,uVar3);
  uVar2 = MTRand::Next(this_00);
  *(double *)(this + 0x14d0) = (double)uVar2 * 4.656612875245797e-10;
  __s = (char *)(**(code **)(**(long **)(gSexyAppBase + 0x60) + 0x20))
                          (*(long **)(gSexyAppBase + 0x60),2);
  if (__s == (char *)0x0) {
    __n = asStack_10;
    std::string::string(asStack_18,"");
    FUN_05474278(pMVar1,asStack_18);
    std::string::~string(asStack_18);
    nop();
  }
  else {
    __n = asStack_20;
    std::string::string(asStack_10,__s);
    Hash((Sexy *)asStack_10,extraout_x1);
    FUN_05474278(pMVar1,asStack_18);
    std::string::~string(asStack_18);
    std::string::~string(asStack_10);
    nop();
  }
  thunk_FUN_05475e00(this + 0x1530,gSexyAppBase + 0x90);
  thunk_FUN_05475e00(this + 0x1520,gSexyAppBase + 0x3d0);
  std::string::append((string *)(this + 0x1528),"Android",(size_t)__n);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::MetricsManager::SharedMetricsManagerRequired() */

MetricsManager * Sexy::MetricsManager::SharedMetricsManagerRequired(void)

{
  MetricsManager *this;
  
  if (DAT_06bbd588 != (MetricsManager *)0x0) {
    return DAT_06bbd588;
  }
  this = ::operator_new(0x15b8);
  MetricsManager(this);
  DAT_06bbd588 = this;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MetricsManager::GetThrottleValue(std::string const&, double) */

void __thiscall
Sexy::MetricsManager::GetThrottleValue(MetricsManager *this,string *param_1,double param_2)

{
  char cVar1;
  bool bVar2;
  Value *pVVar3;
  char *pcVar4;
  double *pdVar5;
  undefined1 auVar6 [16];
  double local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = StructuredData::Readable((StructuredData *)(this + 0x13c0));
  if ((cVar1 != '\0') &&
     (pVVar3 = (Value *)StructuredData::ObjectForPath
                                  ((StructuredData *)(this + 0x13c0),"$.Throttles"),
     pVVar3 != (Value *)0x0)) {
    pcVar4 = (char *)FUN_0547429c(param_1);
    pVVar3 = (Value *)StructuredData::Value::ObjectForName(pVVar3,pcVar4);
    if (pVVar3 != (Value *)0x0) {
      param_2 = (double)StructuredData::Value::NumberForName
                                  (pVVar3,"value",*(double *)(this + 0x14c0));
      local_20 = param_2;
      auVar6 = StructuredData::Value::ObjectForName(pVVar3,"conditions");
      if (auVar6._0_8_ != (Value *)0x0) {
        std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,auVar6._8_8_);
        local_18 = std::set<std::string,std::less<std::string>,std::allocator<std::string>>::begin
                             ((set<std::string,std::less<std::string>,std::allocator<std::string>> *
                              )(this + 0x14d8));
        while( true ) {
          local_10 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)(this + 0x14d8));
          bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
          param_2 = local_20;
          if (!bVar2) break;
          std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                    ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_18);
          pcVar4 = (char *)FUN_0547429c();
          local_10 = StructuredData::Value::NumberForName(auVar6._0_8_,pcVar4,0.0);
          pdVar5 = std::max<double>(&local_20,(double *)&local_10);
          local_20 = *pdVar5;
          std::_Rb_tree_const_iterator<Sexy::PIEffect*>::operator++
                    ((_Rb_tree_const_iterator<Sexy::PIEffect*> *)&local_18);
        }
      }
      EnsureGatsThrottleFreshness(this);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_2);
  }
  return;
}


/* Sexy::MetricsManager::ClearSamplingConditions() */

void __thiscall Sexy::MetricsManager::ClearSamplingConditions(MetricsManager *this)

{
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::clear
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x14d8))
  ;
  return;
}


/* Sexy::MetricsManager::AddSamplingCondition(std::string const&) */

void __thiscall Sexy::MetricsManager::AddSamplingCondition(MetricsManager *this,string *param_1)

{
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x14d8),
             param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MetricsManager::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void __thiscall
Sexy::MetricsManager::ServiceRequestFailed
          (MetricsManager *this,StructuredData *param_1,void *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  time_t tVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 == (void *)0x0) {
    tVar1 = time((time_t *)0x0);
    *(time_t *)(this + 0x14b8) = tVar1;
    StructuredData::Clear((StructuredData *)(this + 0x1438));
    StructuredData::Clone((StructuredData *)(this + 0x1438),param_1);
    this[0x15b0] = (MetricsManager)0x0;
    OutputDebugStrF((wchar_t *)"MetricsManager received no GATS response.\n");
  }
  else if (param_2 == (void *)0x1) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1590);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x1578));
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    std::vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>::
    insert<__gnu_cxx::__normal_iterator<Sexy::MetricsManager::Report**,std::vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>>,void>
              ((vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>
                *)(this + 0x1578),local_10,uVar2,uVar3);
    std::vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>::clear
              ((vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>
                *)this_00);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::MetricsManager::~MetricsManager() */

void __thiscall Sexy::MetricsManager::~MetricsManager(MetricsManager *this)

{
  *(undefined ***)this = &PTR_ToString_06a2ed90;
  *(undefined ***)(this + 8) = &PTR__MetricsManager_06a2ee00;
  std::vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>::~vector
            ((vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>> *)
             (this + 0x1590));
  std::vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>::~vector
            ((vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>> *)
             (this + 0x1578));
  std::string::~string((string *)(this + 0x1568));
  std::string::~string((string *)(this + 0x1560));
  std::string::~string((string *)(this + 0x1558));
  std::string::~string((string *)(this + 0x1550));
  std::string::~string((string *)(this + 0x1548));
  std::string::~string((string *)(this + 0x1538));
  std::string::~string((string *)(this + 0x1530));
  std::string::~string((string *)(this + 0x1528));
  std::string::~string((string *)(this + 0x1520));
  std::string::~string((string *)(this + 0x1518));
  std::string::~string((string *)(this + 0x1510));
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x14d8))
  ;
  StructuredData::~StructuredData((StructuredData *)(this + 0x1438));
  StructuredData::~StructuredData((StructuredData *)(this + 0x13c0));
  std::string::~string((string *)(this + 0x13b8));
  std::string::~string((string *)(this + 0x18));
  return;
}


/* non-virtual thunk to Sexy::MetricsManager::~MetricsManager() */

void __thiscall Sexy::MetricsManager::~MetricsManager(MetricsManager *this)

{
  ~MetricsManager(this + -8);
  return;
}


/* Sexy::MetricsManager::~MetricsManager() */

void __thiscall Sexy::MetricsManager::~MetricsManager(MetricsManager *this)

{
  ~MetricsManager(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Sexy::MetricsManager::~MetricsManager() */

void __thiscall Sexy::MetricsManager::~MetricsManager(MetricsManager *this)

{
  ~MetricsManager(this + -8);
  return;
}


/* Sexy::MetricsManager::Enable(bool) */

void __thiscall Sexy::MetricsManager::Enable(MetricsManager *this,bool param_1)

{
  Report *this_00;
  
  this[0x1508] = (MetricsManager)param_1;
  if (!param_1) {
    this_00 = *(Report **)(this + 0x15a8);
    if (this_00 != (Report *)0x0) {
      Report::~Report(this_00);
      AK::FreeHook(this_00);
    }
    *(undefined8 *)(this + 0x15a8) = 0;
  }
  return;
}


/* Sexy::MetricsManager::BeginReportHelper(std::string const&, std::string const&, int) */

long __thiscall
Sexy::MetricsManager::BeginReportHelper
          (MetricsManager *this,string *param_1,string *param_2,int param_3)

{
  Report *pRVar1;
  
  pRVar1 = *(Report **)(this + 0x15a8);
  if (pRVar1 != (Report *)0x0) {
    Report::~Report(pRVar1);
    AK::FreeHook(pRVar1);
  }
  if ((this[0x1508] != (MetricsManager)0x0) && (*(double *)(this + 0x14d0) < (double)param_3)) {
    pRVar1 = ::operator_new(0x80);
    *(undefined8 *)pRVar1 = 0;
    *(undefined8 *)(pRVar1 + 8) = 0;
    *(undefined8 *)(pRVar1 + 0x10) = 0;
    *(undefined8 *)(pRVar1 + 0x18) = 0;
    *(undefined8 *)(pRVar1 + 0x20) = 0;
    *(undefined8 *)(pRVar1 + 0x28) = 0;
    *(undefined8 *)(pRVar1 + 0x30) = 0;
    *(undefined8 *)(pRVar1 + 0x38) = 0;
    *(undefined8 *)(pRVar1 + 0x40) = 0;
    *(undefined8 *)(pRVar1 + 0x48) = 0;
    *(undefined8 *)(pRVar1 + 0x50) = 0;
    *(undefined8 *)(pRVar1 + 0x58) = 0;
    *(undefined8 *)(pRVar1 + 0x60) = 0;
    *(undefined8 *)(pRVar1 + 0x68) = 0;
    *(undefined8 *)(pRVar1 + 0x70) = 0;
    *(undefined8 *)(pRVar1 + 0x78) = 0;
    Report::Report(pRVar1);
    *(Report **)(this + 0x15a8) = pRVar1;
    StructuredData::BeginObject((StructuredData *)(pRVar1 + 8));
    StructuredData::AddString
              ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"MetricsType",param_1);
    StructuredData::AddString
              ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"MetricsVersion",param_2);
    StructuredData::AddString
              ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"ClientVersion",
               (string *)(this + 0x1520));
    StructuredData::AddString
              ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"PlatformName",
               (string *)(this + 0x1528));
    StructuredData::AddString
              ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"ProductName",
               (string *)(this + 0x1530));
    StructuredData::AddNumber
              ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"SamplingProb",(double)param_3);
    return *(long *)(this + 0x15a8) + 8;
  }
  return 0;
}


/* Sexy::MetricsManager::BeginReport(std::string const&, std::string const&) */

void __thiscall
Sexy::MetricsManager::BeginReport(MetricsManager *this,string *param_1,string *param_2)

{
  double dVar1;
  
  dVar1 = (double)GetThrottleValue(this,param_1,*(double *)(this + 0x14c0));
  BeginReportHelper(this,param_1,param_2,(int)dVar1);
  return;
}


/* Sexy::MetricsManager::BeginReportUnthrottled(std::string const&, std::string const&) */

void __thiscall
Sexy::MetricsManager::BeginReportUnthrottled(MetricsManager *this,string *param_1,string *param_2)

{
  BeginReportHelper(this,param_1,param_2,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MetricsManager::EnforceReportsLimit() */

void __thiscall Sexy::MetricsManager::EnforceReportsLimit(MetricsManager *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_051696cc(*(undefined8 *)(this + 0x1578),*(undefined8 *)(this + 0x1580));
  if (*(ulong *)(this + 0x1570) < uVar1) {
    lVar4 = uVar1 - *(ulong *)(this + 0x1570);
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1578);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    uVar3 = __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                         *)&local_10,lVar4);
    FUN_0516b550(uVar2,uVar3);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_18,(__normal_iterator *)&local_30);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this_00);
    local_20 = __gnu_cxx::
               __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
               ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_28,lVar4);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_20);
    std::vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>::erase
              ((vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>
                *)this_00,local_18,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::MetricsManager::ClearReports() */

void __thiscall Sexy::MetricsManager::ClearReports(MetricsManager *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1578);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  FUN_0516b550(uVar1,uVar2);
  std::vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>::clear
            ((vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>> *)
             this_00);
  return;
}


/* Sexy::MetricsManager::ClearSentReports() */

void __thiscall Sexy::MetricsManager::ClearSentReports(MetricsManager *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1590);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  FUN_0516b550(uVar1,uVar2);
  std::vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>::clear
            ((vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>> *)
             this_00);
  return;
}


/* Sexy::MetricsManager::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void __thiscall
Sexy::MetricsManager::ServiceRequestCompleted
          (MetricsManager *this,StructuredData *param_1,void *param_2)

{
  time_t tVar1;
  
  if (param_2 == (void *)0x0) {
    tVar1 = time((time_t *)0x0);
    *(time_t *)(this + 0x14b8) = tVar1;
    StructuredData::Clear((StructuredData *)(this + 0x1438));
    StructuredData::Clone((StructuredData *)(this + 0x1438),param_1);
    this[0x15b0] = (MetricsManager)0x0;
    OutputDebugStrF((wchar_t *)"MetricsManager recieved invalid GATS response.\n");
    return;
  }
  if (param_2 != (void *)0x1) {
    return;
  }
  ClearSentReports(this);
  return;
}


/* Sexy::MetricsManager::ServiceRequestCompleted(ImageLib::Image*&, void const*) */

void __thiscall
Sexy::MetricsManager::ServiceRequestCompleted(MetricsManager *this,Image **param_1,void *param_2)

{
  time_t tVar1;
  
  if (param_2 == (void *)0x0) {
    tVar1 = time((time_t *)0x0);
    *(time_t *)(this + 0x14b8) = tVar1;
    StructuredData::Clear((StructuredData *)(this + 0x1438));
    this[0x15b0] = (MetricsManager)0x0;
    OutputDebugStrF((wchar_t *)"MetricsManager recieved a pretty picture from GATS.  O_o\n");
    return;
  }
  if (param_2 != (void *)0x1) {
    return;
  }
  ClearSentReports(this);
  return;
}


/* Sexy::MetricsManager::ServiceResumableRequestCompleted(std::string const&, void const*) */

void __thiscall
Sexy::MetricsManager::ServiceResumableRequestCompleted
          (MetricsManager *this,string *param_1,void *param_2)

{
  time_t tVar1;
  
  if (param_2 == (void *)0x0) {
    tVar1 = time((time_t *)0x0);
    *(time_t *)(this + 0x14b8) = tVar1;
    StructuredData::Clear((StructuredData *)(this + 0x1438));
    this[0x15b0] = (MetricsManager)0x0;
    OutputDebugStrF((wchar_t *)"MetricsManager received unrecognized GATS response.\n");
    return;
  }
  if (param_2 != (void *)0x1) {
    return;
  }
  ClearSentReports(this);
  return;
}


/* Sexy::MetricsManager::ServiceProgressUpdate(unsigned long, unsigned long, void const*) */

void __thiscall
Sexy::MetricsManager::ServiceProgressUpdate
          (MetricsManager *this,ulong param_1,ulong param_2,void *param_3)

{
  time_t tVar1;
  
  if (param_3 == (void *)0x0) {
    tVar1 = time((time_t *)0x0);
    *(time_t *)(this + 0x14b8) = tVar1;
    StructuredData::Clear((StructuredData *)(this + 0x1438));
    this[0x15b0] = (MetricsManager)0x0;
    OutputDebugStrF((wchar_t *)"MetricsManager received unrecognized GATS response.\n");
    return;
  }
  if (param_3 != (void *)0x1) {
    return;
  }
  ClearSentReports(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MetricsManager::SendReports() */

void __thiscall Sexy::MetricsManager::SendReports(MetricsManager *this)

{
  vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>> *this_00;
  vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>> *this_01;
  char cVar1;
  bool bVar2;
  int iVar3;
  time_t tVar4;
  long *plVar5;
  Value *pVVar6;
  undefined8 local_90;
  undefined8 local_88;
  StructuredData aSStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EnforceReportsLimit(this);
  iVar3 = (**(code **)(**(long **)(gSexyAppBase + 0x48) + 0x20))(*(long **)(gSexyAppBase + 0x48));
  if (iVar3 != 0) {
    this_00 = (vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>> *
              )(this + 0x1590);
    cVar1 = std::vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>
            ::empty(this_00);
    if (cVar1 != '\0') {
      this_01 = (vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>
                 *)(this + 0x1578);
      cVar1 = std::
              vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>::
              empty(this_01);
      if (cVar1 == '\0') {
        std::vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>::
        operator=(this_00,(vector *)this_01);
        std::vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>::
        clear(this_01);
        tVar4 = time((time_t *)0x0);
        StructuredData::StructuredData(aSStack_80);
        StructuredData::BeginObject(aSStack_80);
        StructuredData::AddString(aSStack_80,"url",(string *)(this + 0x1518));
        StructuredData::AddString(aSStack_80,"channel",(string *)(this + 0x18));
        StructuredData::BeginObject(aSStack_80,"postData");
        StructuredData::BeginObject(aSStack_80,"meta");
        StructuredData::AddInteger(aSStack_80,"posttime",tVar4);
        StructuredData::EndObject(aSStack_80);
        StructuredData::BeginArray(aSStack_80,"payloads");
        local_90 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)this_00);
        while( true ) {
          local_88 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)this_00);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88);
          if (!bVar2) break;
          plVar5 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
          pVVar6 = (Value *)StructuredData::Root((StructuredData *)(*plVar5 + 8));
          StructuredData::AddValue(aSStack_80,pVVar6);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
        }
        StructuredData::EndArray(aSStack_80);
        StructuredData::EndObject(aSStack_80);
        StructuredData::EndObject(aSStack_80);
        EnsureNetworkServiceManager(this);
        NetworkServiceManager::MakeRequest
                  (*(NetworkServiceManager **)(this + 0x10),aSStack_80,
                   (NetworkServiceListener *)this,(void *)0x1);
        StructuredData::~StructuredData(aSStack_80);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::MetricsManager::EndReport() */

void __thiscall Sexy::MetricsManager::EndReport(MetricsManager *this)

{
  time_t tVar1;
  
  if (*(long *)(this + 0x15a8) != 0) {
    (**(code **)(**(long **)(gSexyAppBase + 0x48) + 0x20))(*(long **)(gSexyAppBase + 0x48));
    tVar1 = time((time_t *)0x0);
    StructuredData::AddInteger((StructuredData *)(*(long *)(this + 0x15a8) + 8),"UnixTime",tVar1);
    StructuredData::EndObject((StructuredData *)(*(long *)(this + 0x15a8) + 8));
    std::vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>::
    push_back((vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>> *
              )(this + 0x1578),(Report **)(this + 0x15a8));
    *(undefined8 *)(this + 0x15a8) = 0;
  }
  SendReports(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MetricsManager::ReportAppLaunch() */

void __thiscall Sexy::MetricsManager::ReportAppLaunch(MetricsManager *this)

{
  string *psVar1;
  string *psVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  Report *this_00;
  string *__n;
  long *plVar6;
  double dVar7;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  psVar1 = (string *)(this + 0x1550);
  local_8 = ___stack_chk_guard;
  cVar3 = FUN_0547419c(psVar1);
  if (cVar3 == '\0') {
    std::string::string(asStack_10,"AppLaunch");
    dVar7 = (double)GetThrottleValue(this,asStack_10,1.0);
    std::string::~string(asStack_10);
    nop();
    if ((this[0x1508] != (MetricsManager)0x0) && (*(double *)(this + 0x14d0) < dVar7)) {
      psVar2 = (string *)(this + 0x1548);
      plVar6 = *(long **)(gSexyAppBase + 0x60);
      pcVar5 = (char *)(**(code **)(*plVar6 + 0x28))(plVar6,1);
      std::string::string(asStack_20,pcVar5);
      nop();
      pcVar5 = (char *)(**(code **)(*plVar6 + 0x28))(plVar6,0);
      __n = asStack_10;
      std::string::string(asStack_18,pcVar5);
      nop();
      Set8BytesTo0(asStack_10);
      cVar3 = FUN_0547419c(psVar2);
      if (cVar3 == '\0') {
        bVar4 = std::operator!=(psVar2,(string *)(this + 0x1520));
        if (bVar4) {
          std::string::append(asStack_10,"Upgrade",(size_t)__n);
        }
        else if (this[0x1540] == (MetricsManager)0x0) {
          std::string::append(asStack_10,"Foreground",(size_t)__n);
        }
        else {
          std::string::append(asStack_10,"Standard",(size_t)__n);
        }
      }
      else {
        std::string::append(asStack_10,"Install",(size_t)__n);
      }
      this[0x1540] = (MetricsManager)0x0;
      thunk_FUN_05475e00(psVar2,(string *)(this + 0x1520));
      this_00 = ::operator_new(0x80);
      *(undefined8 *)this_00 = 0;
      *(undefined8 *)(this_00 + 8) = 0;
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(undefined8 *)(this_00 + 0x18) = 0;
      *(undefined8 *)(this_00 + 0x20) = 0;
      *(undefined8 *)(this_00 + 0x28) = 0;
      *(undefined8 *)(this_00 + 0x30) = 0;
      *(undefined8 *)(this_00 + 0x38) = 0;
      *(undefined8 *)(this_00 + 0x40) = 0;
      *(undefined8 *)(this_00 + 0x48) = 0;
      *(undefined8 *)(this_00 + 0x50) = 0;
      *(undefined8 *)(this_00 + 0x58) = 0;
      *(undefined8 *)(this_00 + 0x60) = 0;
      *(undefined8 *)(this_00 + 0x68) = 0;
      *(undefined8 *)(this_00 + 0x70) = 0;
      *(undefined8 *)(this_00 + 0x78) = 0;
      Report::Report(this_00);
      *(Report **)(this + 0x15a8) = this_00;
      StructuredData::BeginObject((StructuredData *)(this_00 + 8));
      StructuredData::AddString
                ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"ProductName","Common");
      StructuredData::AddString
                ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"PlatformName","Mobile");
      StructuredData::AddString
                ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"MetricsType","AppLaunch");
      StructuredData::AddString
                ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"MetricsVersion","v1.0");
      StructuredData::AddString
                ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"ClientVersion",
                 (string *)(this + 0x1520));
      StructuredData::AddNumber
                ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"SamplingProb",dVar7);
      StructuredData::AddString
                ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"DeviceID",
                 (string *)(this + 0x13b8));
      StructuredData::AddString
                ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"OSVersion",asStack_18);
      StructuredData::AddString
                ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"HardwareVersion",asStack_20);
      StructuredData::AddString
                ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"Product",
                 (string *)(this + 0x1530));
      StructuredData::AddString
                ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"Platform",
                 (string *)(this + 0x1528));
      StructuredData::AddString
                ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"LaunchType",asStack_10);
      StructuredData::AddString
                ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"SourceType",psVar1);
      StructuredData::AddString
                ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"SourceSubtype1",
                 (string *)(this + 0x1558));
      StructuredData::AddString
                ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"SourceSubtype2",
                 (string *)(this + 0x1560));
      StructuredData::AddString
                ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"SourceSubtype3",
                 (string *)(this + 0x1568));
      cVar3 = FUN_0547419c((string *)(this + 0x1538));
      if (cVar3 == '\0') {
        StructuredData::AddString
                  ((StructuredData *)(*(long *)(this + 0x15a8) + 8),"SKUCode",
                   (string *)(this + 0x1538));
      }
      else {
        StructuredData::AddNull((StructuredData *)(*(long *)(this + 0x15a8) + 8),"SKUCode");
      }
      EndReport(this);
      FUN_05474ff8(psVar1);
      FUN_05474ff8((string *)(this + 0x1558));
      FUN_05474ff8((string *)(this + 0x1560));
      FUN_05474ff8((string *)(this + 0x1568));
      std::string::~string(asStack_10);
      std::string::~string(asStack_18);
      std::string::~string(asStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::MetricsManager::ServiceRequestValidated(Sexy::StructuredData const*, void const*) */

void __thiscall
Sexy::MetricsManager::ServiceRequestValidated
          (MetricsManager *this,StructuredData *param_1,void *param_2)

{
  time_t tVar1;
  
  if (param_2 == (void *)0x0) {
    tVar1 = time((time_t *)0x0);
    *(time_t *)(this + 0x14b0) = tVar1;
    StructuredData::Clear((StructuredData *)(this + 0x13c0));
    StructuredData::Clone((StructuredData *)(this + 0x13c0),param_1);
    this[0x15b0] = (MetricsManager)0x0;
    ReportAppLaunch(this);
    OutputDebugStrF((wchar_t *)"METRICS MANAGER: ANDROID REPORTING APP LAUNCH");
    return;
  }
  if (param_2 != (void *)0x1) {
    return;
  }
  ClearSentReports(this);
  return;
}


/* Sexy::MetricsManager::NetworkStatusChanged(Sexy::IHttpDriver::NetworkStatus) */

void __thiscall Sexy::MetricsManager::NetworkStatusChanged(MetricsManager *this,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  SendReports(this);
  return;
}


/* non-virtual thunk to Sexy::MetricsManager::NetworkStatusChanged(Sexy::IHttpDriver::NetworkStatus)
    */

void __thiscall Sexy::MetricsManager::NetworkStatusChanged(MetricsManager *this)

{
  NetworkStatusChanged(this + -8);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MetricsManager::Save() */

void __thiscall Sexy::MetricsManager::Save(MetricsManager *this)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_48;
  undefined8 local_40;
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Buffer::Buffer(aBStack_38);
  Buffer::WriteInt32(aBStack_38,0x4d4d5243);
  Buffer::WriteInt32(aBStack_38,2);
  Buffer::WriteDouble(aBStack_38,*(double *)(this + 0x14d0));
  Buffer::WriteString(aBStack_38,(string *)(this + 0x1548));
  StructuredData::WriteToBuffer((StructuredData *)(this + 0x13c0),aBStack_38);
  iVar2 = FUN_051696cc(*(undefined8 *)(this + 0x1578),*(undefined8 *)(this + 0x1580));
  Buffer::WriteInt32(aBStack_38,iVar2);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1578));
  while( true ) {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x1578));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
    if (!bVar1) break;
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    puVar3 = (undefined8 *)*puVar3;
    Buffer::WriteInt32(aBStack_38,(int)*puVar3);
    StructuredData::WriteToBuffer((StructuredData *)(puVar3 + 1),aBStack_38);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  }
  GetAppDataFolder((Sexy *)0x0);
  FUN_031dcc6c((string *)&local_40,(exception_ptr *)&local_48,&DAT_06bbd540);
  SexyAppBase::WriteBufferToFile(gSexyAppBase,(string *)&local_40,aBStack_38);
  std::string::~string((string *)&local_40);
  std::string::~string((string *)&local_48);
  Buffer::~Buffer(aBStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::MetricsManager::ApplicationDeactivated() */

void __thiscall Sexy::MetricsManager::ApplicationDeactivated(MetricsManager *this)

{
  FUN_05474ff8(this + 0x1550);
  FUN_05474ff8(this + 0x1558);
  FUN_05474ff8(this + 0x1560);
  FUN_05474ff8(this + 0x1568);
  Save(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::MetricsManager::Restore() */

void __thiscall Sexy::MetricsManager::Restore(MetricsManager *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  Sexy *this_00;
  Report *this_01;
  Buffer *__n;
  uint uVar5;
  undefined8 uVar6;
  string asStack_50 [8];
  Buffer aBStack_48 [8];
  Report *local_40;
  Buffer aBStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ClearReports(this);
  this_00 = (Sexy *)Buffer::Buffer(aBStack_38);
  GetAppDataFolder(this_00);
  FUN_031dcc6c(aBStack_48,asStack_50,&DAT_06bbd540);
  __n = aBStack_38;
  cVar1 = SexyAppBase::ReadBufferFromFile(gSexyAppBase,aBStack_48,SUB81(aBStack_38,0));
  if ((cVar1 == '\0') || (iVar2 = Buffer::ReadInt32(aBStack_38), iVar2 != 0x4d4d5243)) {
    iVar2 = 0;
  }
  else {
    iVar2 = Buffer::ReadInt32(aBStack_38);
    uVar6 = Buffer::ReadDouble(aBStack_38);
    *(undefined8 *)(this + 0x14d0) = uVar6;
    if (iVar2 < 2) {
      Buffer::ReadInt32(aBStack_38);
      std::string::append((string *)(this + 0x1548),"0",(size_t)__n);
    }
    else {
      Buffer::ReadString();
      FUN_05474278(this + 0x1548,(string *)&local_40);
      std::string::~string((string *)&local_40);
    }
    StructuredData::ReadFromBuffer((StructuredData *)(this + 0x13c0),aBStack_38);
    uVar3 = Buffer::ReadInt32(aBStack_38);
    std::vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>::
    reserve((vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>> *)
            (this + 0x1578),(ulong)uVar3);
    if (uVar3 != 0) {
      uVar5 = 0;
      do {
        uVar5 = uVar5 + 1;
        this_01 = ::operator_new(0x80);
        *(undefined8 *)this_01 = 0;
        *(undefined8 *)(this_01 + 8) = 0;
        *(undefined8 *)(this_01 + 0x10) = 0;
        *(undefined8 *)(this_01 + 0x18) = 0;
        *(undefined8 *)(this_01 + 0x20) = 0;
        *(undefined8 *)(this_01 + 0x28) = 0;
        *(undefined8 *)(this_01 + 0x30) = 0;
        *(undefined8 *)(this_01 + 0x38) = 0;
        *(undefined8 *)(this_01 + 0x40) = 0;
        *(undefined8 *)(this_01 + 0x48) = 0;
        *(undefined8 *)(this_01 + 0x50) = 0;
        *(undefined8 *)(this_01 + 0x58) = 0;
        *(undefined8 *)(this_01 + 0x60) = 0;
        *(undefined8 *)(this_01 + 0x68) = 0;
        *(undefined8 *)(this_01 + 0x70) = 0;
        *(undefined8 *)(this_01 + 0x78) = 0;
        Report::Report(this_01);
        local_40 = this_01;
        iVar4 = Buffer::ReadInt32(aBStack_38);
        *(long *)this_01 = (long)iVar4;
        StructuredData::ReadFromBuffer((StructuredData *)(local_40 + 8),aBStack_38);
        std::vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>::
        push_back((vector<Sexy::MetricsManager::Report*,std::allocator<Sexy::MetricsManager::Report*>>
                   *)(this + 0x1578),&local_40);
      } while (uVar3 != uVar5);
    }
  }
  EnforceReportsLimit(this);
  std::string::~string((string *)aBStack_48);
  std::string::~string(asStack_50);
  Buffer::~Buffer(aBStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}

