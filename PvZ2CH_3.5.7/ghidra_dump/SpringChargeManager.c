// Class: SpringChargeManager


/* SpringChargeManager::GetTargetRequiredDays(int) */

undefined4 __thiscall
SpringChargeManager::GetTargetRequiredDays(SpringChargeManager *this,int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_039436f4(*(undefined8 *)(this + 0x58),(long)param_1);
  return *puVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringChargeManager::getEndTimeByPlantId(int) */

void __thiscall SpringChargeManager::getEndTimeByPlantId(SpringChargeManager *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined8 uVar3;
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
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      uVar3 = 0;
LAB_03945260:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == param_1) {
      uVar3 = *(undefined8 *)(piVar2 + 2);
      goto LAB_03945260;
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringChargeManager::isHaveExpPlantID(int) */

void __thiscall SpringChargeManager::isHaveExpPlantID(SpringChargeManager *this,int param_1)

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
                      *)(this + 8));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if ((!bVar1) ||
       (piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18),
       *piVar2 == param_1)) break;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringChargeManager::isExpPlantUseful(int) */

void __thiscall SpringChargeManager::isExpPlantUseful(SpringChargeManager *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  long lVar3;
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
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if ((!bVar1) ||
       ((piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18),
        *piVar2 == param_1 &&
        (lVar3 = LawnApp::GetRealServerTime(gLawnApp), lVar3 < *(long *)(piVar2 + 2))))) break;
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringChargeManager::getExChangePrice(int) const */

void __thiscall SpringChargeManager::getExChangePrice(SpringChargeManager *this,int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0394541c(*(undefined8 *)(this + 0x40));
  local_10 = FUN_0394546c(*(undefined8 *)(this + 0x48));
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    uVar2 = (uint)bVar1;
    if (!bVar1) {
LAB_0394553c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar3 == param_1) {
      uVar2 = piVar3[1];
      goto LAB_0394553c;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringChargeManager::UpdateBehaviorPurchaseLog(int) */

void __thiscall
SpringChargeManager::UpdateBehaviorPurchaseLog(SpringChargeManager *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  string asStack_1a0 [8];
  string asStack_198 [8];
  string asStack_190 [8];
  string asStack_188 [8];
  string asStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_1a0,"");
  nop();
  std::string::string(asStack_198,"");
  nop();
  std::string::string(asStack_190,"");
  nop();
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  FUN_0546065c(auStack_168,param_1);
  FUN_05462824(asStack_180,auStack_178);
  FUN_05474278(asStack_1a0,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  uVar2 = getExChangePrice(this,param_1);
  FUN_0546065c(auStack_168,uVar2);
  FUN_05462824(asStack_180,auStack_178);
  FUN_05474278(asStack_198,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  cVar1 = isExpPlantUseful(this,param_1);
  if (cVar1 == '\0') {
    FUN_054603b8(auStack_168,&DAT_05594210);
  }
  else {
    FUN_054603b8(auStack_168,&DAT_055941c8);
  }
  FUN_05462824(asStack_180,auStack_178);
  FUN_05474278(asStack_190,asStack_180);
  std::string::~string(asStack_180);
  std::string::string(asStack_180,"");
  FUN_05462980(auStack_178,asStack_180);
  std::string::~string(asStack_180);
  nop();
  std::string::string(asStack_188,"Store");
  std::string::string(asStack_180,"Experience_Card");
  BehaviorLog::itemPurchaseEx(asStack_188,asStack_180,asStack_1a0,asStack_198,asStack_190);
  std::string::~string(asStack_180);
  nop();
  std::string::~string(asStack_188);
  nop();
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_190);
  std::string::~string(asStack_198);
  std::string::~string(asStack_1a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SpringChargeManager::SpringChargeManager() */

void __thiscall SpringChargeManager::SpringChargeManager(SpringChargeManager *this)

{
  Sexy::LazySingleton<SpringChargeManager>::LazySingleton
            ((LazySingleton<SpringChargeManager> *)this);
  *(undefined ***)this = &PTR__SpringChargeManager_066cfd50;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  SpringDailyLoginConfig::SpringDailyLoginConfig((SpringDailyLoginConfig *)(this + 0x70));
  *(undefined4 *)(this + 0x118) = 0xffffffff;
  return;
}


/* SpringChargeManager::onSaveDialogOK() */

void __thiscall SpringChargeManager::onSaveDialogOK(SpringChargeManager *this)

{
  TGPieceTableUI *this_00;
  
  LawnApp::KillPVZ2Dialog(gLawnApp);
  this_00 = (TGPieceTableUI *)UISingletonDialog<UISpringBuyPlant>::ShowDialog();
  TGPieceTableUI::SetMinChips(this_00,*(int *)(this + 0x118));
  UISpringBuyPlant::initUI((UISpringBuyPlant *)this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringChargeManager::isPlantAlreadyBuy(int) */

void __thiscall SpringChargeManager::isPlantAlreadyBuy(SpringChargeManager *this,int param_1)

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
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                       (uVar2,uVar3,local_24);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* SpringChargeManager::~SpringChargeManager() */

void __thiscall SpringChargeManager::~SpringChargeManager(SpringChargeManager *this)

{
  *(undefined ***)this = &PTR__SpringChargeManager_066cfd50;
  SpringDailyLoginConfig::~SpringDailyLoginConfig((SpringDailyLoginConfig *)(this + 0x70));
  std::vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>>::~vector
            ((vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>> *)(this + 0x58));
  std::vector<stExPlantData,std::allocator<stExPlantData>>::~vector
            ((vector<stExPlantData,std::allocator<stExPlantData>> *)(this + 0x40));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x20));
  std::vector<stExperPlantInfo,std::allocator<stExperPlantInfo>>::~vector
            ((vector<stExperPlantInfo,std::allocator<stExperPlantInfo>> *)(this + 8));
  Sexy::LazySingleton<SpringChargeManager>::~LazySingleton
            ((LazySingleton<SpringChargeManager> *)this);
  return;
}


/* SpringChargeManager::~SpringChargeManager() */

void __thiscall SpringChargeManager::~SpringChargeManager(SpringChargeManager *this)

{
  ~SpringChargeManager(this);
  AK::FreeHook(this);
  return;
}


/* SpringChargeManager::GetLoginDatas() */

vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>> *
SpringChargeManager::GetLoginDatas(void)

{
  long in_x0;
  vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>> *in_x8;
  
  std::vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>>::vector
            (in_x8,(vector *)(in_x0 + 0x58));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringChargeManager::eraseExpPlantInfoByID(int) */

void __thiscall SpringChargeManager::eraseExpPlantInfoByID(SpringChargeManager *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_18 = 0;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*piVar2 == param_1) break;
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::vector<stExperPlantInfo,std::allocator<stExperPlantInfo>>::erase
                         ((vector<stExperPlantInfo,std::allocator<stExperPlantInfo>> *)this_00,
                          local_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringChargeManager::updateExpPlants() */

void __thiscall SpringChargeManager::updateExpPlants(SpringChargeManager *this)

{
  bool bVar1;
  LawnApp *this_00;
  bool bVar2;
  char cVar3;
  int *piVar4;
  PlantNameMapperServerID *this_01;
  ulong uVar5;
  ProfileMgr *this_02;
  PlayerInfo *this_03;
  PVZ2UIDialog *pPVar6;
  int iVar7;
  wstring awStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  RtMixedPtrBase aRStack_60 [8];
  wstring awStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05476574(awStack_78);
  iVar7 = 0;
  bVar1 = false;
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 8));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar2) {
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    cVar3 = isExpPlantUseful(this,*piVar4);
    if (cVar3 == '\0') {
      this_01 = (PlantNameMapperServerID *)PlantNameMapperServerID::GetInstance();
      PlantNameMapperServerID::GetTypeForID(this_01,*piVar4);
      cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
      if (cVar3 == '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
        ;
      }
      else {
        *(int *)(this + 0x118) = *piVar4;
        iVar7 = iVar7 + 1;
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)aRStack_60);
        Plant::GetFormattedNameString((Plant *)awStack_58,aRStack_50);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50)
        ;
        uVar5 = FUN_039437ac(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
        if ((ulong)(long)iVar7 < uVar5) {
          std::operator+(awStack_58,L",");
          thunk_FUN_05477668(awStack_78,aRStack_50);
          FUN_05476c50(aRStack_50);
        }
        bVar1 = true;
        eraseExpPlantInfoByID(this,*piVar4);
        this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        this_03 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
        PlayerInfo::eraseExperiencePlants(this_03,*piVar4);
        FUN_05476c50(awStack_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
        ;
      }
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_70);
  }
  if (bVar1) {
    TodStringTranslate(L"[SPRING_EXPPLANT_TIPS]");
    thunk_FUN_05477668(awStack_78,(wstring *)aRStack_50);
    FUN_05476c50((wstring *)aRStack_50);
    this_00 = gLawnApp;
    FUN_05478178((wstring *)aRStack_50,L"[REVIVE_TIP]",awStack_58);
    pPVar6 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this_00,(wstring *)aRStack_50,awStack_78);
    FUN_05476c50((wstring *)aRStack_50);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",aRStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onSaveDialogOK);
    Sexy::Delegate0::Delegate0<SpringChargeManager,void(SpringChargeManager::*)()>
              (aDStack_38,(wstring *)aRStack_50);
    PVZ2UIDialog::AddButton(pPVar6,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  FUN_05476c50(awStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringChargeManager::eraseNotBuyExpPlants(int) */

void __thiscall SpringChargeManager::eraseNotBuyExpPlants(SpringChargeManager *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int *piVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_18 = 0;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x20);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    while( true ) {
      if (!bVar1) {
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (*piVar2 == param_1) break;
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(this_00);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    }
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    local_18 = std::vector<int,std::allocator<int>>::erase
                         ((vector<int,std::allocator<int>> *)this_00,local_10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringChargeManager::UpdateBehaviorEventLog() */

void __thiscall SpringChargeManager::UpdateBehaviorEventLog(SpringChargeManager *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  string asStack_1a8 [8];
  string asStack_1a0 [8];
  string asStack_198 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_190 [24];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [352];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar7 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_190);
  std::string::string(asStack_198,"Experience_Card");
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_190,asStack_198);
  std::string::~string(asStack_198);
  nop();
  std::string::string(asStack_1a8,"");
  nop();
  uVar2 = operator|(0x10,8);
  FUN_05462470(auStack_178,uVar2);
  while( true ) {
    uVar8 = *(undefined8 *)(this + 0x40);
    uVar5 = FUN_0394377c(uVar8,*(undefined8 *)(this + 0x48));
    if (uVar5 <= uVar7) break;
    puVar6 = (undefined4 *)FUN_039437a4(uVar8,uVar7);
    FUN_0546065c(auStack_168,*puVar6);
    FUN_05462824(asStack_198,auStack_178);
    thunk_FUN_054757c0(asStack_1a8,asStack_198);
    std::string::~string(asStack_198);
    std::string::string(asStack_198,"");
    FUN_05462980(auStack_178,asStack_198);
    std::string::~string(asStack_198);
    nop();
    FUN_05475ad8(asStack_1a8,&DAT_055933a0);
    iVar3 = PlantNameMapperServerID::GetInstance();
    NameMapperBase::GetNameForId(iVar3);
    cVar1 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_1a0);
    if (cVar1 == '\0') {
      FUN_054603b8(auStack_168,&DAT_055941c8);
    }
    else {
      FUN_054603b8(auStack_168,&DAT_05594210);
    }
    FUN_05462824(asStack_198,auStack_178);
    thunk_FUN_054757c0(asStack_1a8,asStack_198);
    std::string::~string(asStack_198);
    lVar4 = FUN_0394377c(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x48));
    if (uVar7 < lVar4 - 1U) {
      FUN_05475ad8(asStack_1a8,&DAT_05593348);
    }
    uVar7 = uVar7 + 1;
    std::string::string(asStack_198,"");
    FUN_05462980(auStack_178,asStack_198);
    std::string::~string(asStack_198);
    nop();
    std::string::~string(asStack_1a0);
  }
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)avStack_190,asStack_1a8);
  std::string::string(asStack_1a0,"Join");
  std::string::string(asStack_198,"");
  BehaviorLog::event(asStack_1a0,(vector *)avStack_190,asStack_198);
  std::string::~string(asStack_198);
  nop();
  std::string::~string(asStack_1a0);
  nop();
  FUN_054617bc(auStack_178);
  std::string::~string(asStack_1a8);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)avStack_190);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringChargeManager::GetCurrentLoginLevel() */

void SpringChargeManager::GetCurrentLoginLevel(void)

{
  long in_x0;
  ulong uVar1;
  int *piVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  int iVar3;
  undefined8 uVar4;
  int local_c;
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  uVar4 = *(undefined8 *)(in_x0 + 0x58);
  local_c = 0;
  uVar1 = FUN_0394372c(uVar4,*(undefined8 *)(in_x0 + 0x60));
  do {
    if (uVar1 <= (ulong)(long)iVar3) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if ((long)iVar3 == uVar1 - 1) {
      piVar2 = (int *)FUN_039436f4(uVar4);
      if (((char)piVar2[1] == '\0') && (*piVar2 <= *(int *)(in_x0 + 0x78))) {
LAB_03949670:
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)in_x8,&local_c);
        iVar3 = local_c;
        uVar4 = *(undefined8 *)(in_x0 + 0x58);
        uVar1 = FUN_0394372c(uVar4,*(undefined8 *)(in_x0 + 0x60));
      }
    }
    else {
      piVar2 = (int *)FUN_039436f4(uVar4);
      if (((char)piVar2[1] == '\0') && (*piVar2 <= *(int *)(in_x0 + 0x78))) goto LAB_03949670;
    }
    iVar3 = iVar3 + 1;
    local_c = iVar3;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringChargeManager::InitTestData() */

void __thiscall SpringChargeManager::InitTestData(SpringChargeManager *this)

{
  vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>> *this_00;
  ExpPlantLoginData aEStack_10 [8];
  long local_8;
  
  this_00 = (vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>> *)(this + 0x58);
  *(undefined4 *)(this + 0x78) = 0xc;
  local_8 = ___stack_chk_guard;
  ExpPlantLoginData::ExpPlantLoginData(aEStack_10,1,false);
  std::vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>>::push_back(this_00,aEStack_10);
  ExpPlantLoginData::ExpPlantLoginData(aEStack_10,3,false);
  std::vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>>::push_back(this_00,aEStack_10);
  ExpPlantLoginData::ExpPlantLoginData(aEStack_10,5,false);
  std::vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>>::push_back(this_00,aEStack_10);
  ExpPlantLoginData::ExpPlantLoginData(aEStack_10,7,false);
  std::vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>>::push_back(this_00,aEStack_10);
  ExpPlantLoginData::ExpPlantLoginData(aEStack_10,9,false);
  std::vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>>::push_back(this_00,aEStack_10);
  ExpPlantLoginData::ExpPlantLoginData(aEStack_10,0xb,false);
  std::vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>>::push_back(this_00,aEStack_10);
  ExpPlantLoginData::ExpPlantLoginData(aEStack_10,0xe,false);
  std::vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>>::push_back(this_00,aEStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringChargeManager::UpdateLoginDatas(std::vector<ExpPlantLoginConfig,
   std::allocator<ExpPlantLoginConfig> > const&) */

void __thiscall SpringChargeManager::UpdateLoginDatas(SpringChargeManager *this,vector *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 local_10;
  undefined1 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>>::clear
            ((vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>> *)(this + 0x58));
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)param_1;
    uVar4 = FUN_03943754(uVar6,*(undefined8 *)(param_1 + 8));
    if (uVar4 <= uVar5) break;
    puVar3 = (undefined4 *)FUN_03943760(uVar6,uVar5);
    uVar1 = *puVar3;
    uVar2 = *(undefined1 *)(puVar3 + 1);
    ExpPlantLoginData::ExpPlantLoginData((ExpPlantLoginData *)&local_10);
    local_10 = uVar1;
    local_c = uVar2;
    std::vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>>::push_back
              ((vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>> *)(this + 0x58),
               (ExpPlantLoginData *)&local_10);
    uVar5 = uVar5 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringChargeManager::setEndTimeByPlantId(int, long) */

void __thiscall
SpringChargeManager::setEndTimeByPlantId(SpringChargeManager *this,int param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isHaveExpPlantID(this,param_1);
  if (cVar1 == '\0') {
    stExperPlantInfo::stExperPlantInfo((stExperPlantInfo *)&local_18);
    local_18 = CONCAT44(local_18._4_4_,param_1);
    local_10 = param_2;
    std::vector<stExperPlantInfo,std::allocator<stExperPlantInfo>>::push_back
              ((vector<stExperPlantInfo,std::allocator<stExperPlantInfo>> *)(this + 8),
               (stExperPlantInfo *)&local_18);
  }
  else {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 8));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 8));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      if (*piVar3 == param_1) {
        *(long *)(piVar3 + 2) = param_2;
        break;
      }
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringChargeManager::loadData(SpringDailyLoginConfig const&) */

void __thiscall
SpringChargeManager::loadData(SpringChargeManager *this,SpringDailyLoginConfig *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 local_18 [2];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<stExperPlantInfo,std::allocator<stExperPlantInfo>>::clear
            ((vector<stExperPlantInfo,std::allocator<stExperPlantInfo>> *)(this + 8));
  for (uVar5 = 0;
      uVar4 = FUN_039432a8(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30)),
      uVar5 < uVar4; uVar5 = uVar5 + 1) {
    stExperPlantInfo::stExperPlantInfo((stExperPlantInfo *)local_18);
    puVar2 = (undefined4 *)FUN_039432b4(*(undefined8 *)(param_1 + 0x28),uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    local_18[0] = *puVar2;
    iVar1 = FUN_03943768(uVar6,*(undefined8 *)(param_1 + 0x18));
    if ((int)uVar5 < iVar1) {
      puVar3 = (undefined8 *)FUN_03943774(uVar6,uVar5);
      local_10 = *puVar3;
    }
    std::vector<stExperPlantInfo,std::allocator<stExperPlantInfo>>::push_back
              ((vector<stExperPlantInfo,std::allocator<stExperPlantInfo>> *)(this + 8),
               (stExperPlantInfo *)local_18);
  }
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x20),(vector *)(param_1 + 0x78));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x74);
  std::vector<stExPlantData,std::allocator<stExPlantData>>::operator=
            ((vector<stExPlantData,std::allocator<stExPlantData>> *)(this + 0x40),
             (vector *)(param_1 + 0x58));
  std::vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>>::operator=
            ((vector<ExpPlantLoginData,std::allocator<ExpPlantLoginData>> *)(this + 0x58),
             (vector *)(param_1 + 0x90));
  SpringDailyLoginConfig::operator=((SpringDailyLoginConfig *)(this + 0x70),param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

