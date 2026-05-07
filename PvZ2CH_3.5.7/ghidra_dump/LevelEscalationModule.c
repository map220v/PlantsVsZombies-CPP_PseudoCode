// Class: LevelEscalationModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEscalationModule::StaticClassInit() */

void LevelEscalationModule::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"LevelEscalationModule");
    (*pcVar2)(plVar1,asStack_10,FUN_049d1464,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelEscalationModule::StaticGetClass() */

long * LevelEscalationModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"LevelEscalationModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelEscalationModule::LevelEscalationModule() */

void __thiscall LevelEscalationModule::LevelEscalationModule(LevelEscalationModule *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_06928fa0;
  return;
}


/* LevelEscalationModule::StaticNew() */

LevelEscalationModule * LevelEscalationModule::StaticNew(void)

{
  LevelEscalationModule *this;
  
  this = ::operator_new(0x18);
  LevelEscalationModule(this);
  return this;
}


/* LevelEscalationModule::~LevelEscalationModule() */

void __thiscall LevelEscalationModule::~LevelEscalationModule(LevelEscalationModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_06928fa0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* LevelEscalationModule::~LevelEscalationModule() */

void __thiscall LevelEscalationModule::~LevelEscalationModule(LevelEscalationModule *this)

{
  ~LevelEscalationModule(this);
  AK::FreeHook(this);
  return;
}


/* LevelEscalationModule::getPossibleZombies() */

void LevelEscalationModule::getPossibleZombies(void)

{
  LevelModule *in_x0;
  ResilienceTutorialIntroProperties *pRVar1;
  RtWeakPtr *pRVar2;
  ulong uVar3;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  ulong uVar4;
  undefined8 uVar5;
  
  pRVar1 = LevelModule::getProps<ResilienceTutorialIntroProperties>(in_x0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  uVar4 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(pRVar1 + 0x48);
    uVar3 = FUN_049d1184(uVar5,*(undefined8 *)(pRVar1 + 0x50));
    if (uVar3 <= uVar4) break;
    pRVar2 = (RtWeakPtr *)FUN_049d1190(uVar5,uVar4);
    std::vector<Sexy::RtWeakPtr<ZombieType>,std::allocator<Sexy::RtWeakPtr<ZombieType>>>::push_back
              ((vector<Sexy::RtWeakPtr<ZombieType>,std::allocator<Sexy::RtWeakPtr<ZombieType>>> *)
               in_x8,pRVar2);
    uVar4 = uVar4 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEscalationModule::configureJitteredWaves(int, Sexy::MTRand&, RandomJitteredWaveConfig*) */

void __thiscall
LevelEscalationModule::configureJitteredWaves
          (LevelEscalationModule *this,int param_1,MTRand *param_2,RandomJitteredWaveConfig *param_3
          )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ResilienceTutorialIntroProperties *pRVar7;
  ulong uVar8;
  long lVar9;
  RtWeakPtrBase *pRVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  ResourceInfo *local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar7 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  (**(code **)(*(long *)this + 0xa0))
            ((vector<Sexy::RtWeakPtr<ZombieType>,std::allocator<Sexy::RtWeakPtr<ZombieType>>> *)
             &local_20,this);
  uVar13 = local_20;
  uVar8 = FUN_049d1184(local_20,local_18);
  if (uVar8 == 0) {
    std::vector<Sexy::RtWeakPtr<ZombieType>,std::allocator<Sexy::RtWeakPtr<ZombieType>>>::~vector
              ((vector<Sexy::RtWeakPtr<ZombieType>,std::allocator<Sexy::RtWeakPtr<ZombieType>>> *)
               &local_20);
  }
  else {
    iVar11 = *(int *)(pRVar7 + 0x68);
    iVar2 = *(int *)(pRVar7 + 100);
    uVar6 = *(undefined4 *)(pRVar7 + 0x6c);
    uVar3 = *(undefined4 *)(pRVar7 + 0x70);
    iVar4 = iVar2 * *(int *)(pRVar7 + 0x60);
    if (0 < iVar11) {
      if (iVar4 < iVar2) goto LAB_049d1e14;
      iVar5 = iVar2 + -2;
      do {
        iVar11 = iVar11 + -1;
        lVar9 = RandomJitteredWaveConfig::EnsureInstructionForWave(param_3,iVar5);
        iVar1 = iVar2 + 1 + iVar5;
        iVar5 = iVar5 + iVar2;
        *(int *)(lVar9 + 0x38) = *(int *)(lVar9 + 0x38) + 1;
        uVar13 = local_20;
      } while (iVar1 < iVar4 && 0 < iVar11);
      for (; local_20 = uVar13, iVar11 != 0; iVar11 = iVar11 + -1) {
LAB_049d1e14:
        iVar5 = Sexy::MTRand::Next(param_2,iVar4);
        lVar9 = RandomJitteredWaveConfig::EnsureInstructionForWave(param_3,iVar5);
        *(int *)(lVar9 + 0x38) = *(int *)(lVar9 + 0x38) + 1;
        uVar13 = local_20;
      }
      uVar8 = FUN_049d1184(uVar13,local_18);
    }
    uVar12 = 0;
    while (uVar12 < uVar8) {
      pRVar10 = (RtWeakPtrBase *)FUN_049d1198(uVar13);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,pRVar10);
      lVar9 = RandomJitteredWaveConfig::EnsureInstructionForWave(param_3,0);
      local_28 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
      std::vector<ZombieType_const*,std::allocator<ZombieType_const*>>::push_back
                ((vector<ZombieType_const*,std::allocator<ZombieType_const*>> *)(lVar9 + 8),
                 (ZombieType **)&local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      uVar13 = local_20;
      uVar8 = FUN_049d1184(local_20,local_18);
      uVar12 = uVar12 + 1;
    }
    *(int *)(param_3 + 8) = iVar2;
    *(int *)(param_3 + 4) = iVar4;
    *(undefined4 *)(param_3 + 0xc) = uVar3;
    *(undefined4 *)(param_3 + 0x10) = uVar6;
    uVar6 = CalcRandomSeed(1);
    *(undefined4 *)(param_3 + 0x14) = uVar6;
    std::vector<Sexy::RtWeakPtr<ZombieType>,std::allocator<Sexy::RtWeakPtr<ZombieType>>>::~vector
              ((vector<Sexy::RtWeakPtr<ZombieType>,std::allocator<Sexy::RtWeakPtr<ZombieType>>> *)
               &local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEscalationModule::postInitialize() */

void __thiscall LevelEscalationModule::postInitialize(LevelEscalationModule *this)

{
  bool bVar1;
  uint uVar2;
  ResilienceTutorialIntroProperties *pRVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  ulong uVar4;
  undefined8 uVar5;
  WaveManagerProperties *extraout_x0;
  WaveManager *this_01;
  long lVar6;
  ResourceInfo *pRVar7;
  WaveManagerProperties *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_13f8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_13f0 [8];
  RandomJitteredWaveConfig aRStack_13e8 [8];
  undefined4 local_13e0;
  MTRand aMStack_13a0 [5016];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)FUN_049d1704(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
  if (this_00 !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    uVar4 = CalcRandomSeed(1);
    Sexy::MTRand::MTRand(aMStack_13a0,uVar4 & 0xffffffff);
    uVar5 = WaveManagerProperties::StaticGetClass();
    GameObject::Create(uVar5,0x35);
    nop();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(pRVar3 + 0x40));
    if (bVar1) {
      this_02 = (WaveManagerProperties *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(pRVar3 + 0x40));
      WaveManagerProperties::ShallowCopyInto(this_02,extraout_x0);
    }
    RandomJitteredWaveConfig::RandomJitteredWaveConfig(aRStack_13e8);
    configureJitteredWaves(this,0,aMStack_13a0,aRStack_13e8);
    WaveHelpers::GenerateRandomJitteredWaves(aRStack_13e8,extraout_x0);
    *(undefined4 *)(extraout_x0 + 0x28) = local_13e0;
    nop();
    this_01 = (WaveManager *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this_00);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_13f0,(RtWeakPtrBase *)aRStack_13f8);
    lVar6 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar6 + 0xa0));
    WaveManager::Initialize(this_01,aRStack_13f0,pRVar7,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_13f0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_13f8);
    uVar2 = CalcRandomSeed(1);
    WaveManager::ReseedRandomness(this_01,uVar2);
    RandomJitteredWaveConfig::~RandomJitteredWaveConfig(aRStack_13e8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

