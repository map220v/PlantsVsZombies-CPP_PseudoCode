// Class: ZombossSpawnDinoActionHandler


/* ZombossSpawnDinoActionHandler::onSummonDinosaurAnimationEnd(std::string const&) */

void ZombossSpawnDinoActionHandler::onSummonDinosaurAnimationEnd(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnDinoActionHandler::StaticClassInit() */

void ZombossSpawnDinoActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSpawnDinoActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_047f6b0c,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSpawnDinoActionHandler::StaticGetClass() */

long * ZombossSpawnDinoActionHandler::StaticGetClass(void)

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
  uVar2 = ZombossSummonActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSpawnDinoActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSpawnDinoActionHandler::GetClass() const */

long * ZombossSpawnDinoActionHandler::GetClass(void)

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
  uVar2 = ZombossSummonActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSpawnDinoActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnDinoActionHandler::spawnDino(Sexy::RtWeakPtr<CreatureType const>) const */

void __thiscall
ZombossSpawnDinoActionHandler::spawnDino(ZombossSpawnDinoActionHandler *this,RtWeakPtrBase *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Board *pBVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = (**(code **)(*(long *)this + 0xa8))();
  pBVar3 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  uVar2 = Board::AddCreatureInRow(pBVar3,aRStack_10,uVar1,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnDinoActionHandler::onUpdateAction() */

void __thiscall ZombossSpawnDinoActionHandler::onUpdateAction(ZombossSpawnDinoActionHandler *this)

{
  float fVar1;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombossSummonActionHandler::onUpdateAction((ZombossSummonActionHandler *)this);
  if ((this[0x50] == (ZombossSpawnDinoActionHandler)0x0) &&
     (fVar1 = (float)PVZ_T(), *(float *)(this + 0x58) < fVar1)) {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x48));
    spawnDino(this,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    this[0x50] = (ZombossSpawnDinoActionHandler)0x1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnDinoActionHandler::getSpawningColumn() const */

void __thiscall
ZombossSpawnDinoActionHandler::getSpawningColumn(ZombossSpawnDinoActionHandler *this)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long extraout_x0;
  ZombossHydraSprayActionDefinition *pZVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = (**(code **)(*(long *)this + 0xa8))();
  plVar4 = (long *)Board::GetStage(*(Board **)(gLawnApp + 0x9f0));
  iVar3 = (**(code **)(*plVar4 + 0xd8))(plVar4,uVar2);
  iVar3 = BoardTransforms::BoardSpaceToGridXUnbounded(iVar3);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  bVar1 = std::operator==((string *)(extraout_x0 + 0x70),"dinostego");
  if (!bVar1) {
    pZVar5 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
    iVar3 = iVar3 + *(int *)(pZVar5 + 0x3c);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* ZombossSpawnDinoActionHandler::ZombossSpawnDinoActionHandler() */

void __thiscall
ZombossSpawnDinoActionHandler::ZombossSpawnDinoActionHandler(ZombossSpawnDinoActionHandler *this)

{
  ZombossSummonActionHandler::ZombossSummonActionHandler((ZombossSummonActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068f6bd0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  return;
}


/* ZombossSpawnDinoActionHandler::StaticNew() */

ZombossSpawnDinoActionHandler * ZombossSpawnDinoActionHandler::StaticNew(void)

{
  ZombossSpawnDinoActionHandler *this;
  
  this = ::operator_new(0x60);
  ZombossSpawnDinoActionHandler(this);
  return this;
}


/* ZombossSpawnDinoActionHandler::~ZombossSpawnDinoActionHandler() */

void __thiscall
ZombossSpawnDinoActionHandler::~ZombossSpawnDinoActionHandler(ZombossSpawnDinoActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068f6bd0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  ZombossSummonActionHandler::~ZombossSummonActionHandler((ZombossSummonActionHandler *)this);
  return;
}


/* ZombossSpawnDinoActionHandler::~ZombossSpawnDinoActionHandler() */

void __thiscall
ZombossSpawnDinoActionHandler::~ZombossSpawnDinoActionHandler(ZombossSpawnDinoActionHandler *this)

{
  ~ZombossSpawnDinoActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnDinoActionHandler::setupDinoForSpawn() */

void __thiscall
ZombossSpawnDinoActionHandler::setupDinoForSpawn(ZombossSpawnDinoActionHandler *this)

{
  string *psVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CreatureType>>::GetInstancePtr();
  ObjectTypeDirectory<CreatureType>::GetTypeFromTypeName(psVar1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x48),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSpawnDinoActionHandler::onStartAction() */

void __thiscall ZombossSpawnDinoActionHandler::onStartAction(ZombossSpawnDinoActionHandler *this)

{
  int iVar1;
  undefined4 uVar2;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombossSummonActionHandler::onStartAction((ZombossSummonActionHandler *)this);
  fVar4 = (float)ZombossSummonActionHandler::getStartSpawningTime
                           ((ZombossSummonActionHandler *)this);
  fVar5 = (float)PVZ_T();
  fVar6 = (float)PVZ_T();
  *(float *)(this + 0x58) = fVar6 + (fVar4 - fVar5) * 0.5;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  this[0x50] = (ZombossSpawnDinoActionHandler)0x0;
  iVar1 = BoardConstants::NUMBER_OF_ROWS();
  uVar2 = Sexy::Rand(iVar1);
  *(undefined4 *)(this + 0x54) = uVar2;
  setupDinoForSpawn(this);
  pZVar3 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSummonDinosaurAnimationEnd");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_Dino::PlayDinosaurSummoning
            ((ZombieAnimRig_ZombossMech_Dino *)pZVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

