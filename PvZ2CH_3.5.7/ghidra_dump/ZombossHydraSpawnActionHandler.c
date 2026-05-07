// Class: ZombossHydraSpawnActionHandler


/* ZombossHydraSpawnActionHandler::pickPlantfoodSpawnDelay() const */

int ZombossHydraSpawnActionHandler::pickPlantfoodSpawnDelay(void)

{
  int iVar1;
  ZombossHydraSprayActionDefinition *pZVar2;
  float fVar3;
  
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  fVar3 = *(float *)(pZVar2 + 0x60);
  iVar1 = Sexy::Rand(((int)*(float *)(pZVar2 + 100) - (int)fVar3) + 1);
  return iVar1 + (int)fVar3 + -1;
}


/* ZombossHydraSpawnActionHandler::onEndAction() */

void __thiscall ZombossHydraSpawnActionHandler::onEndAction(ZombossHydraSpawnActionHandler *this)

{
  int iVar1;
  int iVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  iVar1 = ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_01);
  iVar2 = ZombieZombossMech::GetZombieWaveCounter(this_01);
  if (iVar1 != iVar2) {
    ZombieZombossMech::IncrementZombieWaveCounter(this_01);
    return;
  }
  iVar2 = pickPlantfoodSpawnDelay();
  ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_01,iVar1 + 1 + iVar2);
  ZombieZombossMech::IncrementZombieWaveCounter(this_01);
  return;
}


/* ZombossHydraSpawnActionHandler::onSummonAnimationEnd(std::string const&) */

void ZombossHydraSpawnActionHandler::onSummonAnimationEnd(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSpawnActionHandler::StaticClassInit() */

void ZombossHydraSpawnActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossHydraSpawnActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04f5bc04,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossHydraSpawnActionHandler::StaticGetClass() */

long * ZombossHydraSpawnActionHandler::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombossHydraSpawnActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossHydraSpawnActionHandler::GetClass() const */

long * ZombossHydraSpawnActionHandler::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombossHydraSpawnActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSpawnActionHandler::waveHasPlantfoodCarryingZombie(std::vector<Sexy::RtWeakPtr<ZombieType
   const>, std::allocator<Sexy::RtWeakPtr<ZombieType const> > >) const */

void __thiscall
ZombossHydraSpawnActionHandler::waveHasPlantfoodCarryingZombie
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
  local_18 = FUN_04f550e4(*param_2);
  local_10 = FUN_04f55134(param_2[1]);
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_04f55224:
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
      goto LAB_04f55224;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* ZombossHydraSpawnActionHandler::ZombossHydraSpawnActionHandler() */

void __thiscall
ZombossHydraSpawnActionHandler::ZombossHydraSpawnActionHandler(ZombossHydraSpawnActionHandler *this)

{
  undefined4 uVar1;
  
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a1e370;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x40) = uVar1;
  return;
}


/* ZombossHydraSpawnActionHandler::StaticNew() */

ZombossHydraSpawnActionHandler * ZombossHydraSpawnActionHandler::StaticNew(void)

{
  ZombossHydraSpawnActionHandler *this;
  
  this = ::operator_new(0x48);
  ZombossHydraSpawnActionHandler(this);
  return this;
}


/* ZombossHydraSpawnActionHandler::~ZombossHydraSpawnActionHandler() */

void __thiscall
ZombossHydraSpawnActionHandler::~ZombossHydraSpawnActionHandler
          (ZombossHydraSpawnActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1e370;
  std::
  vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
           *)(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossHydraSpawnActionHandler::~ZombossHydraSpawnActionHandler() */

void __thiscall
ZombossHydraSpawnActionHandler::~ZombossHydraSpawnActionHandler
          (ZombossHydraSpawnActionHandler *this)

{
  ~ZombossHydraSpawnActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSpawnActionHandler::spawnGridItem(Sexy::RtWeakPtr<GridItemType const>) */

void ZombossHydraSpawnActionHandler::spawnGridItem(ZombieActionHandler *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  RtObject *this;
  ZombieZombossMech *this_00;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  PopAnimRig *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  long lVar9;
  RayEntity *this_02;
  RtWeakPtrBase *pRVar10;
  undefined4 *puVar11;
  GridItemZombossPortal *extraout_x0;
  ulong uVar12;
  ulong uVar13;
  Board *pBVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_8c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_88 [8];
  string asStack_80 [8];
  string asStack_78 [8];
  string asStack_70 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  Vec3 aVStack_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  int local_40 [4];
  Insets aIStack_30 [16];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)ZombieActionHandler::getZombie(param_1);
  this_00 = Sexy::RtObject::Cast<ZombieZombossMech>(this);
  iVar2 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  (**(code **)(*(long *)this_00 + 400))(local_40);
  local_8c = 0;
  std::vector<int,std::allocator<int>>::vector((ulong)local_20,(allocator *)(long)iVar2);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_20);
  FUN_04f545a0(uVar5,uVar6,&local_8c);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_20);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar5,uVar6);
  iVar2 = BoardTransforms::GridToBoardSpaceX(local_40[0] + -1);
  piVar7 = (int *)FUN_04f50f78(local_20[0],0);
  iVar3 = BoardTransforms::GridToBoardSpaceY(*piVar7);
  EATextSquish::Vec3::Vec3(aVStack_60,(float)(iVar2 + -0x14),(float)iVar3,0.0);
  Sexy::Insets::Insets(aIStack_30);
  this_01 = (PopAnimRig *)Zombie::GetAnimRig((Zombie *)this_00);
  std::string::string((string *)&local_50,"dd");
  PopAnimRig::CalcSymbolRect(this_01,(string *)&local_50,(TRect *)aIStack_30);
  std::string::~string((string *)&local_50);
  nop();
  fVar17 = *(float *)(this_00 + 0x1c);
  fVar15 = (float)FUN_04f510d8(*(undefined4 *)(this_00 + 0x18),fVar17,
                               *(undefined4 *)(this_00 + 0x20));
  Sexy::TRect<int>::GetCenter();
  iVar2 = FUN_04f51958(local_50);
  pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this_00);
  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
  fVar16 = *(float *)(lVar9 + 0xc4);
  Sexy::TRect<int>::GetCenter();
  iVar3 = FUN_04f51958(local_4c);
  pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this_00);
  lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_50,(float)(int)((fVar15 - fVar16) + (float)iVar2),
             (float)(int)((fVar17 - *(float *)(lVar9 + 200)) + (float)iVar3),0.0);
  this_02 = GameObject::Create<RayEntity>();
  if (this_02 != (RayEntity *)0x0) {
    BoardEntity::PlaceOnBoard((SexyVector3 *)this_02);
    std::string::string(asStack_80,"POPANIM_EFFECTS_ZOMBOSS_HYDRA_MIRROR_EFFECT");
    std::string::string(asStack_78,"POPANIM_EFFECTS_ZOMBOSS_HYDRA_MIRROR_EFFECT");
    std::string::string(asStack_70,"animation4");
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)aRStack_88);
    RayEntity::Initialize
              ((RayEntity *)0x3ee66666,this_02,asStack_80,asStack_78,asStack_70,aRStack_68,0,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_88);
    std::string::~string(asStack_70);
    nop();
    std::string::~string(asStack_78);
    nop();
    std::string::~string(asStack_80);
    nop();
    RayEntity::SetHitPosition(this_02,true,(SexyVector3 *)aVStack_60);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_68);
    RayEntity::InitiateWithTarget(this_02,aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  uVar13 = 0;
  while( true ) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar12 = FUN_04f50f80(uVar5,*(undefined8 *)(param_1 + 0x30));
    if (uVar12 <= uVar13) break;
    pBVar14 = *(Board **)(gLawnApp + 0x9f0);
    pRVar10 = (RtWeakPtrBase *)FUN_04f50f8c(uVar5,uVar13);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,pRVar10);
    puVar11 = (undefined4 *)FUN_04f50f78(local_20[0],uVar13);
    uVar1 = *puVar11;
    uVar4 = Zombie::GetSummonZombieLevel((Zombie *)this_00);
    Board::AddGridItem(pBVar14,aRStack_68,local_40[0] + -1,uVar1,uVar4);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    FUN_04f510cc(extraout_x0 + 0x24);
    FUN_04f510b4(extraout_x0 + 0x1f0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)asStack_70);
    GridItemZombossPortal::setZomBoss(extraout_x0,aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    uVar13 = uVar13 + 1;
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSpawnActionHandler::onUpdateAction() */

void __thiscall ZombossHydraSpawnActionHandler::onUpdateAction(ZombossHydraSpawnActionHandler *this)

{
  int iVar1;
  char cVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombossHydraSprayActionDefinition *pZVar3;
  int *piVar4;
  RtWeakPtrBase *pRVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_14;
  int local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  cVar2 = (**(code **)(*(long *)this_01 + 0xa90))();
  if ((cVar2 == '\0') && (fVar8 = (float)PVZ_T(), *(float *)(this + 0x40) <= fVar8)) {
    pZVar3 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
    fVar11 = *(float *)(this + 0x40);
    fVar8 = *(float *)(pZVar3 + 0x5c);
    fVar9 = (float)PVZ_T();
    uVar7 = *(undefined8 *)(this + 0x28);
    fVar10 = *(float *)(this + 0x40);
    local_10[0] = FUN_04f50f80(uVar7,*(undefined8 *)(this + 0x30));
    local_14 = (int)((fVar9 - fVar10) / ((fVar8 + fVar11) - fVar10)) * local_10[0] + 1;
    piVar4 = eastl::min_alt<int>(&local_14,local_10);
    iVar1 = *piVar4;
    iVar6 = *(int *)(this + 0x44);
    if (iVar6 < iVar1) {
      while( true ) {
        pRVar5 = (RtWeakPtrBase *)FUN_04f50f8c(uVar7,(long)iVar6);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)local_10,pRVar5);
        spawnGridItem(this,(RtWeakPtr<Sexy::SoundResource> *)local_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
        ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_01);
        ZombieZombossMech::GetZombieWaveCounter(this_01);
        iVar6 = *(int *)(this + 0x44);
        if (iVar1 <= iVar6) break;
        uVar7 = *(undefined8 *)(this + 0x28);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSpawnActionHandler::pickGridsForSpawn() */

void __thiscall
ZombossHydraSpawnActionHandler::pickGridsForSpawn(ZombossHydraSpawnActionHandler *this)

{
  RtObject *this_00;
  long extraout_x0;
  string *psVar1;
  ulong uVar2;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  std::
  vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>::
  clear((vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
         *)(this + 0x28));
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar3 = 0;
  while( true ) {
    uVar2 = FUN_04f50f58(*(undefined8 *)(extraout_x0 + 0x40),*(undefined8 *)(extraout_x0 + 0x48));
    if (uVar2 <= uVar3) break;
    psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    FUN_04f50f6c(*(undefined8 *)(extraout_x0 + 0x40),uVar3);
    ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar1);
    std::
    vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
    ::push_back((vector<Sexy::RtWeakPtr<GridItemType_const>,std::allocator<Sexy::RtWeakPtr<GridItemType_const>>>
                 *)(this + 0x28),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossHydraSpawnActionHandler::onStartAction() */

void __thiscall ZombossHydraSpawnActionHandler::onStartAction(ZombossHydraSpawnActionHandler *this)

{
  int iVar1;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombossHydraSprayActionDefinition *pZVar2;
  ZombieHydraHeadAnimRig *pZVar3;
  float fVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  iVar1 = ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_01);
  if (iVar1 == -1) {
    iVar1 = pickPlantfoodSpawnDelay();
    ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_01,iVar1);
  }
  *(undefined4 *)(this + 0x44) = 0;
  pickGridsForSpawn(this);
  fVar4 = (float)PVZ_T();
  pZVar2 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  *(float *)(this + 0x40) = fVar4 + *(float *)(pZVar2 + 0x58);
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSummonAnimationEnd");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech::PlaySummoning((ZombieAnimRig_ZombossMech *)pZVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  std::string::string(asStack_58,"dd");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)pZVar3,asStack_58,false);
  std::string::~string(asStack_58);
  nop();
  ZombieZombossMech::ForceAnimRateModifierForActiveStage(this_01);
  iVar1 = ZombieZombossMech::GetNextZombieWaveWithPlantfood(this_01);
  ZombieZombossMech::SetNextZombieWaveWithPlantfood(this_01,iVar1 + 1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

