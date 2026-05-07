// Class: ArtifactVaseProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactVaseProjectile::StaticClassInit() */

void ArtifactVaseProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactVaseProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03747410,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactVaseProjectile::StaticGetClass() */

long * ArtifactVaseProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactVaseProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactVaseProjectile::GetClass() const */

long * ArtifactVaseProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactVaseProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactVaseProjectile::spawnCollectables(ArtifactVaseConfigProperties const&, Sexy::SexyVector3)
    */

void ArtifactVaseProjectile::spawnCollectables
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               string *param_5)

{
  bool bVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  bVar1 = std::operator==(param_5,"sun");
  if ((bVar1) && (0 < *(int *)(param_5 + 0x10))) {
    Board::FanOutSun(*(Board **)(gLawnApp + 0x9f0),(SexyVector3 *)&local_10,*(int *)(param_5 + 0x10)
                     ,false,false,true,false,false);
  }
  return;
}


/* ArtifactVaseProjectile::ArtifactVaseProjectile() */

void __thiscall ArtifactVaseProjectile::ArtifactVaseProjectile(ArtifactVaseProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0668b120;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactVaseProjectile_0668b310;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
            ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)(this + 0x1a8));
  return;
}


/* ArtifactVaseProjectile::StaticNew() */

ArtifactVaseProjectile * ArtifactVaseProjectile::StaticNew(void)

{
  ArtifactVaseProjectile *this;
  
  this = ::operator_new(0x1d8);
  ArtifactVaseProjectile(this);
  return this;
}


/* ArtifactVaseProjectile::~ArtifactVaseProjectile() */

void __thiscall ArtifactVaseProjectile::~ArtifactVaseProjectile(ArtifactVaseProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0668b120;
  *(undefined ***)(this + 0x10) = &PTR__ArtifactVaseProjectile_0668b310;
  ProbabilitySet<ArtifactVaseConfigProperties>::~ProbabilitySet
            ((ProbabilitySet<ArtifactVaseConfigProperties> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ArtifactVaseProjectile::~ArtifactVaseProjectile() */

void __thiscall ArtifactVaseProjectile::~ArtifactVaseProjectile(ArtifactVaseProjectile *this)

{
  ~ArtifactVaseProjectile(this + -0x10);
  return;
}


/* ArtifactVaseProjectile::~ArtifactVaseProjectile() */

void __thiscall ArtifactVaseProjectile::~ArtifactVaseProjectile(ArtifactVaseProjectile *this)

{
  ~ArtifactVaseProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ArtifactVaseProjectile::~ArtifactVaseProjectile() */

void __thiscall ArtifactVaseProjectile::~ArtifactVaseProjectile(ArtifactVaseProjectile *this)

{
  ~ArtifactVaseProjectile(this + -0x10);
  return;
}


/* ArtifactVaseProjectile::Initialize(ProbabilitySet<ArtifactVaseConfigProperties>&) */

void __thiscall
ArtifactVaseProjectile::Initialize(ArtifactVaseProjectile *this,ProbabilitySet *param_1)

{
  ProbabilitySet<ArtifactVaseConfigProperties>::operator=
            ((ProbabilitySet<ArtifactVaseConfigProperties> *)(this + 0x1a8),param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactVaseProjectile::spawnPlants(ArtifactVaseConfigProperties const&, Sexy::SexyVector3) */

void ArtifactVaseProjectile::spawnPlants
               (float param_1,float param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  string *psVar2;
  PlantType *pPVar3;
  long lVar4;
  Collectable *this;
  string *extraout_x0;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  string asStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  string asStack_60 [8];
  Vec3 aVStack_58 [16];
  Vec3 aVStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  DVec3 aDStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_58,param_1,param_2,0.0);
  FUN_05475d88(asStack_70,param_4);
  iVar5 = *(int *)(param_4 + 0x10);
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  pPVar3 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  lVar4 = PlantType::GetProps(pPVar3);
  if (*(int *)(lVar4 + 0x2c) < iVar5) {
    pPVar3 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
    lVar4 = PlantType::GetProps(pPVar3);
    iVar5 = *(int *)(lVar4 + 0x2c);
  }
  psVar2 = *(string **)(gLawnApp + 0x9f0);
  std::string::string(asStack_18,"vasebreaker_packet");
  this = (Collectable *)Board::AddCollectableWithDefaultMotion(psVar2,(SexyVector3 *)asStack_18);
  std::string::~string(asStack_18);
  nop();
  nop();
  CollectableSeedPacket::SetSeedType(extraout_x0);
  FUN_03723d3c(extraout_x0 + 0x208,iVar5);
  uVar7 = 0;
  uVar6 = 0;
  EATextSquish::Vec3::Vec3(aVStack_48,0.0,0.0,0.0);
  local_38 = Sexy::SexyVector3::operator+((SexyVector3 *)aVStack_58,(SexyVector3 *)aVStack_48);
  local_34 = uVar6;
  local_30 = uVar7;
  DVec3::DVec3(aDStack_28);
  DVec3::DVec3((DVec3 *)asStack_18);
  CalculateTossVelocity
            ((SexyVector3 *)aVStack_58,(SexyVector3 *)&local_38,40.0,0.6,(SexyVector3 *)aDStack_28,
             (SexyVector3 *)asStack_18);
  Collectable::SetMotionNewtonian(this,(SexyVector3 *)aDStack_28,(SexyVector3 *)asStack_18,true);
  Collectable::SetKeepOnBoard(this,true);
  NewPVPHealthBar::FlashDamage((NewPVPHealthBar *)this);
  puVar1 = gMessageRouter;
  FUN_05475d88(asStack_60,asStack_70);
  MessageRouter::Post<std::string_const&,std::string>
            ((MessageRouter *)puVar1,Message::VaseArtifactProducePlantCard,asStack_60);
  std::string::~string(asStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactVaseProjectile::spawnZombies(ArtifactVaseConfigProperties const&, Sexy::SexyVector3) */

void ArtifactVaseProjectile::spawnZombies
               (float param_1,float param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  string *psVar3;
  ZombieType *this;
  SexyVector3 *pSVar4;
  long *plVar5;
  code *pcVar6;
  int local_58;
  int local_54;
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  Vec3 aVStack_40 [16];
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_58);
  local_58 = BoardTransforms::BoardSpaceToGridXKeepOnBoard(param_1);
  local_54 = BoardTransforms::BoardSpaceToGridYKeepOnBoard(param_2);
  iVar1 = BoardTransforms::GridToBoardSpaceX(local_58);
  iVar2 = BoardTransforms::GridToBoardSpaceY(local_54);
  EATextSquish::Vec3::Vec3(aVStack_40,(float)iVar1,(float)iVar2,0.0);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_50,(RtWeakPtrBase *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  this = (ZombieType *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  ZombieType::EnsureResourceGroupsLoaded(this);
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)local_30);
  local_30[0] = *(undefined4 *)(param_4 + 0x10);
  plVar5 = *(long **)(gLawnApp + 0x9f0);
  pcVar6 = *(code **)(*plVar5 + 0x318);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_50);
  pSVar4 = (SexyVector3 *)
           (*pcVar6)(plVar5,aRStack_48,0xfffffffb,(RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  Zombie::SetHasPlantFood(SUB81(pSVar4,0));
  BoardEntity::PlaceOnBoard(pSVar4);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactVaseProjectile::handleImpact(BoardEntity*) */

void __thiscall
ArtifactVaseProjectile::handleImpact(ArtifactVaseProjectile *this,BoardEntity *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  pair<std::string_const,Sexy::PILifeValueTable> apStack_20 [8];
  int local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ArtifactVaseConfigProperties>::PickItem();
  if (local_18 == 0) {
    puVar2 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    spawnPlants(*puVar2,puVar2[1],puVar2[2],this,apStack_20);
  }
  else if (local_18 == 1) {
    puVar2 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    spawnZombies(*puVar2,puVar2[1],puVar2[2],this,apStack_20);
  }
  else if (local_18 == 2) {
    puVar2 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    spawnCollectables(*puVar2,puVar2[1],puVar2[2],this,apStack_20);
  }
  uVar1 = Projectile::handleImpact((Projectile *)this,param_1);
  std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(apStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

