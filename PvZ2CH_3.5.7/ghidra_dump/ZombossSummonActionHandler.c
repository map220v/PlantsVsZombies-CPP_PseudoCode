// Class: ZombossSummonActionHandler


/* ZombossSummonActionHandler::getStartSpawningTime() const */

undefined4 __thiscall
ZombossSummonActionHandler::getStartSpawningTime(ZombossSummonActionHandler *this)

{
  return *(undefined4 *)(this + 0x40);
}


/* ZombossSummonActionHandler::getSpawningRow() const */

void ZombossSummonActionHandler::getSpawningRow(void)

{
  Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  return;
}


/* ZombossSummonActionHandler::onSummonAnimationEnd(std::string const&) */

void ZombossSummonActionHandler::onSummonAnimationEnd(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSummonActionHandler::StaticClassInit() */

void ZombossSummonActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSummonActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0473b208,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSummonActionHandler::StaticGetClass() */

long * ZombossSummonActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSummonActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSummonActionHandler::GetClass() const */

long * ZombossSummonActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossSummonActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSummonActionHandler::getSpawningColumn() const */

void __thiscall ZombossSummonActionHandler::getSpawningColumn(ZombossSummonActionHandler *this)

{
  long *plVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  int local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar1 = (long *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  (**(code **)(*plVar1 + 400))(local_18);
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18[0] + *(int *)(pZVar2 + 0x3c));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSummonActionHandler::waveHasPlantfoodCarryingZombie(std::vector<Sexy::RtWeakPtr<ZombieType
   const>, std::allocator<Sexy::RtWeakPtr<ZombieType const> > >) const */

void __thiscall
ZombossSummonActionHandler::waveHasPlantfoodCarryingZombie(undefined8 param_1,undefined8 *param_2)

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
  local_18 = FUN_04739438(*param_2);
  local_10 = FUN_04739488(param_2[1]);
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_04739578:
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
      goto LAB_04739578;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* ZombossSummonActionHandler::ZombossSummonActionHandler() */

void __thiscall
ZombossSummonActionHandler::ZombossSummonActionHandler(ZombossSummonActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c62b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x40) = uVar1;
  return;
}


/* ZombossSummonActionHandler::StaticNew() */

ZombossSummonActionHandler * ZombossSummonActionHandler::StaticNew(void)

{
  ZombossSummonActionHandler *this;
  
  this = ::operator_new(0x48);
  ZombossSummonActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSummonActionHandler::spawnZombie(Sexy::RtWeakPtr<ZombieType const>) const */

void __thiscall
ZombossSummonActionHandler::spawnZombie(ZombossSummonActionHandler *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Zombie *pZVar5;
  ZombossHydraSprayActionDefinition *pZVar6;
  long *extraout_x0;
  long *plVar7;
  code *pcVar8;
  int local_48;
  int local_44;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [16];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  pZVar5 = (Zombie *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  local_30 = Zombie::GetSummonZombieLevel(pZVar5);
  local_2c = 0;
  local_2b = 1;
  plVar7 = *(long **)(gLawnApp + 0x9f0);
  pcVar8 = *(code **)(*plVar7 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,param_2);
  pZVar5 = (Zombie *)(*pcVar8)(plVar7,aRStack_40,0xfffffffb,(SpawnZombieParams *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  iVar2 = (**(code **)(*(long *)this + 0xa8))(this);
  iVar3 = (**(code **)(*(long *)this + 0xb0))(this);
  Sexy::Point::Point((Point *)aRStack_40,iVar3,iVar2);
  BoardTransforms::GridToBoardSpace((Point *)aRStack_40);
  pZVar6 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  iVar3 = Sexy::Rand(*(int *)(pZVar6 + 0x38));
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_40,(float)((local_48 - iVar3) - (iVar2 >> 2)),(float)local_44,0.0);
  ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  nop();
  cVar1 = (**(code **)(*extraout_x0 + 0xa70))();
  if (cVar1 == '\0') {
    Zombie::RiseFromGround(pZVar5,(SexyVector3 *)aRStack_40,true);
  }
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pZVar5);
}


/* ZombossSummonActionHandler::~ZombossSummonActionHandler() */

void __thiscall
ZombossSummonActionHandler::~ZombossSummonActionHandler(ZombossSummonActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c62b0;
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossSummonActionHandler::~ZombossSummonActionHandler() */

void __thiscall
ZombossSummonActionHandler::~ZombossSummonActionHandler(ZombossSummonActionHandler *this)

{
  ~ZombossSummonActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSummonActionHandler::onUpdateAction() */

void __thiscall ZombossSummonActionHandler::onUpdateAction(ZombossSummonActionHandler *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombossHydraSprayActionDefinition *pZVar4;
  ulong uVar5;
  float *pfVar6;
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
  double dVar13;
  float fVar14;
  float local_24;
  float local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  cVar1 = (**(code **)(*(long *)this_01 + 0xa90))();
  if ((cVar1 == '\0') && (fVar10 = (float)PVZ_T(), *(float *)(this + 0x40) <= fVar10)) {
    pZVar4 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
    fVar10 = *(float *)(this + 0x40);
    fVar14 = *(float *)(pZVar4 + 0x5c);
    fVar11 = (float)PVZ_T();
    fVar12 = *(float *)(this + 0x40);
    uVar5 = FUN_04735c08(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
    local_24 = (float)uVar5;
    local_20[0] = local_24 * ((fVar11 - fVar12) / ((fVar14 + fVar10) - fVar12)) + 1.0;
    pfVar6 = eastl::min_alt<float>(local_20,&local_24);
    fVar11 = *pfVar6;
    do {
      iVar2 = *(int *)(this + 0x44);
      do {
        if ((int)fVar11 <= iVar2) {
          if (*(code **)(*(long *)this_01 + 0xa78) == ZombieZombossMech::HasSummonAnimation) {
            cVar1 = ZombieZombossMech::HasSummonAnimation();
          }
          else {
            cVar1 = (**(code **)(*(long *)this_01 + 0xa78))(this_01);
          }
          if ((cVar1 == '\0') && (fVar11 = (float)PVZ_T(), fVar14 + fVar10 <= fVar11)) {
            ZombieActionHandler::markActionDone((ZombieActionHandler *)this);
          }
          goto LAB_0473cbb8;
        }
        pRVar8 = (RtWeakPtrBase *)FUN_04735c14(*(undefined8 *)(this + 0x28),(long)iVar2);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_20,pRVar8);
        this_03 = (Zombie *)spawnZombie(this,(RtWeakPtr<Sexy::SoundResource> *)local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
        *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
        iVar2 = ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_01);
        iVar3 = ZombieZombossMech::GetZombieWaveCounter(this_01);
        if (iVar2 == iVar3) {
          std::
          vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
          ::vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                    *)local_20,(vector *)(this + 0x28));
          cVar1 = waveHasPlantfoodCarryingZombie(this,(RtWeakPtr<Sexy::SoundResource> *)local_20);
          std::
          vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
          ::~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                     *)local_20);
          if (cVar1 == '\0') {
LAB_0473cd1c:
            Zombie::SetHasPlantFood(SUB81(this_03,0));
            iVar3 = ZombossHydraSpawnActionHandler::pickPlantfoodSpawnDelay();
            ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_01,iVar2 + 1 + iVar3);
          }
          else {
            this_04 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_03);
            this_05 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_04);
            lVar7 = ZombieType::GetProps(this_05);
            if (*(char *)(lVar7 + 0x38) != '\0') {
              lVar7 = FUN_04735c08(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
              dVar13 = (double)(lVar7 + 1);
              iVar3 = Sexy::Rand((int)dVar13);
              if ((double)iVar3 / dVar13 < 1.0 / dVar13) goto LAB_0473cd1c;
            }
          }
        }
        this_02 = (vector<Loot,std::allocator<Loot>> *)
                  ZombieZombossMech::GetLootForSpawnedZombies(this_01);
        iVar2 = *(int *)(this + 0x44);
        lVar7 = FUN_04735c08(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
      } while (lVar7 != iVar2);
      cVar1 = std::vector<Loot,std::allocator<Loot>>::empty(this_02);
      if (cVar1 == '\0') {
        puVar9 = (undefined4 *)
                 std::vector<unsigned_int,std::allocator<unsigned_int>>::back
                           ((vector<unsigned_int,std::allocator<unsigned_int>> *)this_02);
        Zombie::SetLoot(this_03,*puVar9);
        FUN_04735d38(this_02 + 8);
      }
    } while( true );
  }
LAB_0473cbb8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0473d5a8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossSummonActionHandler::pickZombiesForSpawn() */

void __thiscall ZombossSummonActionHandler::pickZombiesForSpawn(ZombossSummonActionHandler *this)

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
  fVar5 = (float)FUN_04735b7c(*(undefined4 *)(pZVar1 + 0x284));
  auVar6 = FUN_04735b78(*(undefined4 *)(pZVar1 + 0x280));
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
    uVar4 = FUN_04735bd0(*(undefined8 *)(extraout_x0 + 0x40),*(undefined8 *)(extraout_x0 + 0x48));
    if (uVar4 <= uVar2) break;
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_04735c00(*(undefined8 *)(extraout_x0 + 0x40),uVar2);
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
/* ZombossSummonActionHandler::onStartAction() */

void __thiscall ZombossSummonActionHandler::onStartAction(ZombossSummonActionHandler *this)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombossHydraSprayActionDefinition *pZVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  code *pcVar5;
  float fVar6;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
  avStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  iVar2 = ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_01);
  if (iVar2 == -1) {
    iVar2 = ZombossHydraSpawnActionHandler::pickPlantfoodSpawnDelay();
    ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_01,iVar2);
  }
  *(undefined4 *)(this + 0x44) = 0;
  pickZombiesForSpawn(this);
  fVar6 = (float)PVZ_T();
  pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  pcVar5 = *(code **)(*(long *)this_01 + 0xa78);
  *(float *)(this + 0x40) = fVar6 + *(float *)(pZVar3 + 0x58);
  if (pcVar5 == ZombieZombossMech::HasSummonAnimation) {
    cVar1 = ZombieZombossMech::HasSummonAnimation();
  }
  else {
    cVar1 = (*pcVar5)(this_01);
  }
  if (cVar1 != '\0') {
    pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
    std::string::string((string *)avStack_68,"onSummonAnimationEnd");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
               (string *)avStack_68);
    ZombieAnimRig_ZombossMech::PlaySummoning((ZombieAnimRig_ZombossMech *)pZVar4,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)avStack_68);
    nop();
    Sexy::RtId::~RtId(aRStack_70);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  }
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_01);
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  vector(avStack_68,(vector *)(this + 0x28));
  cVar1 = waveHasPlantfoodCarryingZombie(this,avStack_68);
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector(avStack_68);
  if (cVar1 == '\0') {
    iVar2 = ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_01);
    ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_01,iVar2 + 1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

