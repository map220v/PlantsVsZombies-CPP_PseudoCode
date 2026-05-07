// Class: PlantStickybombRice


/* PlantStickybombRice::GetPlantAttackRect(PlantWeapon) */

long PlantStickybombRice::GetPlantAttackRect(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  PlantFramework::GetPlantAttackRect();
  if (param_3 == 0) {
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - iVar1;
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    *(int *)(param_1 + 0xc) = iVar1 * 3;
  }
  return param_1;
}


/* PlantStickybombRice::PlantStickybombRice() */

void __thiscall PlantStickybombRice::PlantStickybombRice(PlantStickybombRice *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06822b50;
  return;
}


/* PlantStickybombRice::StaticNew() */

PlantStickybombRice * PlantStickybombRice::StaticNew(void)

{
  PlantStickybombRice *this;
  
  this = ::operator_new(0x28);
  PlantStickybombRice(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStickybombRice::StaticClassInit() */

void PlantStickybombRice::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantStickybombRice");
    (*pcVar2)(plVar1,asStack_10,FUN_04279048,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStickybombRice::StaticGetClass() */

long * PlantStickybombRice::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantStickybombRice",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantStickybombRice::GetClass() const */

long * PlantStickybombRice::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantStickybombRice",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantStickybombRice::~PlantStickybombRice() */

void __thiscall PlantStickybombRice::~PlantStickybombRice(PlantStickybombRice *this)

{
  *(undefined ***)this = &PTR_GetClass_06822b50;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantStickybombRice::~PlantStickybombRice() */

void __thiscall PlantStickybombRice::~PlantStickybombRice(PlantStickybombRice *this)

{
  ~PlantStickybombRice(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStickybombRice::isZombieFullOfBombs(Zombie*) */

void __thiscall PlantStickybombRice::isZombieFullOfBombs(PlantStickybombRice *this,Zombie *param_1)

{
  char cVar1;
  undefined1 uVar2;
  CthulhuSubSystem *this_00;
  RtObject *this_01;
  StickybombBomb *this_02;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::HasCondition(param_1,0x57);
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"stickybomb");
    this_00 = (CthulhuSubSystem *)Zombie::GetAttachedBoardEntity(param_1,asStack_10);
    std::string::~string(asStack_10);
    nop();
    if ((this_00 != (CthulhuSubSystem *)0x0) &&
       (cVar1 = CthulhuSubSystem::Update(this_00), cVar1 != '\0')) {
      this_01 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this_00 + 0x10));
      this_02 = Sexy::RtObject::Cast<StickybombBomb>(this_01);
      if (this_02 != (StickybombBomb *)0x0) {
        uVar2 = StickybombBomb::HasMaxBombs(this_02);
        goto LAB_042795f4;
      }
    }
  }
  uVar2 = 0;
LAB_042795f4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStickybombRice::isValidTarget(BoardEntity*) */

void __thiscall PlantStickybombRice::isValidTarget(PlantStickybombRice *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  Zombie *this_00;
  undefined8 uVar5;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (cVar1 = GameObject::IsDestroyed((GameObject *)param_1), cVar1 == '\0')) {
    bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (!bVar2) {
      uVar3 = 1;
      goto LAB_042796cc;
    }
    nop();
    uVar5 = operator|(1,8);
    uVar4 = operator|(uVar5,4);
    cVar1 = Zombie::MatchesAny(this_00,uVar4);
    if ((((cVar1 == '\0') && (cVar1 = RealObject::IsOnTeam(this_00,1), cVar1 == '\0')) &&
        (cVar1 = FUN_0427947c(*(undefined4 *)(this_00 + 0xcc)), cVar1 == '\0')) &&
       ((cVar1 = Zombie::IsFlying(this_00), cVar1 == '\0' &&
        (cVar1 = Zombie::IsOnBoardOrClose(this_00,1), cVar1 != '\0')))) {
      cVar1 = isZombieFullOfBombs(this,this_00);
      if (cVar1 == '\0') {
        pcVar6 = *(code **)(*(long *)this_00 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        uVar3 = (*pcVar6)(this_00,aRStack_10,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        goto LAB_042796cc;
      }
    }
  }
  uVar3 = 0;
LAB_042796cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PlantStickybombRice::playAttackAnimation(bool) */

void __thiscall PlantStickybombRice::playAttackAnimation(PlantStickybombRice *this,bool param_1)

{
  PlantAnimRig_StickybombRice *this_00;
  
  if (!param_1) {
    this_00 = (PlantAnimRig_StickybombRice *)FUN_0427a0c0();
    PlantAnimRig_StickybombRice::PlayLeftAttack(this_00);
    return;
  }
  Plant::PlayAttackAnimation(*(Plant **)(this + 0x10));
  return;
}


/* PlantStickybombRice::launchProjectileAt(Projectile*, Sexy::SexyVector3 const&,
   Sexy::RtWeakPtr<BoardEntity>, float, float) */

void __thiscall
PlantStickybombRice::launchProjectileAt
          (float param_1_00,float param_2_00,PlantStickybombRice *this,Projectile *param_1,
          SexyVector3 *param_2,RtWeakPtr *param_6)

{
  int iVar1;
  long lVar2;
  StickybombRiceProjectile *this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = FUN_0427a170(*(undefined8 *)(this + 0x10));
  fVar6 = *(float *)(lVar2 + 700);
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_1_00 * fVar6);
  fVar5 = *(float *)(lVar2 + 0x2b8);
  fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,param_2_00 * fVar5);
  Projectile::LaunchAt(param_1,param_2,fVar3 + fVar6,fVar4 + fVar5);
  Projectile::SetTarget(param_1,param_6);
  iVar1 = FUN_04277e7c(*(undefined8 *)(this + 0x10));
  if (iVar1 < 2) {
    fVar3 = 0.0;
    fVar4 = 0.0;
  }
  else if (iVar1 == 2) {
    fVar3 = 0.1;
    fVar4 = 1.0;
  }
  else {
    fVar3 = 0.2;
    fVar4 = 2.0;
  }
  this_00 = Sexy::RtObject::Cast<StickybombRiceProjectile>((RtObject *)param_1);
  StickybombRiceProjectile::Initialize
            (this_00,fVar4 + *(float *)(lVar2 + 0x2c8),*(float *)(lVar2 + 0x2cc),
             *(float *)(lVar2 + 0x2d0),fVar3 + *(float *)(lVar2 + 0x2d4));
  return;
}


/* PlantStickybombRice::launchLv5ProjectileAt(Projectile*, Sexy::SexyVector3 const&,
   Sexy::RtWeakPtr<BoardEntity>, float, float) */

void __thiscall
PlantStickybombRice::launchLv5ProjectileAt
          (float param_1_00,float param_2_00,PlantStickybombRice *this,Projectile *param_1,
          SexyVector3 *param_2,RtWeakPtr *param_6)

{
  int iVar1;
  long lVar2;
  StickybombRiceLV5Projectile *pSVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = FUN_0427a170(*(undefined8 *)(this + 0x10));
  fVar7 = *(float *)(lVar2 + 700);
  fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,param_1_00 * fVar7);
  fVar6 = *(float *)(lVar2 + 0x2b8);
  fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,param_2_00 * fVar6);
  fVar5 = fVar5 + fVar6;
  Projectile::LaunchAt(param_1,param_2,fVar4 + fVar7,fVar5);
  Projectile::SetTarget(param_1,param_6);
  iVar1 = FUN_04277e7c(*(undefined8 *)(this + 0x10));
  if (iVar1 < 2) {
    fVar4 = 0.0;
    fVar6 = 0.0;
  }
  else if (iVar1 == 2) {
    fVar4 = 0.1;
    fVar6 = 1.0;
  }
  else {
    fVar4 = 0.2;
    fVar6 = 2.0;
  }
  pSVar3 = Sexy::RtObject::Cast<StickybombRiceLV5Projectile>((RtObject *)param_1);
  StickybombRiceLV5Projectile::Initialize
            (pSVar3,fVar6 + *(float *)(lVar2 + 0x2c8),*(float *)(lVar2 + 0x2cc),
             *(float *)(lVar2 + 0x2d0),fVar4 + *(float *)(lVar2 + 0x2d4));
  pSVar3 = Sexy::RtObject::Cast<StickybombRiceLV5Projectile>((RtObject *)param_1);
  StickybombRiceLV5Projectile::setFlyTotalTime(pSVar3,fVar5,param_2,true,false);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStickybombRice::fireAtTarget(BoardEntity*, PlantWeapon) */

void PlantStickybombRice::fireAtTarget
               (undefined1 param_1_00 [16],undefined4 param_2,undefined4 param_3,
               PlantFramework *param_1,RtObject *param_5,undefined4 param_6)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  GridItem *pGVar4;
  undefined8 uVar5;
  Zombie *pZVar6;
  code *pcVar7;
  SharkMinion *pSVar8;
  undefined4 uVar9;
  float fVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  DVec3 aDStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_0427a170(*(undefined8 *)(param_1 + 0x10));
  if (param_5 == (RtObject *)0x0) {
    uVar5 = 0;
  }
  else {
    DVec3::DVec3(aDStack_28);
    bVar1 = Sexy::RtObject::IsA<Zombie>(param_5);
    if (bVar1) {
      pZVar6 = Sexy::RtObject::Cast<Zombie>(param_5);
      uVar9 = *(undefined4 *)(lVar3 + 0x2b8);
      pcVar7 = *(code **)(*(long *)pZVar6 + 0x3b0);
    }
    else {
      bVar1 = Sexy::RtObject::IsA<GridItem>(param_5);
      if (!bVar1) {
        uVar5 = 0;
        goto LAB_0427a534;
      }
      pGVar4 = Sexy::RtObject::Cast<GridItem>(param_5);
      uVar9 = *(undefined4 *)(lVar3 + 0x2b8);
      pcVar7 = *(code **)(*(long *)pGVar4 + 0x238);
    }
    local_18 = (*pcVar7)(uVar9);
    local_14 = param_2;
    local_10 = param_3;
    Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_28,(SexyVector3 *)&local_18);
    cVar2 = FUN_04277e84(*(undefined8 *)(param_1 + 0x10));
    if (cVar2 != '\0') {
      fVar10 = (float)PlantFramework::Rand(param_1,1.0);
      lVar3 = FUN_0427a170(*(undefined8 *)(param_1 + 0x10));
      if (fVar10 < *(float *)(lVar3 + 0x2c4)) {
        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 3;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
        pSVar8 = *(SharkMinion **)(param_1 + 0x10);
        uVar9 = SharkMinion::getRow(pSVar8);
        uVar5 = Plant::Fire((Plant *)pSVar8,
                            (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                            &local_18,uVar9,param_6);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0xffffffff;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_30);
        launchLv5ProjectileAt
                  (_FUN_0427a658,(undefined4)_FUN_0427a658,param_1,uVar5,aDStack_28,
                   (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        goto LAB_0427a534;
      }
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
    pSVar8 = *(SharkMinion **)(param_1 + 0x10);
    uVar9 = SharkMinion::getRow(pSVar8);
    uVar5 = Plant::Fire((Plant *)pSVar8,
                        (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18,
                        uVar9,param_6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_30);
    launchProjectileAt(_FUN_0427a658,(undefined4)_FUN_0427a658,param_1,uVar5,aDStack_28,
                       (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  }
LAB_0427a534:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStickybombRice::launchSpecialProjectile(Sexy::SexyVector3, Sexy::RtWeakPtr<BoardEntity>,
   Sexy::RtWeakPtr<BoardEntity> const&) */

void PlantStickybombRice::launchSpecialProjectile
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               RtWeakPtr<Sexy::ResourceInfo> *param_5)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  RtObject *this;
  RtObject *this_00;
  undefined8 uVar4;
  StickybombRiceProjectile *this_01;
  Plant *this_02;
  SharkMinion *this_03;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  lVar3 = FUN_0427a170(*(undefined8 *)(param_4 + 0x10));
  this_02 = *(Plant **)(param_4 + 0x10);
  *(undefined4 *)(this_02 + 0x150) = 1;
  cVar1 = Plant::GetAvatarEnable(this_02);
  if (cVar1 != '\0') {
    *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 2;
  }
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  Sexy::RtObject::Cast<Zombie>(this);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  this_03 = *(SharkMinion **)(param_4 + 0x10);
  uVar2 = SharkMinion::getRow(this_03);
  Plant::Fire((Plant *)this_03,aRStack_10,uVar2,1);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  uVar4 = FUN_04277e58(*(undefined8 *)(this_00 + 0xe0));
  uVar4 = operator|(uVar4,0x2000);
  FUN_04277e5c(this_00 + 0xe0,uVar4);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_5);
  launchProjectileAt((PlantStickybombRice *)0x3f800000,0x3e19999a,param_4,this_00,&local_30,
                     aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  this_01 = Sexy::RtObject::Cast<StickybombRiceProjectile>(this_00);
  StickybombRiceProjectile::Initialize
            (this_01,*(float *)(lVar3 + 0x2d8),*(float *)(lVar3 + 0x2dc),*(float *)(lVar3 + 0x2e0),
             *(float *)(lVar3 + 0x2e4));
  uVar2 = Plant::GetAvatarEnable(*(Plant **)(param_4 + 0x10));
  FUN_04277ea4(this_00 + 0x1a5,uVar2);
  *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStickybombRice::DoSpecial(int) */

void PlantStickybombRice::DoSpecial(int param_1)

{
  bool bVar1;
  char cVar2;
  PlantStickybombRice *this;
  long lVar3;
  RtWeakPtrBase *pRVar4;
  RtObject *this_00;
  Zombie *pZVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var6;
  undefined8 *puVar7;
  undefined4 in_s1;
  undefined4 in_s2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  this = (PlantStickybombRice *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0xd0))(avStack_20,this,2);
  lVar3 = FUN_0427a170(*(undefined8 *)(this + 0x10));
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (!bVar1) {
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_58,pRVar4);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_58);
    if (bVar1) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      pZVar5 = Sexy::RtObject::Cast<Zombie>(this_00);
      if (pZVar5 == (Zombie *)0x0) goto LAB_0427b540;
      cVar2 = isValidTarget(this,(BoardEntity *)pZVar5);
      if (cVar2 != '\0') {
        p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
        puVar7 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(p_Var6);
        local_40 = *puVar7;
        local_38 = *(undefined4 *)(puVar7 + 1);
        local_30 = (**(code **)(*(long *)pZVar5 + 0x3b0))(*(undefined4 *)(lVar3 + 0x2b8),pZVar5);
        local_2c = in_s1;
        local_28 = in_s2;
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_40,(SexyVector3 *)&local_30);
        goto LAB_0427b564;
      }
    }
    else {
LAB_0427b540:
      p_Var6 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
      puVar7 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var6);
      local_40 = *puVar7;
      local_38 = *(undefined4 *)(puVar7 + 1);
LAB_0427b564:
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_58);
      in_s1 = local_40._4_4_;
      in_s2 = local_38;
      launchSpecialProjectile
                ((undefined4)local_40,this,(RtWeakPtr<Sexy::SoundResource> *)&local_30,aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStickybombRice::findTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*> >&,
   PlantWeapon) */

void PlantStickybombRice::findTargets(undefined8 param_1,EntityFinder *param_2)

{
  int local_40;
  int local_3c;
  Point aPStack_38 [8];
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Sexy::Insets::Insets(aIStack_30,local_40,local_3c + -1,99,3);
  std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::push_back
            ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)avStack_20,
             (TRect *)aIStack_30);
  Sexy::Insets::Insets(aIStack_30,0,local_3c + -1,local_40 + -1,3);
  std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::push_back
            ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)avStack_20,
             (TRect *)aIStack_30);
  Sexy::Point::Point(aPStack_38,(TPoint *)&local_40);
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)aIStack_30,aPStack_38);
  EntityFinder::EntityFinderGridspace(param_2,2,avStack_20,aIStack_30);
  std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::~vector
            ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStickybombRice::getBestSingleTarget(PlantWeapon) */

void __thiscall
PlantStickybombRice::getBestSingleTarget(PlantStickybombRice *this,undefined4 param_2)

{
  char cVar1;
  BoardEntity *pBVar2;
  long lVar3;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  findTargets(this,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,
              param_2);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (cVar1 == '\0') {
    do {
      pBVar2 = (BoardEntity *)EntityFinder::PullFirstMatchingEntity((vector *)&local_20,-1,true);
      cVar1 = isValidTarget(this,pBVar2);
      if ((cVar1 != '\0') && (pBVar2 != (BoardEntity *)0x0)) goto LAB_0427c338;
      lVar3 = FUN_04277eb4(local_20,local_18);
    } while (lVar3 != 0);
  }
  pBVar2 = (BoardEntity *)0x0;
LAB_0427c338:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pBVar2);
  }
  return;
}


/* PlantStickybombRice::FindTargetAndFire(PlantWeapon) */

bool PlantStickybombRice::FindTargetAndFire(PlantStickybombRice *param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  float *pfVar1;
  float *pfVar2;
  
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)getBestSingleTarget();
  if (this != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x0) {
    pfVar1 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this);
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(param_1 + 0x10));
    playAttackAnimation(param_1,*pfVar2 <= *pfVar1);
  }
  return this != (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStickybombRice::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantStickybombRice::Fire
          (PlantStickybombRice *this,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  long lVar2;
  BoardEntity *pBVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    uVar5 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    findTargets(this,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,
                param_4);
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
    if ((cVar1 == '\0') &&
       (lVar2 = FUN_0427a170(*(undefined8 *)(this + 0x10)), 0 < *(int *)(lVar2 + 0x2c0))) {
      iVar6 = 0;
LAB_0427c49c:
      do {
        pBVar3 = (BoardEntity *)EntityFinder::PullFirstMatchingEntity((vector *)&local_20,-1,true);
        cVar1 = isValidTarget(this,pBVar3);
        if ((cVar1 == '\0') || (pBVar3 == (BoardEntity *)0x0)) {
          lVar4 = FUN_04277eb4(local_20,local_18);
          if (lVar4 != 0) goto LAB_0427c49c;
        }
        else {
          uVar5 = fireAtTarget(this,pBVar3,param_4);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar2 + 0x2c0));
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  else {
    uVar5 = 0;
    (**(code **)(*(long *)this + 0xa8))(this,0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

