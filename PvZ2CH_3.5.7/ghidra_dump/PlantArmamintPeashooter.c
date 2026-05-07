// Class: PlantArmamintPeashooter


/* PlantArmamintPeashooter::Initialize() */

void __thiscall PlantArmamintPeashooter::Initialize(PlantArmamintPeashooter *this)

{
  undefined4 uVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  uVar1 = GeneEnhancement::GetGeneEnhancementSkillBoost(0x21,1);
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* PlantArmamintPeashooter::PlantArmamintPeashooter() */

void __thiscall PlantArmamintPeashooter::PlantArmamintPeashooter(PlantArmamintPeashooter *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06827920;
  return;
}


/* PlantArmamintPeashooter::StaticNew() */

PlantArmamintPeashooter * PlantArmamintPeashooter::StaticNew(void)

{
  PlantArmamintPeashooter *this;
  
  this = ::operator_new(0x30);
  PlantArmamintPeashooter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantArmamintPeashooter::StaticClassInit() */

void PlantArmamintPeashooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantArmamintPeashooter");
    (*pcVar2)(plVar1,asStack_10,FUN_0429700c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantArmamintPeashooter::StaticGetClass() */

long * PlantArmamintPeashooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantArmamintPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantArmamintPeashooter::GetClass() const */

long * PlantArmamintPeashooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantArmamintPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantArmamintPeashooter::~PlantArmamintPeashooter() */

void __thiscall PlantArmamintPeashooter::~PlantArmamintPeashooter(PlantArmamintPeashooter *this)

{
  *(undefined ***)this = &PTR_GetClass_06827920;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantArmamintPeashooter::~PlantArmamintPeashooter() */

void __thiscall PlantArmamintPeashooter::~PlantArmamintPeashooter(PlantArmamintPeashooter *this)

{
  ~PlantArmamintPeashooter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantArmamintPeashooter::TriggerAdvancedAttack() */

void __thiscall PlantArmamintPeashooter::TriggerAdvancedAttack(PlantArmamintPeashooter *this)

{
  bool bVar1;
  int iVar2;
  long extraout_x0;
  float fVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (extraout_x0 == 0) {
    bVar1 = false;
  }
  else {
    fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    fVar4 = *(float *)(extraout_x0 + 0x2c8);
    iVar2 = FUN_04296094(*(undefined8 *)(this + 0x10));
    if (2 < iVar2) {
      fVar4 = *(float *)(extraout_x0 + 0x2cc) * fVar4 + fVar4;
    }
    bVar1 = fVar3 < fVar4;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantArmamintPeashooter::TriggerFireAttack() */

void __thiscall PlantArmamintPeashooter::TriggerFireAttack(PlantArmamintPeashooter *this)

{
  bool bVar1;
  long extraout_x0;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (extraout_x0 == 0) {
    bVar1 = false;
  }
  else {
    fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    bVar1 = fVar2 < *(float *)(extraout_x0 + 0x2d4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantArmamintPeashooter::PlayAttackAnimation() */

void __thiscall PlantArmamintPeashooter::PlayAttackAnimation(PlantArmamintPeashooter *this)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long extraout_x0;
  undefined8 uVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    uVar5 = *(undefined8 *)(this + 0x10);
    cVar1 = FUN_0429609c(uVar5);
    if (cVar1 == '\0') {
      iVar3 = FUN_04296094(uVar5);
      if (iVar3 < 2) {
        uVar2 = 0;
        goto LAB_04297580;
      }
    }
    else {
      Plant::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (extraout_x0 == 0) goto LAB_042975c4;
      fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      if (fVar6 < *(float *)(extraout_x0 + 0x2d0)) {
        uVar5 = *(undefined8 *)(this + 0x10);
        uVar2 = 2;
        goto LAB_04297580;
      }
    }
    uVar2 = TriggerAdvancedAttack(this);
    uVar5 = *(undefined8 *)(this + 0x10);
  }
  else {
LAB_042975c4:
    uVar5 = *(undefined8 *)(this + 0x10);
    uVar2 = 0;
  }
LAB_04297580:
  lVar4 = FUN_04297500(uVar5);
  FUN_042960bc(lVar4 + 0x3b8,uVar2);
  PlantFramework::PlayAttackAnimation((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantArmamintPeashooter::getTargetLocationForEntity(Sexy::RtWeakPtr<BoardEntity>) */

void PlantArmamintPeashooter::getTargetLocationForEntity
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               RtWeakPtr *param_5)

{
  bool bVar1;
  long lVar2;
  Zombie *pZVar3;
  RtObject *pRVar4;
  GridItem *pGVar5;
  undefined4 uVar6;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_042976a4(*(undefined8 *)(param_4 + 0x10));
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_5);
  if (bVar1) {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
    bVar1 = Sexy::RtObject::IsA<Zombie>(pRVar4);
    if (bVar1) {
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
      pZVar3 = Sexy::RtObject::Cast<Zombie>(pRVar4);
      uVar6 = (**(code **)(*(long *)pZVar3 + 0x3b0))(*(undefined4 *)(lVar2 + 0x2b8));
      local_18 = CONCAT44(param_2,uVar6);
      local_10 = param_3;
      goto LAB_04297784;
    }
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(param_5);
  if (bVar1) {
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
    bVar1 = Sexy::RtObject::IsA<GridItem>(pRVar4);
    if (bVar1) {
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_5);
      pGVar5 = Sexy::RtObject::Cast<GridItem>(pRVar4);
      uVar6 = (**(code **)(*(long *)pGVar5 + 0x238))(*(undefined4 *)(lVar2 + 0x2b8));
      local_18 = CONCAT44(param_2,uVar6);
      local_10 = param_3;
      goto LAB_04297784;
    }
  }
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,0.0,0.0,0.0);
  local_18 = local_28;
  local_10 = local_20;
LAB_04297784:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((undefined4)local_18,local_18._4_4_,local_10);
}


/* PlantArmamintPeashooter::launchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float)
    */

void __thiscall
PlantArmamintPeashooter::launchProjectileAt
          (PlantArmamintPeashooter *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_042976a4(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 700);
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * fVar5);
  fVar4 = *(float *)(lVar1 + 0x2b8);
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * fVar4);
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantArmamintPeashooter::launchProjectileAt(ArmamintProjectile*, Sexy::SexyVector3 const&, float,
   float) */

void __thiscall
PlantArmamintPeashooter::launchProjectileAt
          (PlantArmamintPeashooter *this,ArmamintProjectile *param_1,SexyVector3 *param_2,
          float param_3,float param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int local_c;
  
  lVar1 = ___stack_chk_guard;
  lVar2 = FUN_042976a4(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar2 + 700);
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * fVar5);
  fVar4 = *(float *)(lVar2 + 0x2b8);
  fVar3 = fVar3 + fVar5;
  fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * fVar4);
  fVar5 = fVar5 + fVar4;
  BoardEntity::CalcGridPosition();
  ArmamintProjectile::SetInitialLaunchValues(param_1,fVar3,fVar5,local_c);
  Projectile::LaunchAt((Projectile *)param_1,param_2,fVar3,fVar5);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantArmamintPeashooter::launchAtEntity(Sexy::RtWeakPtr<BoardEntity>, PlantWeapon, AttackType) */

void PlantArmamintPeashooter::launchAtEntity
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantArmamintPeashooter *param_4,RtWeakPtrBase *param_5,undefined4 param_6,
               int param_7)

{
  char cVar1;
  ArmamintProjectile *pAVar2;
  long lVar3;
  undefined8 uVar4;
  ArmamintProjectile *extraout_x0;
  float fVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,param_5);
  local_18 = getTargetLocationForEntity(param_4,aRStack_20);
  local_14 = param_2;
  local_10 = param_3;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  cVar1 = Sexy::SexyVector3::ApproxZero((SexyVector3 *)&local_18,0.001);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(long *)param_4 + 0x180))(param_4);
    if (cVar1 == '\0') {
      if (param_7 == 1) {
        *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 2;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_20);
        Plant::Fire(*(Plant **)(param_4 + 0x10),aRStack_20,
                    *(undefined4 *)(*(Plant **)(param_4 + 0x10) + 0x110),param_6);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        launchProjectileAt(param_4,extraout_x0,(SexyVector3 *)&local_18,0.1,0.1);
        pAVar2 = extraout_x0;
      }
      else if (param_7 == 2) {
        *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 3;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_20);
        pAVar2 = (ArmamintProjectile *)
                 Plant::Fire(*(Plant **)(param_4 + 0x10),aRStack_20,
                             *(undefined4 *)(*(Plant **)(param_4 + 0x10) + 0x110),param_6);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        launchProjectileAt(param_4,(Projectile *)pAVar2,(SexyVector3 *)&local_18,0.1,0.1);
        fVar5 = (float)FUN_04296080(*(undefined4 *)(pAVar2 + 0xd8));
        FUN_04296084(*(float *)(param_4 + 0x28) * fVar5 + fVar5,(Projectile *)(pAVar2 + 0xd8));
      }
      else {
        *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 0;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_20);
        pAVar2 = (ArmamintProjectile *)
                 Plant::Fire(*(Plant **)(param_4 + 0x10),aRStack_20,
                             *(undefined4 *)(*(Plant **)(param_4 + 0x10) + 0x110),param_6);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        launchProjectileAt(param_4,(Projectile *)pAVar2,(SexyVector3 *)&local_18,0.1,0.1);
      }
    }
    else {
      lVar3 = *(long *)(param_4 + 0x10);
      if (param_7 == 3) {
        *(undefined4 *)(lVar3 + 0x150) = 4;
      }
      else if (param_7 == 4) {
        *(undefined4 *)(lVar3 + 0x150) = 5;
      }
      else {
        *(undefined4 *)(lVar3 + 0x150) = 1;
      }
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_20);
      pAVar2 = (ArmamintProjectile *)
               Plant::Fire(*(Plant **)(param_4 + 0x10),aRStack_20,
                           *(undefined4 *)(*(Plant **)(param_4 + 0x10) + 0x110),param_6);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      uVar4 = FUN_04296074(*(undefined8 *)(pAVar2 + 0xe0));
      uVar4 = operator|(uVar4,0x2000);
      FUN_04296078((Projectile *)(pAVar2 + 0xe0),uVar4);
      launchProjectileAt(param_4,(Projectile *)pAVar2,(SexyVector3 *)&local_18,0.1,0.1);
      *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 0xffffffff;
    }
  }
  else {
    pAVar2 = (ArmamintProjectile *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pAVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantArmamintPeashooter::launchAtTargetsForNumShots(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > > const&, std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > > const&, int, PlantWeapon, AttackType) */

void __thiscall
PlantArmamintPeashooter::launchAtTargetsForNumShots
          (PlantArmamintPeashooter *this,
          vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *param_1
          ,vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
           *param_2,int param_3,undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  RtWeakPtrBase *pRVar5;
  ulong uVar6;
  undefined8 uVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          empty(param_1);
  if (cVar3 == '\0') {
    if (0 < param_3) {
      uVar6 = 0;
      do {
        uVar7 = *(undefined8 *)param_1;
        uVar4 = FUN_042960d0(uVar7,*(undefined8 *)(param_1 + 8));
        iVar1 = 0;
        if (uVar4 != 0) {
          iVar1 = (int)(uVar6 / uVar4);
        }
        iVar2 = (int)uVar6;
        uVar6 = uVar6 + 1;
        pRVar5 = (RtWeakPtrBase *)FUN_042960dc(uVar7,(long)(iVar2 - iVar1 * (int)uVar4));
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar5);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        uVar7 = launchAtEntity(this,aRStack_10,param_5,param_6);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
      } while (uVar6 != (ulong)(param_3 - 1) + 1);
      goto LAB_04297d14;
    }
  }
  else {
    cVar3 = std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
            empty(param_2);
    if ((cVar3 == '\0') && (0 < param_3)) {
      uVar6 = 0;
      do {
        uVar7 = *(undefined8 *)param_2;
        uVar4 = FUN_042960d0(uVar7,*(undefined8 *)(param_2 + 8));
        iVar1 = 0;
        if (uVar4 != 0) {
          iVar1 = (int)(uVar6 / uVar4);
        }
        iVar2 = (int)uVar6;
        uVar6 = uVar6 + 1;
        pRVar5 = (RtWeakPtrBase *)FUN_042960dc(uVar7,(long)(iVar2 - iVar1 * (int)uVar4));
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,pRVar5);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        uVar7 = launchAtEntity(this,aRStack_10,param_5,param_6);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
        ;
      } while (uVar6 != (ulong)(param_3 - 1) + 1);
      goto LAB_04297d14;
    }
  }
  uVar7 = 0;
LAB_04297d14:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantArmamintPeashooter::findAndInsertTargetForRow(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >&, std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >&, int, int, PlantWeapon) */

void __thiscall
PlantArmamintPeashooter::findAndInsertTargetForRow
          (PlantArmamintPeashooter *this,
          vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *param_1
          ,vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
           *param_2,ulong param_4_00,int param_4,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  UnchartedModePlantNumData aUStack_38 [8];
  RtMixedPtrBase aRStack_30 [8];
  RtMixedPtrBase aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined1 auStack_18 [4];
  int local_14;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((-1 < param_4) && (iVar2 = BoardConstants::NUMBER_OF_ROWS(), param_4 < iVar2)) {
    if ((param_4_00 >> 0x1f & 1) == 0) {
      iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
      if ((int)param_4_00 < iVar2) {
        UnchartedModePlantNumData::UnchartedModePlantNumData
                  (aUStack_38,1,(uint)(param_4_00 >> 0x1f) & 1);
        (**(code **)(*(long *)this + 0x2b0))(auStack_18,this,param_6);
        local_c = 1;
        local_14 = param_4;
        (**(code **)(*(long *)this + 0xd8))(aRStack_30,this,auStack_18,param_6,aUStack_38);
        cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_30);
        if (cVar1 == '\0') {
          (**(code **)(*(long *)this + 0x100))(aRStack_28,this,auStack_18,param_6);
          cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
          if (cVar1 == '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
            goto LAB_04298880;
          }
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back(param_2,(RtWeakPtr *)aRStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        }
        else {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_30);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back(param_1,(RtWeakPtr *)aRStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30)
        ;
      }
    }
  }
LAB_04298880:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantArmamintPeashooter::findTargetsSpreadAcrossRows(std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >&, std::vector<Sexy::RtWeakPtr<BoardEntity>,
   std::allocator<Sexy::RtWeakPtr<BoardEntity> > >&, int, int, int, PlantWeapon) */

void __thiscall
PlantArmamintPeashooter::findTargetsSpreadAcrossRows
          (PlantArmamintPeashooter *this,undefined8 param_1,undefined8 param_2,undefined4 param_3,
          int param_4,int param_5,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  findAndInsertTargetForRow();
  if (1 < param_5) {
    param_5 = param_4 - param_5;
    iVar2 = param_4 + -1;
    do {
      param_4 = param_4 + 1;
      iVar1 = iVar2 + -1;
      findAndInsertTargetForRow(this,param_1,param_2,param_3,iVar2,param_7);
      findAndInsertTargetForRow(this,param_1,param_2,param_3,param_4,param_7);
      iVar2 = iVar1;
    } while (iVar1 != param_5);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantArmamintPeashooter::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantArmamintPeashooter::Fire
          (PlantArmamintPeashooter *this,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  uVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  uVar4 = BoardConstants::NUMBER_OF_ROWS();
  findTargetsSpreadAcrossRows(this,avStack_38,avStack_20,uVar2,uVar3,uVar4,param_4);
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 == '\0') {
    lVar5 = FUN_042976a4(*(undefined8 *)(this + 0x10));
    uVar2 = *(undefined4 *)(lVar5 + 0x2c0);
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  }
  else {
    lVar5 = FUN_042976a4(*(undefined8 *)(this + 0x10));
    uVar2 = *(undefined4 *)(lVar5 + 0x2c4);
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  }
  if ((cVar1 == '\0') || (cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10)), cVar1 == '\0'))
  {
    lVar5 = FUN_04297500(*(undefined8 *)(this + 0x10));
    uVar3 = FUN_042960c4(*(undefined4 *)(lVar5 + 0x3b8));
  }
  else {
    cVar1 = TriggerFireAttack(this);
    uVar3 = 3;
    if (cVar1 == '\0') {
      uVar3 = 4;
    }
  }
  uVar6 = launchAtTargetsForNumShots(this,avStack_38,avStack_20,uVar2,param_4,uVar3);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

