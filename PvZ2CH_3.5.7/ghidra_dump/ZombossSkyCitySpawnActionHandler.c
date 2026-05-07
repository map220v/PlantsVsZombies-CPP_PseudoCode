// Class: ZombossSkyCitySpawnActionHandler


/* ZombossSkyCitySpawnActionHandler::onSummonAnimationEnd(std::string const&) */

void ZombossSkyCitySpawnActionHandler::onSummonAnimationEnd(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCitySpawnActionHandler::StaticClassInit() */

void ZombossSkyCitySpawnActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSkyCitySpawnActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0472cec8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSkyCitySpawnActionHandler::StaticGetClass() */

long * ZombossSkyCitySpawnActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSkyCitySpawnActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCitySpawnActionHandler::GetClass() const */

long * ZombossSkyCitySpawnActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSkyCitySpawnActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCitySpawnActionHandler::waveHasPlantfoodCarryingZombie(std::vector<Sexy::RtWeakPtr<ZombieType
   const>, std::allocator<Sexy::RtWeakPtr<ZombieType const> > >) const */

void __thiscall
ZombossSkyCitySpawnActionHandler::waveHasPlantfoodCarryingZombie
          (undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  RtWeakPtrBase *pRVar2;
  ZombieType *this;
  long lVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_0472a700(*param_2);
  local_10 = FUN_0472a750(param_2[1]);
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_0472a840:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    pRVar2 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar2);
    this = (ZombieType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    lVar3 = ZombieType::GetProps(this);
    cVar1 = *(char *)(lVar3 + 0x38);
    if (cVar1 != '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      goto LAB_0472a840;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* ZombossSkyCitySpawnActionHandler::ZombossSkyCitySpawnActionHandler() */

void __thiscall
ZombossSkyCitySpawnActionHandler::ZombossSkyCitySpawnActionHandler
          (ZombossSkyCitySpawnActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c2b80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x40) = uVar1;
  return;
}


/* ZombossSkyCitySpawnActionHandler::StaticNew() */

ZombossSkyCitySpawnActionHandler * ZombossSkyCitySpawnActionHandler::StaticNew(void)

{
  ZombossSkyCitySpawnActionHandler *this;
  
  this = ::operator_new(0x48);
  ZombossSkyCitySpawnActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCitySpawnActionHandler::spawnZombie(Sexy::RtWeakPtr<ZombieType const>) const */

void __thiscall
ZombossSkyCitySpawnActionHandler::spawnZombie
          (ZombossSkyCitySpawnActionHandler *this,RtWeakPtrBase *param_2)

{
  int iVar1;
  Zombie *pZVar2;
  long *plVar3;
  code *pcVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  pZVar2 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  local_30 = Zombie::GetSummonZombieLevel(pZVar2);
  local_2b = 1;
  plVar3 = *(long **)(gLawnApp + 0x9f0);
  pcVar4 = *(code **)(*plVar3 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,param_2);
  pZVar2 = (Zombie *)(*pcVar4)(plVar3,aRStack_38,0xfffffffb,(SpawnZombieParams *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  iVar1 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  Board::PlaceZombieInRow(*(Board **)(gLawnApp + 0x9f0),pZVar2,iVar1,true,true);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pZVar2);
}


/* ZombossSkyCitySpawnActionHandler::~ZombossSkyCitySpawnActionHandler() */

void __thiscall
ZombossSkyCitySpawnActionHandler::~ZombossSkyCitySpawnActionHandler
          (ZombossSkyCitySpawnActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c2b80;
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossSkyCitySpawnActionHandler::~ZombossSkyCitySpawnActionHandler() */

void __thiscall
ZombossSkyCitySpawnActionHandler::~ZombossSkyCitySpawnActionHandler
          (ZombossSkyCitySpawnActionHandler *this)

{
  ~ZombossSkyCitySpawnActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCitySpawnActionHandler::onUpdateAction() */

void __thiscall
ZombossSkyCitySpawnActionHandler::onUpdateAction(ZombossSkyCitySpawnActionHandler *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombossHydraSprayActionDefinition *pZVar5;
  int *piVar6;
  vector<Loot,std::allocator<Loot>> *this_02;
  long lVar7;
  RtWeakPtrBase *pRVar8;
  Zombie *this_03;
  undefined4 *puVar9;
  RtWeakPtr<Sexy::ResourceInfo> *this_04;
  ZombieType *this_05;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  int local_24;
  int local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  cVar2 = (**(code **)(*(long *)this_01 + 0xa90))();
  if ((cVar2 == '\0') && (fVar10 = (float)PVZ_T(), *(float *)(this + 0x40) <= fVar10)) {
    pZVar5 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
    fVar13 = *(float *)(this + 0x40);
    fVar10 = *(float *)(pZVar5 + 0x5c);
    fVar11 = (float)PVZ_T();
    fVar12 = *(float *)(this + 0x40);
    local_20[0] = FUN_04725ff0(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
    local_24 = (int)((fVar11 - fVar12) / ((fVar10 + fVar13) - fVar12)) * local_20[0] + 1;
    piVar6 = eastl::min_alt<int>(&local_24,local_20);
    iVar1 = *piVar6;
    do {
      iVar3 = *(int *)(this + 0x44);
      do {
        if (iVar1 <= iVar3) goto LAB_0472e054;
        pRVar8 = (RtWeakPtrBase *)FUN_04725ffc(*(undefined8 *)(this + 0x28),(long)iVar3);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_20,pRVar8);
        this_03 = (Zombie *)spawnZombie(this,(RtWeakPtr<Sexy::SoundResource> *)local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
        *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
        iVar3 = ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_01);
        iVar4 = ZombieZombossMech::GetZombieWaveCounter(this_01);
        if (iVar3 == iVar4) {
          std::
          vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
          ::vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                    *)local_20,(vector *)(this + 0x28));
          cVar2 = waveHasPlantfoodCarryingZombie(this,(RtWeakPtr<Sexy::SoundResource> *)local_20);
          std::
          vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
          ::~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                     *)local_20);
          if (cVar2 == '\0') {
LAB_0472e1b4:
            Zombie::SetHasPlantFood(SUB81(this_03,0));
            iVar4 = ZombossHydraSpawnActionHandler::pickPlantfoodSpawnDelay();
            ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_01,iVar3 + 1 + iVar4);
          }
          else {
            this_04 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_03);
            this_05 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_04);
            lVar7 = ZombieType::GetProps(this_05);
            if (*(char *)(lVar7 + 0x38) != '\0') {
              lVar7 = FUN_04725ff0(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
              dVar14 = (double)(lVar7 + 1);
              iVar4 = Sexy::Rand((int)dVar14);
              if ((double)iVar4 / dVar14 < 1.0 / dVar14) goto LAB_0472e1b4;
            }
          }
        }
        this_02 = (vector<Loot,std::allocator<Loot>> *)
                  ZombieZombossMech::GetLootForSpawnedZombies(this_01);
        iVar3 = *(int *)(this + 0x44);
        lVar7 = FUN_04725ff0(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
      } while (lVar7 != iVar3);
      cVar2 = std::vector<Loot,std::allocator<Loot>>::empty(this_02);
      if (cVar2 == '\0') {
        puVar9 = (undefined4 *)
                 std::vector<unsigned_int,std::allocator<unsigned_int>>::back
                           ((vector<unsigned_int,std::allocator<unsigned_int>> *)this_02);
        Zombie::SetLoot(this_03,*puVar9);
        FUN_04726030(this_02 + 8);
      }
    } while( true );
  }
LAB_0472e054:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0472ef3c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSkyCitySpawnActionHandler::pickZombiesForSpawn() */

void __thiscall
ZombossSkyCitySpawnActionHandler::pickZombiesForSpawn(ZombossSkyCitySpawnActionHandler *this)

{
  RtObject *this_00;
  ZombieZombossMech *pZVar1;
  long extraout_x0;
  ulong uVar2;
  string *psVar3;
  ulong uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_13d8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_13d0 [48];
  MTRand aMStack_13a0 [5016];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  pZVar1 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  clear((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
         *)(this + 0x28));
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_13d0);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_13d0);
  fVar5 = (float)FUN_04725fc0(*(undefined4 *)(pZVar1 + 0x284));
  auVar6 = FUN_04725fbc(*(undefined4 *)(pZVar1 + 0x280));
  fVar5 = CurveLerp<float>(auVar6,fVar5,fVar5 - auVar6._0_4_,extraout_x0 + 0x68,extraout_x0 + 0x6c,1
                          );
  uVar2 = CalcRandomSeed(1);
  Sexy::MTRand::MTRand(aMStack_13a0,uVar2 & 0xffffffff);
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)aRStack_13d0);
  uVar2 = 0;
  while( true ) {
    uVar4 = FUN_04725fd8(*(undefined8 *)(extraout_x0 + 0x40),*(undefined8 *)(extraout_x0 + 0x48));
    if (uVar4 <= uVar2) break;
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_04725fe4(*(undefined8 *)(extraout_x0 + 0x40),uVar2);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    std::
    set<Sexy::RtWeakPtr<ZombieType_const>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
    ::insert((set<Sexy::RtWeakPtr<ZombieType_const>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
              *)aRStack_13d0,(RtWeakPtr *)aRStack_13d8);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_13d8);
    uVar2 = uVar2 + 1;
  }
  WaveHelpers::PickZombiesFromPool
            ((int)fVar5,(set *)aRStack_13d0,aMStack_13a0,(vector *)(this + 0x28));
  std::
  set<Sexy::RtWeakPtr<ZombieType_const>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
  ::~set((set<Sexy::RtWeakPtr<ZombieType_const>,std::less<Sexy::RtWeakPtr<ZombieType_const>>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
          *)aRStack_13d0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCitySpawnActionHandler::onStartAction() */

void __thiscall
ZombossSkyCitySpawnActionHandler::onStartAction(ZombossSkyCitySpawnActionHandler *this)

{
  ZombieZombossMech ZVar1;
  char cVar2;
  int iVar3;
  ZombieZombossMech *this_00;
  ZombossHydraSprayActionDefinition *pZVar4;
  ZombieHydraHeadAnimRig *pZVar5;
  char *pcVar6;
  float fVar7;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  nop();
  iVar3 = ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_00);
  if (iVar3 == -1) {
    iVar3 = ZombossHydraSpawnActionHandler::pickPlantfoodSpawnDelay();
    ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_00,iVar3);
  }
  *(undefined4 *)(this + 0x44) = 0;
  pickZombiesForSpawn(this);
  fVar7 = (float)PVZ_T();
  pZVar4 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  ZVar1 = this_00[0x964];
  *(float *)(this + 0x40) = fVar7 + *(float *)(pZVar4 + 0x58);
  if (ZVar1 == (ZombieZombossMech)0x0) {
    pZVar5 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
    std::string::string(asStack_68,"onSummonAnimationEnd");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_70,asStack_68);
    ZombieAnimRig_ZombossMech::PlaySummoning((ZombieAnimRig_ZombossMech *)pZVar5,aRStack_50);
  }
  else {
    pZVar5 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_00);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
    std::string::string(asStack_68,"onSummonAnimationEnd");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_70,asStack_68);
    ZombieAnimRig_ZombossMech_SkyCity::PlaySpwanInAirplane
              ((ZombieAnimRig_ZombossMech_SkyCity *)pZVar5,aRStack_50);
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  ZombieZombossMech_SkyCity::thunderStart((ZombieZombossMech_SkyCity *)this_00);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_00);
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
          *)asStack_68,(vector *)(this + 0x28));
  cVar2 = waveHasPlantfoodCarryingZombie(this,asStack_68);
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)asStack_68);
  if (cVar2 == '\0') {
    iVar3 = ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_00);
    ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_00,iVar3 + 1);
  }
  pcVar6 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar6,"Play_Zomb_SkyCity_Zomboss_Attack_Summon");
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

