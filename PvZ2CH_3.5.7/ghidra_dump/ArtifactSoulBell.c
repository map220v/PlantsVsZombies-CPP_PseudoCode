// Class: ArtifactSoulBell


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSoulBell::Initialize(Sexy::RtWeakPtr<ArtifactProperties>) */

void __thiscall ArtifactSoulBell::Initialize(ArtifactSoulBell *this,RtWeakPtrBase *param_2)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  BasePowerup::SetPowerupType((BasePowerup *)this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSoulBell::GetExtraHpRate(std::string const&) */

void ArtifactSoulBell::GetExtraHpRate(string *param_1)

{
  char cVar1;
  string *psVar2;
  long lVar3;
  ResourceInfo *pRVar4;
  undefined4 uVar5;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  EntityComponent_GroundEffect::GetEffect();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  cVar1 = PlantRestrictionSet::IsIncluded
                    ((PlantRestrictionSet *)(lVar3 + 0x128),(PlantType *)pRVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (cVar1 != '\0') {
    uVar5 = *(undefined4 *)(param_1 + 0x30);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSoulBell::GetExtraAttackRate(std::string const&) */

void ArtifactSoulBell::GetExtraAttackRate(string *param_1)

{
  char cVar1;
  string *psVar2;
  long lVar3;
  ResourceInfo *pRVar4;
  undefined4 uVar5;
  RtWeakPtr aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar5 = 0;
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  EntityComponent_GroundEffect::GetEffect();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  cVar1 = PlantRestrictionSet::IsIncluded
                    ((PlantRestrictionSet *)(lVar3 + 0x128),(PlantType *)pRVar4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (cVar1 != '\0') {
    uVar5 = *(undefined4 *)(param_1 + 0x2c);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSoulBell::StaticClassInit() */

void ArtifactSoulBell::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArtifactSoulBell");
    (*pcVar2)(plVar1,asStack_10,FUN_037a9a54,0x80,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSoulBell::StaticGetClass() */

long * ArtifactSoulBell::StaticGetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactSoulBell",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSoulBell::GetClass() const */

long * ArtifactSoulBell::GetClass(void)

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
  uVar2 = Artifact::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactSoulBell",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactSoulBell::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
ArtifactSoulBell::LaunchProjectileAt
          (ArtifactSoulBell *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)Sexy::Rand(param_3 * 200.0);
  fVar2 = (float)Sexy::Rand(param_4 * 0.5);
  Projectile::LaunchAt(param_1,param_2,fVar1 + 200.0,fVar2 + 0.5);
  return;
}


/* ArtifactSoulBell::DisplayPassiveSkill(float) */

void __thiscall ArtifactSoulBell::DisplayPassiveSkill(ArtifactSoulBell *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x50) = fVar1 + param_1;
  return;
}


/* ArtifactSoulBell::ArtifactSoulBell() */

void __thiscall ArtifactSoulBell::ArtifactSoulBell(ArtifactSoulBell *this)

{
  Artifact::Artifact((Artifact *)this);
  *(undefined ***)this = &PTR_GetClass_066962c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x78));
  return;
}


/* ArtifactSoulBell::StaticNew() */

ArtifactSoulBell * ArtifactSoulBell::StaticNew(void)

{
  ArtifactSoulBell *this;
  
  this = ::operator_new(0x80);
  ArtifactSoulBell(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSoulBell::ControlZombie() */

void __thiscall ArtifactSoulBell::ControlZombie(ArtifactSoulBell *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  Zombie *pZVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar7;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  ulong uVar9;
  int extraout_w1;
  ulong uVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
    cVar2 = (**(code **)(*plVar5 + 0x328))();
    if (cVar2 == '\0') {
      pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      cVar2 = Zombie::IsInvisible(pZVar6);
      if (cVar2 == '\0') {
        uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
        cVar2 = RealObject::IsOnOpposingTeam(uVar4,1);
        if (cVar2 != '\0') {
          this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(this_00);
          if (*pfVar7 <= 800.0) {
            pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
            cVar2 = Zombie::IsBoss(pZVar6);
            if (cVar2 == '\0') {
              plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
              cVar2 = (**(code **)(*plVar5 + 0x4d8))();
              uVar10 = 0;
              if (cVar2 == '\0') {
                while( true ) {
                  uVar4 = *(undefined8 *)(this + 0x60);
                  uVar9 = FUN_037a975c(uVar4,*(undefined8 *)(this + 0x68));
                  if (uVar9 <= uVar10) break;
                  pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_037a9768(uVar4,uVar10);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
                  pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
                  pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar6);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
                  uVar10 = uVar10 + 1;
                }
                pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
                iVar3 = Zombie::GetSizeType(pZVar6);
                if ((iVar3 != 2) || (iVar3 = FUN_037a9730(*(undefined4 *)(this + 0x20)), 3 < iVar3))
                {
                  uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
                  cVar2 = Zombie::HasCondition(uVar4,0x93);
                  if (cVar2 != '\0') {
                    pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
                    iVar3 = Zombie::GetSizeType(pZVar6);
                    if (iVar3 == 2) {
                      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
                    /* WARNING: Load size is inaccurate */
                      Zombie::ApplyCondition
                                (*(Zombie **)(this + 0x40),(float)*(Zombie **)(this + 0x40) - 1.0,
                                 uVar4,0x94,1);
                    }
                    else {
                      uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
                      pZVar6 = (Zombie *)PVZ_EOT();
                      Zombie::ApplyCondition(pZVar6,0,uVar4,0x94,1);
                    }
                    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
                    (**(code **)(*plVar5 + 0x260))();
                  }
                }
              }
            }
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSoulBell::~ArtifactSoulBell() */

void __thiscall ArtifactSoulBell::~ArtifactSoulBell(ArtifactSoulBell *this)

{
  *(undefined ***)this = &PTR_GetClass_066962c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x78));
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)(this + 0x60));
  Artifact::~Artifact((Artifact *)this);
  return;
}


/* ArtifactSoulBell::~ArtifactSoulBell() */

void __thiscall ArtifactSoulBell::~ArtifactSoulBell(ArtifactSoulBell *this)

{
  ~ArtifactSoulBell(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSoulBell::FireFulu() */

void __thiscall ArtifactSoulBell::FireFulu(ArtifactSoulBell *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  Zombie *pZVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float *pfVar7;
  RtObject *pRVar8;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar9;
  long lVar10;
  ulong uVar11;
  string *psVar12;
  PopAnimRig *this_01;
  long lVar13;
  ArtifactSoulBellProperties *pAVar14;
  FuluProjectile *this_02;
  int extraout_w1;
  int extraout_w1_00;
  code *pcVar15;
  ulong uVar16;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtId aRStack_38 [16];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x29);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_50,(RtWeakPtrBase *)aRStack_38);
    Sexy::RtId::~RtId(aRStack_38);
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    cVar2 = (**(code **)(*plVar5 + 0x328))();
    if (cVar2 == '\0') {
      pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
      cVar2 = Zombie::IsInvisible(pZVar6);
      if (cVar2 == '\0') {
        uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
        cVar2 = RealObject::IsOnOpposingTeam(uVar4,1);
        if (cVar2 != '\0') {
          this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(this_00);
          if ((*pfVar7 <= 800.0) && (200.0 <= *pfVar7)) {
            pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
            cVar2 = Zombie::IsBoss(pZVar6);
            if (cVar2 == '\0') {
              plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
              cVar2 = (**(code **)(*plVar5 + 0x4d8))();
              if (cVar2 == '\0') {
                pRVar8 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                bVar1 = Sexy::RtObject::IsA<ZombieCamel>(pRVar8);
                if (!bVar1) {
                  pRVar8 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                  bVar1 = Sexy::RtObject::IsA<ZombieBallet>(pRVar8);
                  uVar16 = 0;
                  if (!bVar1) {
                    do {
                      uVar4 = *(undefined8 *)(this + 0x60);
                      uVar11 = FUN_037a975c(uVar4,*(undefined8 *)(this + 0x68));
                      if (uVar11 <= uVar16) {
                        uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                        cVar2 = Zombie::HasCondition(uVar4,0x27);
                        if (cVar2 != '\0') break;
                        uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                        cVar2 = Zombie::HasCondition(uVar4,0x25);
                        if (cVar2 != '\0') break;
                        uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                        cVar2 = Zombie::HasCondition(uVar4,0x92);
                        if (cVar2 != '\0') break;
                        plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                        cVar2 = (**(code **)(*plVar5 + 0x338))();
                        if (cVar2 != '\0') break;
                        pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                        psVar12 = (string *)Zombie::GetTypeName(pZVar6);
                        bVar1 = std::operator==(psVar12,"renai_gliding");
                        if (bVar1) {
                          pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                          cVar2 = Zombie::IsFlying(pZVar6);
                          if (cVar2 != '\0') break;
                        }
                        pRVar8 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                        bVar1 = Sexy::RtObject::IsA<ZombiePirateBarrel>(pRVar8);
                        if (!bVar1) {
                          plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                          pcVar15 = *(code **)(*plVar5 + 0x3d0);
                          psVar12 = (string *)
                                    Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::
                                    GetInstancePtr();
                          std::string::string(asStack_48,"nekotail");
                          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar12);
                          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,
                                     (RtWeakPtrBase *)aRStack_40);
                          cVar2 = (*pcVar15)(plVar5,aRStack_38,0);
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
                          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
                          std::string::~string(asStack_48);
                          nop();
                          if (cVar2 != '\0') {
                            Sexy::Insets::Insets((Insets *)aRStack_38);
                            pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                            this_01 = (PopAnimRig *)Zombie::GetAnimRig(pZVar6);
                            std::string::string((string *)aRStack_40,"butter");
                            lVar13 = PopAnimRig::CalcSymbolRect
                                               (this_01,(string *)aRStack_40,(TRect *)aRStack_38);
                            std::string::~string((string *)aRStack_40);
                            nop();
                            if (lVar13 != 0) {
                              EntityComponent_GroundEffect::GetEffect();
                              pRVar8 = (RtObject *)
                                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
                              pAVar14 = Sexy::RtObject::Cast<ArtifactSoulBellProperties>(pRVar8);
                              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
                              plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                              (**(code **)(*plVar5 + 600))();
                              iVar3 = BoardConstants::NUMBER_OF_ROWS();
                              BoardTransforms::GridToBoardSpaceY(iVar3 / 2);
                              uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
                              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                        ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,
                                         (RtWeakPtrBase *)(pAVar14 + 0x150));
                              pRVar8 = (RtObject *)
                                       Board::AddProjectile
                                                 ((Board *)0x43160000,0x42c80000,0,uVar4,aRStack_40,
                                                  0,0);
                              this_02 = Sexy::RtObject::Cast<FuluProjectile>(pRVar8);
                              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
                              pZVar6 = (Zombie *)
                                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                              iVar3 = Zombie::GetSizeType(pZVar6);
                              if (iVar3 == 2) {
                                FuluProjectile::SetBigFulu(this_02);
                                iVar3 = FUN_037a9730(*(undefined4 *)(this + 0x20));
                                if (3 < iVar3) {
                                  lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                                  FUN_02fd3c44(lVar13 + 0x5cc);
                                  FuluProjectile::SetSpacial(this_02,true);
                                }
                              }
                              pRVar8 = (RtObject *)
                                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                              Sexy::RtObject::Cast<BoardEntity>(pRVar8);
                              ToolPacketData::GetProps();
                              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                                        ((RtWeakPtr<Sexy::SoundResource> *)aRStack_40,
                                         (RtWeakPtrBase *)asStack_48);
                              Projectile::SetTarget((Projectile *)this_02,(RtWeakPtr *)aRStack_40);
                              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
                              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                        ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_48);
                              FUN_02fd3c50(this_02 + 0x24);
                              FuluProjectile::SetStunDuration(this_02,*(float *)(this + 0x40));
                              pRVar8 = (RtObject *)
                                       Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                              Sexy::RtObject::Cast<BoardEntity>(pRVar8);
                              BombProjectile::SetOwningRocket((ZombossCrosshair *)this_02);
                              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
                              iVar3 = extraout_w1_00;
                              goto LAB_037aa8e4;
                            }
                          }
                        }
                        break;
                      }
                      pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_037a9768(uVar4,uVar16);
                      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
                      pZVar6 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
                      pRVar9 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar6);
                      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar9);
                      cVar2 = std::operator==((string *)(lVar13 + 8),(string *)(lVar10 + 8));
                      uVar16 = uVar16 + 1;
                    } while (cVar2 == '\0');
                  }
                }
              }
            }
          }
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    iVar3 = extraout_w1;
LAB_037aa8e4:
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar3);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSoulBell::SpawnZombie(int) */

void __thiscall ArtifactSoulBell::SpawnZombie(ArtifactSoulBell *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  string *psVar11;
  Zombie *this_00;
  long lVar12;
  int *piVar13;
  long *plVar14;
  code *pcVar15;
  float fVar16;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  Insets aIStack_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_29;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_48);
  local_6c = 0;
  iVar3 = BoardConstants::NUMBER_OF_ROWS();
  if (local_6c < iVar3) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_30);
      iVar3 = local_6c;
      iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      Sexy::Insets::Insets(aIStack_58,0,iVar3,iVar4,1);
      EntityFinder::GetEntitiesInGridSquares
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_30,2,
                 aIStack_58);
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_30);
      local_60 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_30);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_68,(__normal_iterator *)&local_60),
            bVar1) {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
        pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
        if ((((pZVar7 != (Zombie *)0x0) &&
             (cVar2 = (**(code **)(*(long *)pZVar7 + 0x328))(), cVar2 == '\0')) &&
            (cVar2 = Zombie::IsInvisible(pZVar7), cVar2 == '\0')) &&
           (cVar2 = RealObject::IsOnOpposingTeam(pZVar7,1), cVar2 != '\0')) {
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)&local_48,&local_6c);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_30);
      local_6c = local_6c + 1;
      iVar3 = BoardConstants::NUMBER_OF_ROWS();
    } while (local_6c < iVar3);
  }
  uVar8 = FUN_037a9738(local_48,local_40);
  if (1 < uVar8) {
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_48);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_48);
    std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
              (uVar9,uVar10);
  }
  if (param_1 != 0) {
    pZVar7 = (Zombie *)PVZ_EOT();
    iVar3 = 0;
    do {
      psVar11 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
      std::string::string((string *)aIStack_58,"tutorial");
      ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar11);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_60,(RtWeakPtrBase *)&local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      std::string::~string((string *)aIStack_58);
      nop();
      Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
      local_30 = FUN_037a9730(*(undefined4 *)(this + 0x20));
      local_2c = 0;
      local_2b = 1;
      local_29 = 1;
      plVar14 = *(long **)(gLawnApp + 0x9f0);
      pcVar15 = *(code **)(*plVar14 + 0x318);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aIStack_58,(RtWeakPtrBase *)&local_60);
      this_00 = (Zombie *)
                (*pcVar15)(plVar14,(Vec3 *)aIStack_58,0xfffffffb,(ValidatePlantData *)&local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_58);
      RealObject::JoinTeam((RealObject *)this_00,1);
      uVar9 = local_48;
      lVar12 = FUN_037a9738(local_48,local_40);
      if (lVar12 == 0) {
        iVar4 = BoardConstants::NUMBER_OF_ROWS();
        iVar4 = Sexy::Rand(iVar4);
        iVar4 = BoardTransforms::GridToBoardSpaceY(iVar4);
      }
      else {
        piVar13 = (int *)FUN_037a9770(uVar9,(long)iVar3);
        iVar4 = BoardTransforms::GridToBoardSpaceY(*piVar13);
        uVar8 = FUN_037a9738(local_48,local_40);
        iVar5 = 0;
        if (uVar8 != 0) {
          iVar5 = (int)((ulong)(long)(iVar3 + 1) / uVar8);
        }
        iVar3 = (iVar3 + 1) - (int)uVar8 * iVar5;
      }
      iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
      fVar16 = (float)Sexy::Rand((float)iVar5);
      EATextSquish::Vec3::Vec3((Vec3 *)aIStack_58,fVar16 + 200.0,(float)iVar4,0.0);
      Zombie::ApplyCondition(pZVar7,0,this_00,0x93,1);
      Zombie::ApplyCondition(pZVar7,0,this_00,0x94,1);
      Zombie::RiseFromGround(this_00,(SexyVector3 *)aIStack_58,true);
      ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSoulBell::Activate() */

void __thiscall ArtifactSoulBell::Activate(ArtifactSoulBell *this)

{
  char cVar1;
  ArtifactMgr *pAVar2;
  RtObject *this_00;
  ArtifactSoulBellProperties *pAVar3;
  ulong uVar4;
  string *psVar5;
  int iVar6;
  ulong uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Artifact::Activate((Artifact *)this);
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  uVar8 = ArtifactMgr::CalculateFieldValue(pAVar2,0,0);
  *(undefined4 *)(this + 0x40) = uVar8;
  pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
  uVar8 = ArtifactMgr::CalculateFieldValue(pAVar2,0,1);
  fVar10 = *(float *)(this + 0x40);
  *(undefined4 *)(this + 0x44) = uVar8;
  fVar9 = (float)Artifact::GetBoostValue((Artifact *)this,3);
  *(float *)(this + 0x40) = *(float *)(this + 0x40) + fVar10 * fVar9;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar9 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar9 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar9 = fVar9 * 0.01;
  }
  *(float *)(this + 0x2c) = fVar9;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,1);
  fVar9 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar9 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,1,0);
    fVar9 = fVar9 * 0.01;
  }
  *(float *)(this + 0x30) = fVar9;
  cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  fVar9 = 0.0;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar9 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,0);
  }
  *(float *)(this + 0x4c) = fVar9;
  fVar10 = (float)Artifact::GetBoostValue((Artifact *)this,6);
  fVar9 = *(float *)(this + 0x4c) - fVar9 * fVar10;
  *(float *)(this + 0x4c) = fVar9;
  if (fVar9 <= 0.0) {
    uVar8 = PVZ_EOT();
    *(undefined4 *)(this + 0x50) = uVar8;
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  }
  else {
    fVar9 = (float)PVZ_T();
    *(float *)(this + 0x50) = fVar9 + *(float *)(this + 0x4c);
    uVar8 = PVZ_EOT();
    cVar1 = Artifact::IsFieldActivated((Artifact *)this,2);
  }
  iVar6 = 1;
  if (cVar1 != '\0') {
    pAVar2 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstance();
    fVar9 = (float)ArtifactMgr::CalculateFieldValue(pAVar2,2,1);
    iVar6 = (int)fVar9;
  }
  *(int *)(this + 0x54) = iVar6;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x48) = uVar8;
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  clear((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
         *)(this + 0x60));
  EntityComponent_GroundEffect::GetEffect();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pAVar3 = Sexy::RtObject::Cast<ArtifactSoulBellProperties>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  for (uVar7 = 0;
      uVar4 = FUN_037a9748(*(undefined8 *)(pAVar3 + 0x158),*(undefined8 *)(pAVar3 + 0x160)),
      uVar7 < uVar4; uVar7 = uVar7 + 1) {
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_037a9754(*(undefined8 *)(pAVar3 + 0x158),uVar7);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_10);
    if (cVar1 != '\0') {
      std::
      vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
      push_back((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                 *)(this + 0x60),(RtWeakPtr *)aRStack_10);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactSoulBell::DoTrigger() */

void __thiscall ArtifactSoulBell::DoTrigger(ArtifactSoulBell *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int local_20;
  int local_1c;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ArtifactGravity::DelayToCooldown((ArtifactGravity *)this);
  *(undefined4 *)(this + 0x5c) = 0;
  Sexy::Point::Point((Point *)&local_20,0,0);
  iVar2 = BoardTransforms::GridToBoardSpaceX(local_20);
  iVar3 = BoardTransforms::GridToBoardSpaceY(local_1c);
  EATextSquish::Vec3::Vec3(aVStack_18,(float)iVar2,(float)iVar3,0.0);
  fVar4 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x48) = fVar4 + 0.9;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactSoulBell::Update() */

void __thiscall ArtifactSoulBell::Update(ArtifactSoulBell *this)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  
  Artifact::Update((Artifact *)this);
  cVar1 = FUN_037a9734(this[0x3d]);
  if (cVar1 != '\0') {
    if ((this[0x3c] != (ArtifactSoulBell)0x0) &&
       (fVar2 = (float)PVZ_T(), *(float *)(this + 0x48) < fVar2)) {
      if (*(int *)(this + 0x5c) == 0) {
        FireFulu(this);
        *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + 1;
        *(float *)(this + 0x48) = *(float *)(this + 0x48) + 2.0;
      }
      else if (*(int *)(this + 0x5c) == 1) {
        ControlZombie(this);
        uVar3 = PVZ_EOT();
        *(undefined4 *)(this + 0x48) = uVar3;
        *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + 1;
      }
    }
    fVar2 = (float)PVZ_T();
    if (*(float *)(this + 0x50) < fVar2) {
      SpawnZombie(this,*(int *)(this + 0x54));
      fVar2 = (float)PVZ_T();
      *(float *)(this + 0x50) = fVar2 + *(float *)(this + 0x4c);
      return;
    }
  }
  return;
}

