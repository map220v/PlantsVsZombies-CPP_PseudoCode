// Class: CustomLevelWaveTemplate


/* CustomLevelWaveTemplate::CustomLevelWaveTemplate(CustomLevelMgr*) */

void __thiscall
CustomLevelWaveTemplate::CustomLevelWaveTemplate
          (CustomLevelWaveTemplate *this,CustomLevelMgr *param_1)

{
  CustomLevelTemplate::CustomLevelTemplate((CustomLevelTemplate *)this,param_1);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__CustomLevelWaveTemplate_0665eab0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelWaveTemplate::~CustomLevelWaveTemplate() */

void __thiscall CustomLevelWaveTemplate::~CustomLevelWaveTemplate(CustomLevelWaveTemplate *this)

{
  bool bVar1;
  long *plVar2;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x18);
  *(undefined ***)this = &PTR__CustomLevelWaveTemplate_0665eab0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if ((long *)*plVar2 != (long *)0x0) {
      (**(code **)(*(long *)*plVar2 + 8))();
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<CustomLevelWaveAction*,std::allocator<CustomLevelWaveAction*>>::clear
            ((vector<CustomLevelWaveAction*,std::allocator<CustomLevelWaveAction*>> *)this_00);
  std::vector<CustomLevelWaveAction*,std::allocator<CustomLevelWaveAction*>>::~vector
            ((vector<CustomLevelWaveAction*,std::allocator<CustomLevelWaveAction*>> *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomLevelWaveTemplate::~CustomLevelWaveTemplate() */

void __thiscall CustomLevelWaveTemplate::~CustomLevelWaveTemplate(CustomLevelWaveTemplate *this)

{
  ~CustomLevelWaveTemplate(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelWaveTemplate::initActions() */

void __thiscall CustomLevelWaveTemplate::initActions(CustomLevelWaveTemplate *this)

{
  vector<CustomLevelWaveAction*,std::allocator<CustomLevelWaveAction*>> *this_00;
  CustomLevelWaveActionSandStorm *this_01;
  CustomLevelWaveActionSpiderRain *this_02;
  CustomLevelWaveActionPortal *this_03;
  CustomLevelWaveActionDinoRun *this_04;
  CustomLevelWaveActionRaidingParty *this_05;
  CustomLevelWaveActionFrostWind *this_06;
  CustomLevelWaveActionParachuteRain *this_07;
  CustomLevelWaveActionBlackHole *this_08;
  CustomLevelWaveActionSummonZombie *this_09;
  CustomLevelWaveActionSandStorm *local_10;
  long local_8;
  
  this_00 = (vector<CustomLevelWaveAction*,std::allocator<CustomLevelWaveAction*>> *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  this_01 = ::operator_new(8);
  CustomLevelWaveActionSandStorm::CustomLevelWaveActionSandStorm(this_01);
  local_10 = this_01;
  std::vector<CustomLevelWaveAction*,std::allocator<CustomLevelWaveAction*>>::push_back
            (this_00,(CustomLevelWaveAction **)&local_10);
  this_02 = ::operator_new(8);
  CustomLevelWaveActionSpiderRain::CustomLevelWaveActionSpiderRain(this_02);
  local_10 = (CustomLevelWaveActionSandStorm *)this_02;
  std::vector<CustomLevelWaveAction*,std::allocator<CustomLevelWaveAction*>>::push_back
            (this_00,(CustomLevelWaveAction **)&local_10);
  this_03 = ::operator_new(8);
  CustomLevelWaveActionPortal::CustomLevelWaveActionPortal(this_03);
  local_10 = (CustomLevelWaveActionSandStorm *)this_03;
  std::vector<CustomLevelWaveAction*,std::allocator<CustomLevelWaveAction*>>::push_back
            (this_00,(CustomLevelWaveAction **)&local_10);
  this_04 = ::operator_new(8);
  CustomLevelWaveActionDinoRun::CustomLevelWaveActionDinoRun(this_04);
  local_10 = (CustomLevelWaveActionSandStorm *)this_04;
  std::vector<CustomLevelWaveAction*,std::allocator<CustomLevelWaveAction*>>::push_back
            (this_00,(CustomLevelWaveAction **)&local_10);
  this_05 = ::operator_new(8);
  CustomLevelWaveActionRaidingParty::CustomLevelWaveActionRaidingParty(this_05);
  local_10 = (CustomLevelWaveActionSandStorm *)this_05;
  std::vector<CustomLevelWaveAction*,std::allocator<CustomLevelWaveAction*>>::push_back
            (this_00,(CustomLevelWaveAction **)&local_10);
  this_06 = ::operator_new(8);
  CustomLevelWaveActionFrostWind::CustomLevelWaveActionFrostWind(this_06);
  local_10 = (CustomLevelWaveActionSandStorm *)this_06;
  std::vector<CustomLevelWaveAction*,std::allocator<CustomLevelWaveAction*>>::push_back
            (this_00,(CustomLevelWaveAction **)&local_10);
  this_07 = ::operator_new(8);
  CustomLevelWaveActionParachuteRain::CustomLevelWaveActionParachuteRain(this_07);
  local_10 = (CustomLevelWaveActionSandStorm *)this_07;
  std::vector<CustomLevelWaveAction*,std::allocator<CustomLevelWaveAction*>>::push_back
            (this_00,(CustomLevelWaveAction **)&local_10);
  this_08 = ::operator_new(8);
  CustomLevelWaveActionBlackHole::CustomLevelWaveActionBlackHole(this_08);
  local_10 = (CustomLevelWaveActionSandStorm *)this_08;
  std::vector<CustomLevelWaveAction*,std::allocator<CustomLevelWaveAction*>>::push_back
            (this_00,(CustomLevelWaveAction **)&local_10);
  this_09 = ::operator_new(8);
  CustomLevelWaveActionSummonZombie::CustomLevelWaveActionSummonZombie(this_09);
  local_10 = (CustomLevelWaveActionSandStorm *)this_09;
  std::vector<CustomLevelWaveAction*,std::allocator<CustomLevelWaveAction*>>::push_back
            (this_00,(CustomLevelWaveAction **)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelWaveTemplate::generateWave(CustomLevelCreator&, std::vector<CustomWaveZombie,
   std::allocator<CustomWaveZombie> > const&, CustomWaveEvent const&, int, CustomLevelConfig const*)
    */

void __thiscall
CustomLevelWaveTemplate::generateWave
          (CustomLevelWaveTemplate *this,CustomLevelCreator *param_1,vector *param_2,
          CustomWaveEvent *param_3,int param_4,CustomLevelConfig *param_5)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  Sexy *this_00;
  CustomLevelMgr *this_01;
  wchar_t *pwVar5;
  undefined8 *puVar6;
  WaveManagerModuleProperties *pWVar7;
  string *extraout_x1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  RtId aRStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  undefined8 local_60 [2];
  undefined8 local_50 [2];
  string asStack_40 [8];
  int local_38;
  undefined4 local_2c;
  long local_8;
  
  lVar3 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (lVar3 == 0) {
    pWVar7 = CustomLevelCreator::AddModule<WaveManagerModuleProperties>(param_1);
    *(WaveManagerModuleProperties **)(this + 0x10) = pWVar7;
    CustomLevelCreator::AddAliasedObject<WaveManagerProperties>();
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(*(long *)(this + 0x10) + 0x40),
               (RtWeakPtr *)asStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_40);
    lVar3 = *(long *)(this + 0x10);
  }
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar3 + 0x40));
  CustomLevelCreator::AddAliasedObject<SpawnZombiesJitteredWaveActionProps>();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
  *(int *)(lVar4 + 0x58) = param_4;
  local_88 = FUN_035ce608(*(undefined8 *)param_2);
  local_80 = FUN_035ce658(*(undefined8 *)(param_2 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar1) {
    this_00 = (Sexy *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    cVar2 = FUN_0547419c();
    if (cVar2 == '\0') {
      this_01 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)this);
      std::string::string(asStack_40,"ValidZombies");
      cVar2 = CustomLevelMgr::IsValueValid(this_01,asStack_40,(string *)this_00);
      std::string::~string(asStack_40);
      nop();
      if (cVar2 != '\0') {
        SpawnZombiesJitteredInstruction::SpawnZombiesJitteredInstruction
                  ((SpawnZombiesJitteredInstruction *)asStack_40);
        Sexy::StringToWString(this_00,extraout_x1);
        pwVar5 = (wchar_t *)FUN_054766ec(auStack_78);
        Sexy::RtName::RtName((RtName *)local_60,pwVar5);
        Sexy::RtName::RtName((RtName *)local_50,L"ZombieTypes");
        Sexy::RtId::RtId(aRStack_70,(RtName *)local_60,(RtName *)local_50);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_70);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)asStack_40,(RtWeakPtr *)aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        Sexy::RtId::~RtId(aRStack_70);
        Sexy::RtName::~RtName((RtName *)local_50);
        Sexy::RtName::~RtName((RtName *)local_60);
        FUN_05476c50(auStack_78);
        local_38 = *(int *)(this_00 + 8);
        local_2c = *(undefined4 *)(this_00 + 0xc);
        if (local_38 == -1) {
          local_38 = 5;
        }
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
        std::vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>
        ::push_back((vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>
                     *)(lVar4 + 0x40),(SpawnZombiesJitteredInstruction *)asStack_40);
        SpawnZombiesJitteredInstruction::~SpawnZombiesJitteredInstruction
                  ((SpawnZombiesJitteredInstruction *)asStack_40);
      }
    }
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_88);
  }
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_90);
  cVar2 = std::
          vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>::
          empty((vector<SpawnZombiesJitteredInstruction,std::allocator<SpawnZombiesJitteredInstruction>>
                 *)(lVar4 + 0x40));
  if (cVar2 == '\0') {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_40);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_50,(RtWeakPtrBase *)aRStack_90);
    std::
    vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
    ::push_back((vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
                 *)asStack_40,(RtWeakPtr *)local_50);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    local_60[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(this + 0x18));
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x18));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)local_60,(__normal_iterator *)local_50), bVar1) {
      puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_60);
      (**(code **)(*(long *)*puVar6 + 0x10))
                ((long *)*puVar6,param_1,param_3,param_5,
                 (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_40);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_60);
    }
    std::
    vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
    ::push_back((vector<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>,std::allocator<std::vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>>>
                 *)(lVar3 + 0x10),(vector *)asStack_40);
    std::
    vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
    ::~vector((vector<Sexy::RtWeakPtr<WaveActionProperties>,std::allocator<Sexy::RtWeakPtr<WaveActionProperties>>>
               *)asStack_40);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelWaveTemplate::generateWaves(CustomLevelCreator&, CustomWaveData const&,
   CustomLevelConfig const*) */

void __thiscall
CustomLevelWaveTemplate::generateWaves
          (CustomLevelWaveTemplate *this,CustomLevelCreator *param_1,CustomWaveData *param_2,
          CustomLevelConfig *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  CustomLevelMgr *this_00;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  int local_1c;
  int local_18 [2];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x10) = 0;
  uVar5 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = FUN_035cbff8(uVar6,*(undefined8 *)(param_2 + 0x18));
    if (uVar2 <= uVar5) break;
    lVar3 = FUN_035cc018(uVar6,uVar5);
    generateWave(this,param_1,(vector *)(lVar3 + 8),(CustomWaveEvent *)(lVar3 + 0x28),
                 *(int *)(lVar3 + 0x20),param_3);
    uVar5 = uVar5 + 1;
  }
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(this + 0x10) + 0x40));
  local_1c = FUN_035cc028(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18));
  this_00 = (CustomLevelMgr *)Sexy::ProfileManager::GetListener((ProfileManager *)this);
  std::string::string(asStack_10,"MaxWaves");
  fVar7 = (float)CustomLevelMgr::GetGroupValue(this_00,asStack_10);
  local_18[0] = (int)fVar7;
  piVar4 = eastl::min_alt<int>(&local_1c,local_18);
  iVar1 = *piVar4;
  std::string::~string(asStack_10);
  nop();
  *(int *)(lVar3 + 0x2c) = iVar1;
  *(int *)(lVar3 + 0x28) = iVar1;
  std::string::string(asStack_10,"TimeToFirstWave");
  uVar8 = CustomLevelConfig::GetCommonConfigValue(param_3,asStack_10,18.0);
  *(undefined4 *)(lVar3 + 0x58) = uVar8;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"TimeToFirstWaveConveyor");
  uVar8 = CustomLevelConfig::GetCommonConfigValue(param_3,asStack_10,5.0);
  *(undefined4 *)(lVar3 + 0x5c) = uVar8;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"DelayBeforeHugeWave");
  uVar8 = CustomLevelConfig::GetCommonConfigValue(param_3,asStack_10,7.5);
  *(undefined4 *)(lVar3 + 0x60) = uVar8;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"MinNextWaveHealthPercent");
  uVar8 = CustomLevelConfig::GetCommonConfigValue(param_3,asStack_10,0.5);
  *(undefined4 *)(lVar3 + 0x50) = uVar8;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"MaxNextWaveHealthPercent");
  uVar8 = CustomLevelConfig::GetCommonConfigValue(param_3,asStack_10,0.65);
  *(undefined4 *)(lVar3 + 0x54) = uVar8;
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomLevelWaveTemplate::GenerateTemplate(CustomLevelCreator&, CustomLevelWorldParams const&,
   CustomLevelConfig const*) */

void __thiscall
CustomLevelWaveTemplate::GenerateTemplate
          (CustomLevelWaveTemplate *this,CustomLevelCreator *param_1,CustomLevelWorldParams *param_2
          ,CustomLevelConfig *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<CustomWave,std::allocator<CustomWave>>::empty
                    ((vector<CustomWave,std::allocator<CustomWave>> *)(param_2 + 0x38));
  if (cVar1 == '\0') {
    local_28 = FUN_035ce504(*(undefined8 *)(param_2 + 0x38));
    local_20 = FUN_035ce554(*(undefined8 *)(param_2 + 0x40));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar2)
    {
      lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      uVar4 = FUN_035ce608(*(undefined8 *)(lVar3 + 8));
      uVar5 = FUN_035ce658(*(undefined8 *)(lVar3 + 0x10));
      local_18 = FUN_035d1394(uVar4,uVar5);
      local_10 = FUN_035ce658(*(undefined8 *)(lVar3 + 0x10));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if (bVar2) {
        initActions(this);
        generateWaves(this,param_1,(CustomWaveData *)(param_2 + 0x28),param_3);
        break;
      }
      std::move_iterator<CustomWave*>::operator++((move_iterator<CustomWave*> *)&local_28);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

