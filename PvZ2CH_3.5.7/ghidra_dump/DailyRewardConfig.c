// Class: DailyRewardConfig


/* DailyRewardConfig::GetDailyRewardCount() */

void __thiscall DailyRewardConfig::GetDailyRewardCount(DailyRewardConfig *this)

{
  FUN_0494e1a0(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyRewardConfig::GetStartTime() */

void __thiscall DailyRewardConfig::GetStartTime(DailyRewardConfig *this)

{
  long lVar1;
  long lVar2;
  tm local_40;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF
            ((wchar_t *)
             "DailyRewardConfig GetStartTime, StartYear : %d, StartMonth : %d, StartDay : %d",
             (ulong)*(uint *)(this + 0xc),(ulong)*(uint *)(this + 0x10),
             (ulong)*(uint *)(this + 0x14));
  lVar2 = 0;
  if (((*(int *)(this + 0xc) != 0) && (*(int *)(this + 0x10) != 0)) && (*(uint *)(this + 0x14) != 0)
     ) {
    local_40.tm_zone = (char *)0x0;
    local_40.tm_wday = 0;
    local_40.tm_yday = 0;
    local_40.tm_sec = 0;
    local_40.tm_min = 0;
    local_40.tm_year = *(int *)(this + 0xc) + -0x76c;
    local_40.tm_mon = *(int *)(this + 0x10) + -1;
    local_40._8_8_ = (ulong)*(uint *)(this + 0x14) << 0x20;
    local_40.tm_isdst = 0;
    local_40._36_4_ = 0;
    local_40.tm_gmtoff = 0;
    lVar2 = Sexy::GetTimegm(&local_40);
    lVar1 = Sexy::GetBJTimeOffset();
    lVar2 = lVar2 - lVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


/* DailyRewardConfig::GetReward(int) */

undefined8 __thiscall DailyRewardConfig::GetReward(DailyRewardConfig *this,int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (-1 < param_1) {
    uVar2 = *(undefined8 *)(this + 0x18);
    uVar1 = FUN_0494e1a0(uVar2,*(undefined8 *)(this + 0x20));
    if ((ulong)(long)param_1 < uVar1) {
      uVar2 = FUN_0494e1d0(uVar2,(long)param_1);
      return uVar2;
    }
  }
  return 0;
}


/* DailyRewardConfig::NeedRefreshDailySignSheet() */

undefined8 __thiscall DailyRewardConfig::NeedRefreshDailySignSheet(DailyRewardConfig *this)

{
  int iVar1;
  long __time1;
  time_t __time0;
  double dVar2;
  double dVar3;
  
  __time1 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (__time1 == 0) {
    return 0;
  }
  __time0 = GetStartTime(this);
  dVar2 = difftime(__time1,__time0);
  dVar3 = dVar2 * 1.1574074074074073e-05;
  if (dVar2 < 0.0) {
    iVar1 = GetDailyRewardCount(this);
    Sexy::OutputDebugStrF
              ((wchar_t *)"DailyRewardConfig NeedRefreshDailySignSheet return true, difDays : %d",
               (ulong)((double)iVar1 < dVar3));
  }
  else {
    iVar1 = GetDailyRewardCount(this);
    if (dVar3 <= (double)iVar1) {
      Sexy::OutputDebugStrF
                ((wchar_t *)"DailyRewardConfig NeedRefreshDailySignSheet return false, difDays : %d"
                 ,0);
      return 0;
    }
    Sexy::OutputDebugStrF
              ((wchar_t *)"DailyRewardConfig NeedRefreshDailySignSheet return true, difDays : %d",
               (ulong)((double)iVar1 < dVar3));
  }
  return 1;
}


/* DailyRewardConfig::DailyRewardConfig() */

void __thiscall DailyRewardConfig::DailyRewardConfig(DailyRewardConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06913c00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* DailyRewardConfig::StaticNew() */

DailyRewardConfig * DailyRewardConfig::StaticNew(void)

{
  DailyRewardConfig *this;
  
  this = ::operator_new(0x30);
  DailyRewardConfig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyRewardConfig::CheckForUpdate() */

void DailyRewardConfig::CheckForUpdate(void)

{
  PVZCachedNetworkTableManager *pPVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  DailyRewardConfig *pDVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  PVZDB *pPVar10;
  long lVar11;
  long local_38;
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (local_38 == 0) {
    Sexy::OutputDebugStrF
              ((wchar_t *)"ghzhou DailyRewardConfig CheckForUpdate, ServerTime is unavailable");
    goto LAB_0494e8d0;
  }
  lVar5 = LawnApp::BeijingTime(gLawnApp,&local_38);
  Sexy::StrFormat("pvz2_drcn%d.txt",asStack_30,(ulong)(*(int *)(lVar5 + 0x10) + 1));
  GetFolder(asStack_28,3);
  FUN_031dcc6c(asStack_20,asStack_28,asStack_30);
  cVar2 = Sexy::SexyAppBase::FileExists((SexyAppBase *)gLawnApp,asStack_20);
  if (cVar2 == '\0') {
    pDVar6 = (DailyRewardConfig *)LawnApp::GetDailyRewardConfig(gLawnApp);
    uVar7 = GetDailyRewardCount(pDVar6);
    Sexy::OutputDebugStrF
              ((wchar_t *)"DailyRewardConfig CheckForUpdate, m_DailyRewardList.size() : %d",
               uVar7 & 0xffffffff);
LAB_0494e83c:
    uVar8 = FUN_0547429c(asStack_30);
    Sexy::OutputDebugStrF((wchar_t *)"DailyRewardConfig CheckForUpdate, drc_FileName : %s",uVar8);
    pPVar1 = (PVZCachedNetworkTableManager *)(gLawnApp + 0x29a8);
    pcVar9 = (char *)FUN_0547429c(asStack_30);
    std::string::string(asStack_10,pcVar9);
    PVZCachedNetworkTableManager::Watch(pPVar1,asStack_10,0x4b,0,1);
    std::string::~string(asStack_10);
    nop();
    LawnApp::IsNeedRefreshLoginDays(gLawnApp,true);
  }
  else {
    pPVar10 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    cVar2 = PVZDB::LoadPackageForTableFromFile(pPVar10,0x4b,asStack_20,0,1);
    pDVar6 = (DailyRewardConfig *)LawnApp::GetDailyRewardConfig(gLawnApp);
    uVar7 = GetDailyRewardCount(pDVar6);
    Sexy::OutputDebugStrF
              ((wchar_t *)"DailyRewardConfig CheckForUpdate, m_DailyRewardList.size() : %d",
               uVar7 & 0xffffffff);
    if (cVar2 == '\0') goto LAB_0494e83c;
    iVar3 = Android::Info::SysGetProductVersionCode();
    lVar11 = LawnApp::GetDailyRewardConfig(gLawnApp);
    iVar4 = FUN_0494e14c(*(undefined4 *)(lVar11 + 8));
    if (iVar3 < iVar4) {
      Sexy::StrFormat("pvz2_drc%d.txt",asStack_18,(ulong)(*(int *)(lVar5 + 0x10) + 1));
      FUN_031dcc6c(asStack_10,asStack_28,asStack_18);
      FUN_05474278(asStack_20,asStack_10);
      std::string::~string(asStack_10);
      cVar2 = Sexy::SexyAppBase::FileExists((SexyAppBase *)gLawnApp,asStack_20);
      if (cVar2 == '\0') {
LAB_0494e9c4:
        pPVar1 = (PVZCachedNetworkTableManager *)(gLawnApp + 0x29a8);
        pcVar9 = (char *)FUN_0547429c(asStack_18);
        std::string::string(asStack_10,pcVar9);
        PVZCachedNetworkTableManager::Watch(pPVar1,asStack_10,0x4b,0,1);
        std::string::~string(asStack_10);
        nop();
        pDVar6 = (DailyRewardConfig *)LawnApp::GetDailyRewardConfig(gLawnApp);
        cVar2 = NeedRefreshDailySignSheet(pDVar6);
        if (cVar2 != '\0') {
          LawnApp::IsNeedRefreshLoginDays(gLawnApp,true);
        }
      }
      else {
        pPVar10 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
        cVar2 = PVZDB::LoadPackageForTableFromFile(pPVar10,0x4b,asStack_20,0,1);
        if (cVar2 == '\0') goto LAB_0494e9c4;
      }
      std::string::~string(asStack_18);
    }
    else {
      pDVar6 = (DailyRewardConfig *)LawnApp::GetDailyRewardConfig(gLawnApp);
      cVar2 = NeedRefreshDailySignSheet(pDVar6);
      if (cVar2 != '\0') {
        uVar8 = FUN_0547429c(asStack_30);
        Sexy::OutputDebugStrF
                  ((wchar_t *)"DailyRewardConfig CheckForUpdate, drc_FileName : %s",uVar8);
        pPVar1 = (PVZCachedNetworkTableManager *)(gLawnApp + 0x29a8);
        pcVar9 = (char *)FUN_0547429c(asStack_30);
        std::string::string(asStack_10,pcVar9);
        PVZCachedNetworkTableManager::Watch(pPVar1,asStack_10,0x4b,0,1);
        std::string::~string(asStack_10);
        nop();
        LawnApp::IsNeedRefreshLoginDays(gLawnApp,true);
      }
    }
  }
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string(asStack_30);
LAB_0494e8d0:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* DailyRewardConfig::CheckDailyConfigValid(int) */

bool __thiscall DailyRewardConfig::CheckDailyConfigValid(DailyRewardConfig *this,int param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  PVZDB *pPVar4;
  
  lVar3 = LawnApp::GetRealBeijingTime(gLawnApp);
  if ((((lVar3 < 1) || (cVar1 = LawnApp::IsNetworkModuleOK(), cVar1 == '\0')) ||
      (lVar3 = FUN_0494e1a0(*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20)), lVar3 == 0))
     || (cVar1 = NeedRefreshDailySignSheet(this), cVar1 != '\0')) {
    return false;
  }
  pPVar4 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
  lVar3 = PVZDB::GetTable(pPVar4,0x4b);
  bVar2 = FUN_0494e134(*(undefined1 *)(lVar3 + 0x168));
  Sexy::OutputDebugStrF
            ((wchar_t *)"DailyRewardConfig CheckDailyConfigValid, local? %d",(ulong)bVar2);
  cVar1 = FUN_0494e134(*(undefined1 *)(lVar3 + 0x168));
  if (cVar1 == '\0') {
    return false;
  }
  Sexy::OutputDebugStrF
            ((wchar_t *)
             "DailyRewardConfig CheckDailyConfigValid, Client Version : %d, Config Version : %d",
             (ulong)(uint)param_1,(ulong)*(uint *)(this + 8));
  if (param_1 == 0) {
    return (bool)cVar1;
  }
  return *(int *)(this + 8) <= param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyRewardConfig::LoadDefaultDailyConfig() */

void DailyRewardConfig::LoadDefaultDailyConfig(void)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  PVZDB *pPVar4;
  long local_28;
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = LawnApp::GetRealBeijingTime(gLawnApp);
  if (local_28 < 1) {
    local_28 = time((time_t *)0x0);
  }
  lVar3 = LawnApp::BeijingTime(gLawnApp,&local_28);
  Sexy::StrFormat("pvz2_drc%d.txt",asStack_20,(ulong)(*(int *)(lVar3 + 0x10) + 1));
  GetFolder(asStack_10,3);
  std::operator+(asStack_10,asStack_20);
  std::string::~string(asStack_10);
  cVar1 = Sexy::SexyAppBase::FileExists((SexyAppBase *)gLawnApp,asStack_18);
  uVar2 = 0;
  if (cVar1 != '\0') {
    pPVar4 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    uVar2 = PVZDB::LoadPackageForTableFromFile(pPVar4,0x4b,asStack_18,0,1);
  }
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* DailyRewardConfig::~DailyRewardConfig() */

void __thiscall DailyRewardConfig::~DailyRewardConfig(DailyRewardConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_06913c00;
  std::vector<DailyRewardData,std::allocator<DailyRewardData>>::~vector
            ((vector<DailyRewardData,std::allocator<DailyRewardData>> *)(this + 0x18));
  nop();
  return;
}


/* DailyRewardConfig::~DailyRewardConfig() */

void __thiscall DailyRewardConfig::~DailyRewardConfig(DailyRewardConfig *this)

{
  ~DailyRewardConfig(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DailyRewardConfig::StaticClassInit() */

void DailyRewardConfig::StaticClassInit(void)

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
            (apStack_30,"coins",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 1;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"gems",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 2;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"key",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 3;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"plant",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 4;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"avatar",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 5;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"plant_piece",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 6;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"avatar_piece",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 7;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"accessory",(MagicianActionStatus *)local_38);
  std::
  vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>::
  push_back((vector<std::pair<std::string,unsigned_int>,std::allocator<std::pair<std::string,unsigned_int>>>
             *)avStack_20,(pair *)apStack_30);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
            ((pair<std::string_const,Sexy::PILifeValueTable> *)apStack_30);
  local_38[0] = 8;
  std::pair<std::string,unsigned_int>::
  pair<char_const(&)[10],ZombieCarnieMagician::MagicianActionStatus,void>
            (apStack_30,"accessory_piece",(MagicianActionStatus *)local_38);
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
    std::string::string((string *)apStack_30,"DailyRewardType");
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
    std::string::string((string *)avStack_20,"DailyRewardData");
    (*pcVar3)(plVar2,avStack_20,FUN_0494e528,0x10,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string((string *)avStack_20,"DailyRewardConfig");
    (*pcVar3)(plVar2,avStack_20,FUN_0494f1fc,0x30,0);
    std::string::~string((string *)avStack_20);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DailyRewardConfig::StaticGetClass() */

long * DailyRewardConfig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DailyRewardConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DailyRewardConfig::GetClass() const */

long * DailyRewardConfig::GetClass(void)

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
  (*pcVar3)(plVar1,"DailyRewardConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

