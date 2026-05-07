// Class: ZombossDarkSpawnActionHandler


/* ZombossDarkSpawnActionHandler::onSummonAnimationEnd(std::string const&) */

void ZombossDarkSpawnActionHandler::onSummonAnimationEnd(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkSpawnActionHandler::StaticClassInit() */

void ZombossDarkSpawnActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossDarkSpawnActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_047238b8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossDarkSpawnActionHandler::StaticGetClass() */

long * ZombossDarkSpawnActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossDarkSpawnActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossDarkSpawnActionHandler::GetClass() const */

long * ZombossDarkSpawnActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossDarkSpawnActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkSpawnActionHandler::waveHasPlantfoodCarryingZombie(std::vector<Sexy::RtWeakPtr<ZombieType
   const>, std::allocator<Sexy::RtWeakPtr<ZombieType const> > >) const */

void __thiscall
ZombossDarkSpawnActionHandler::waveHasPlantfoodCarryingZombie
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
  local_18 = FUN_04720e04(*param_2);
  local_10 = FUN_04720e54(param_2[1]);
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_04720f44:
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
      goto LAB_04720f44;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* ZombossDarkSpawnActionHandler::ZombossDarkSpawnActionHandler() */

void __thiscall
ZombossDarkSpawnActionHandler::ZombossDarkSpawnActionHandler(ZombossDarkSpawnActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c15b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x40) = uVar1;
  return;
}


/* ZombossDarkSpawnActionHandler::StaticNew() */

ZombossDarkSpawnActionHandler * ZombossDarkSpawnActionHandler::StaticNew(void)

{
  ZombossDarkSpawnActionHandler *this;
  
  this = ::operator_new(0x48);
  ZombossDarkSpawnActionHandler(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkSpawnActionHandler::spawnZombie(Sexy::RtWeakPtr<ZombieType const>) const */

void __thiscall
ZombossDarkSpawnActionHandler::spawnZombie
          (ZombossDarkSpawnActionHandler *this,RtWeakPtrBase *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  Zombie *this_02;
  ZombossHydraSprayActionDefinition *pZVar5;
  long *extraout_x0;
  long *plVar6;
  code *pcVar7;
  int local_58;
  int local_54;
  Point aPStack_50 [16];
  int local_40 [4];
  undefined4 local_30;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_30 = Zombie::GetSummonZombieLevel((Zombie *)this_01);
  local_2b = 1;
  plVar6 = *(long **)(gLawnApp + 0x9f0);
  pcVar7 = *(code **)(*plVar6 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)local_40,param_2);
  this_02 = (Zombie *)
            (*pcVar7)(plVar6,(RtWeakPtr<Sexy::SoundResource> *)local_40,0xfffffffb,
                      (SpawnZombieParams *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
  (**(code **)(*(long *)this_01 + 400))((RtWeakPtr<Sexy::SoundResource> *)local_40,this_01);
  iVar2 = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  Sexy::Point::Point(aPStack_50,local_40[0] + -1,iVar2);
  BoardTransforms::GridToBoardSpace(aPStack_50);
  pZVar5 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  iVar3 = Sexy::Rand(*(int *)(pZVar5 + 0x38));
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aPStack_50,(float)((local_58 - iVar3) - (iVar2 >> 2)),(float)local_54,0.0);
  nop();
  cVar1 = (**(code **)(*extraout_x0 + 0xa70))();
  if (cVar1 == '\0') {
    Zombie::RiseFromGround(this_02,(SexyVector3 *)aPStack_50,true);
  }
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_02);
}


/* ZombossDarkSpawnActionHandler::~ZombossDarkSpawnActionHandler() */

void __thiscall
ZombossDarkSpawnActionHandler::~ZombossDarkSpawnActionHandler(ZombossDarkSpawnActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c15b0;
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossDarkSpawnActionHandler::~ZombossDarkSpawnActionHandler() */

void __thiscall
ZombossDarkSpawnActionHandler::~ZombossDarkSpawnActionHandler(ZombossDarkSpawnActionHandler *this)

{
  ~ZombossDarkSpawnActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossDarkSpawnActionHandler::onUpdateAction() */

void __thiscall ZombossDarkSpawnActionHandler::onUpdateAction(ZombossDarkSpawnActionHandler *this)

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
    local_20[0] = FUN_0471e160(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
    local_24 = (int)((fVar11 - fVar12) / ((fVar10 + fVar13) - fVar12)) * local_20[0] + 1;
    piVar6 = eastl::min_alt<int>(&local_24,local_20);
    iVar1 = *piVar6;
    do {
      iVar3 = *(int *)(this + 0x44);
      do {
        if (iVar1 <= iVar3) goto LAB_0472350c;
        pRVar8 = (RtWeakPtrBase *)FUN_0471e16c(*(undefined8 *)(this + 0x28),(long)iVar3);
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
LAB_0472366c:
            Zombie::SetHasPlantFood(SUB81(this_03,0));
            iVar4 = ZombossHydraSpawnActionHandler::pickPlantfoodSpawnDelay();
            ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_01,iVar3 + 1 + iVar4);
          }
          else {
            this_04 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(this_03);
            this_05 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_04);
            lVar7 = ZombieType::GetProps(this_05);
            if (*(char *)(lVar7 + 0x38) != '\0') {
              lVar7 = FUN_0471e160(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
              dVar14 = (double)(lVar7 + 1);
              iVar4 = Sexy::Rand((int)dVar14);
              if ((double)iVar4 / dVar14 < 1.0 / dVar14) goto LAB_0472366c;
            }
          }
        }
        this_02 = (vector<Loot,std::allocator<Loot>> *)
                  ZombieZombossMech::GetLootForSpawnedZombies(this_01);
        iVar3 = *(int *)(this + 0x44);
        lVar7 = FUN_0471e160(*(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30));
      } while (lVar7 != iVar3);
      cVar2 = std::vector<Loot,std::allocator<Loot>>::empty(this_02);
      if (cVar2 == '\0') {
        puVar9 = (undefined4 *)
                 std::vector<unsigned_int,std::allocator<unsigned_int>>::back
                           ((vector<unsigned_int,std::allocator<unsigned_int>> *)this_02);
        Zombie::SetLoot(this_03,*puVar9);
        FUN_0471e1f4(this_02 + 8);
      }
    } while( true );
  }
LAB_0472350c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x047244b0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ZombossDarkSpawnActionHandler::pickZombiesForSpawn() */

void __thiscall
ZombossDarkSpawnActionHandler::pickZombiesForSpawn(ZombossDarkSpawnActionHandler *this)

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
  fVar5 = (float)FUN_0471e13c(*(undefined4 *)(pZVar1 + 0x284));
  auVar6 = FUN_0471e138(*(undefined4 *)(pZVar1 + 0x280));
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
    uVar4 = FUN_0471e148(*(undefined8 *)(extraout_x0 + 0x40),*(undefined8 *)(extraout_x0 + 0x48));
    if (uVar4 <= uVar2) break;
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_0471e154(*(undefined8 *)(extraout_x0 + 0x40),uVar2);
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
/* ZombossDarkSpawnActionHandler::onStartAction() */

void __thiscall ZombossDarkSpawnActionHandler::onStartAction(ZombossDarkSpawnActionHandler *this)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombossHydraSprayActionDefinition *pZVar3;
  ZombieHydraHeadAnimRig *pZVar4;
  float fVar5;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [24];
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
  fVar5 = (float)PVZ_T();
  pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  *(float *)(this + 0x40) = fVar5 + *(float *)(pZVar3 + 0x58);
  pZVar4 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string(asStack_68,"onSummonAnimationEnd");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
             asStack_68);
  ZombieAnimRig_ZombossMech::PlaySummoning((ZombieAnimRig_ZombossMech *)pZVar4,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_01);
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
          *)asStack_68,(vector *)(this + 0x28));
  cVar1 = waveHasPlantfoodCarryingZombie(this,asStack_68);
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)asStack_68);
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

