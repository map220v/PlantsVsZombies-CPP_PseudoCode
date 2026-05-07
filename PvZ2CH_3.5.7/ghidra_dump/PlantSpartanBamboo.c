// Class: PlantSpartanBamboo


/* PlantSpartanBamboo::getState() */

undefined4 __thiscall PlantSpartanBamboo::getState(PlantSpartanBamboo *this)

{
  return *(undefined4 *)(*(long *)(this + 0x10) + 200);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::onWatered(bool) */

void __thiscall PlantSpartanBamboo::onWatered(PlantSpartanBamboo *this,bool param_1)

{
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_10,"Plant_spartanbamboo4");
    RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpartanBamboo::GetPlantFoodPlayCount() */

int __thiscall PlantSpartanBamboo::GetPlantFoodPlayCount(PlantSpartanBamboo *this)

{
  char cVar1;
  int iVar2;
  Plant *this_00;
  int iVar3;
  
  this_00 = *(Plant **)(this + 0x10);
  iVar2 = FUN_04e43950(this_00);
  if ((2 < iVar2) && ((iVar3 = 3, iVar2 < 5 || (iVar3 = 4, iVar2 == 5)))) {
    cVar1 = Plant::GetAvatarEnable(this_00);
    if (cVar1 != '\0') {
      iVar3 = iVar3 + 1;
    }
    return iVar3;
  }
  cVar1 = Plant::GetAvatarEnable(this_00);
  iVar2 = 2;
  if (cVar1 != '\0') {
    iVar2 = 3;
  }
  return iVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::StaticClassInit() */

void PlantSpartanBamboo::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSpartanBamboo");
    (*pcVar2)(plVar1,asStack_10,FUN_04e485bc,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpartanBamboo::StaticGetClass() */

long * PlantSpartanBamboo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSpartanBamboo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSpartanBamboo::GetClass() const */

long * PlantSpartanBamboo::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSpartanBamboo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSpartanBamboo::Cancelmatrixbuff() */

void __thiscall PlantSpartanBamboo::Cancelmatrixbuff(PlantSpartanBamboo *this)

{
  Plant *this_00;
  float fVar1;
  
  Plant::SetMaxHealth(*(Plant **)(this + 0x10),*(float *)(this + 0x68));
  this_00 = *(Plant **)(this + 0x10);
  fVar1 = (float)FUN_04e43924(*(undefined4 *)(this_00 + 0xd8));
  Plant::SetHealth(this_00,fVar1 - *(float *)(this + 0x68) * 0.3);
  return;
}


/* PlantSpartanBamboo::getWeapon() */

undefined1 __thiscall PlantSpartanBamboo::getWeapon(PlantSpartanBamboo *this)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x180))();
  return uVar1;
}


/* PlantSpartanBamboo::CanZombieLaunch(Zombie*) */

char __thiscall PlantSpartanBamboo::CanZombieLaunch(PlantSpartanBamboo *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = Zombie::GetSizeType(param_1);
  if (((iVar2 == 2) || (cVar1 = Zombie::IsBoss(param_1), cVar1 != '\0')) ||
     (cVar1 = Zombie::CanBeLaunchedByPlants(param_1), cVar1 == '\0')) {
    cVar1 = '\0';
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::canKnockbackZombie(Zombie*) */

void PlantSpartanBamboo::canKnockbackZombie(Zombie *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04e4392c(aRStack_10,*(undefined8 *)(param_1 + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}


/* PlantSpartanBamboo::~PlantSpartanBamboo() */

void __thiscall PlantSpartanBamboo::~PlantSpartanBamboo(PlantSpartanBamboo *this)

{
  *(undefined ***)this = &PTR_GetClass_069deba0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSpartanBamboo::~PlantSpartanBamboo() */

void __thiscall PlantSpartanBamboo::~PlantSpartanBamboo(PlantSpartanBamboo *this)

{
  ~PlantSpartanBamboo(this);
  AK::FreeHook(this);
  return;
}


/* PlantSpartanBamboo::HasShield() */

void __thiscall PlantSpartanBamboo::HasShield(PlantSpartanBamboo *this)

{
  Shield *this_00;
  
  this_00 = (Shield *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38))
  ;
  Shield::hasShield(this_00);
  return;
}


/* PlantSpartanBamboo::CanBeHealed() */

void PlantSpartanBamboo::CanBeHealed(void)

{
  Shield *this;
  long in_x0;
  
  this = (Shield *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x38));
  Shield::hasShield(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantSpartanBamboo::CanTargetZombie(long param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  RealObject *this;
  long *plVar4;
  Zombie *this_00;
  RtObject *this_01;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = RealObject::IsOnOpposingTeam(this,*(RealObject **)(param_1 + 0x10));
  if (cVar1 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = (**(code **)(*plVar4 + 0x328))();
    if (cVar1 == '\0') {
      this_00 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar1 = Zombie::IsIgnoringAllDamage(this_00);
      if (cVar1 == '\0') {
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        pcVar5 = *(code **)(*plVar4 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        cVar1 = (*pcVar5)(plVar4,aRStack_10,0);
        bVar3 = 0;
        if (cVar1 != '\0') {
          this_01 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          bVar2 = Sexy::RtObject::IsA<ZombiePirateParrot>(this_01);
          if (!bVar2) {
            plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            bVar3 = (**(code **)(*plVar4 + 0x338))();
            bVar3 = bVar3 ^ 1;
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        goto LAB_04e457ac;
      }
    }
  }
  bVar3 = 0;
LAB_04e457ac:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* PlantSpartanBamboo::PlantSpartanBamboo() */

void __thiscall PlantSpartanBamboo::PlantSpartanBamboo(PlantSpartanBamboo *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069deba0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x2c) = uVar1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x30) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  this[0x40] = (PlantSpartanBamboo)0x0;
  this[0x41] = (PlantSpartanBamboo)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  this[0x54] = (PlantSpartanBamboo)0x0;
  *(undefined4 *)(this + 0x58) = 0;
  this[0x5d] = (PlantSpartanBamboo)0x0;
  this[0x5c] = (PlantSpartanBamboo)0x1;
  return;
}


/* PlantSpartanBamboo::StaticNew() */

PlantSpartanBamboo * PlantSpartanBamboo::StaticNew(void)

{
  PlantSpartanBamboo *this;
  
  this = ::operator_new(0x70);
  PlantSpartanBamboo(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::SetBattLearrayState(bool) */

void __thiscall PlantSpartanBamboo::SetBattLearrayState(PlantSpartanBamboo *this,bool param_1)

{
  PopAnimRig *pPVar1;
  string asStack_10 [8];
  long local_8;
  
  this[0x5d] = (PlantSpartanBamboo)param_1;
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_10,"hair");
  PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string(asStack_10,"hair2");
  PopAnimRig::SetLayerVisibility(pPVar1,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::createEffect(std::string, Sexy::SexyVector3) */

void PlantSpartanBamboo::createEffect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
               string *param_5)

{
  char cVar1;
  Effect_PopAnim *this;
  PopAnim *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = aRStack_10;
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  std::string::string(asStack_18,"animation");
  nop();
  cVar1 = (**(code **)(*param_4 + 0x180))(param_4);
  if (cVar1 != '\0') {
    std::string::append(asStack_18,"animation_plantfood",(size_t)__n);
  }
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(param_5);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  Effect_PopAnim::CreatePopAnimRig(this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Effect_PopAnim::PlaySingleAnimation(this,asStack_18,0);
  FUN_04e43900(this + 0x1c,500000);
  (**(code **)(*(long *)this + 0x80))(0x3f800000,this);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)&local_30,-1);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::ApplyMatrix(std::vector<Sexy::RtWeakPtr<Plant>,
   std::allocator<Sexy::RtWeakPtr<Plant> > >, int) */

void __thiscall
PlantSpartanBamboo::ApplyMatrix(PlantSpartanBamboo *this,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  RtWeakPtrBase *pRVar6;
  PlantSpartanBamboo *this_00;
  Plant *pPVar7;
  undefined8 uVar8;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar8 = *param_2;
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_04e43a00(uVar8,param_2[1]);
  if (lVar5 == 4) {
    cVar2 = '\0';
    local_18 = FUN_04e46590(uVar8);
    local_10 = FUN_04e465e0(param_2[1]);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar3)
    {
      pRVar6 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,pRVar6);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        nop();
        if (this_00 == (PlantSpartanBamboo *)0x0) {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
          goto LAB_04e46684;
        }
        pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        Plant::SetMaxHealth(pPVar7,*(float *)(this + 0x68) * 1.3);
        pPVar7 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        fVar9 = (float)FUN_04e43924(*(undefined4 *)(lVar5 + 0xd8));
        Plant::SetHealth(pPVar7,fVar9 + *(float *)(this + 0x68) * 0.3);
        SetBattLearrayState(this_00,true);
        FUN_04e439d8(this_00 + 0x60,param_3);
        if (cVar2 == '\0') {
          cVar2 = FUN_04e439e0(this_00[0x41]);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
    if (cVar2 != '\0') {
      iVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
      SpartanBambooMatrixSystem::SetPlantBerserkerCondition(iVar4,*(int *)(this + 0x60));
    }
  }
LAB_04e46684:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpartanBamboo::canKill(Zombie const*) */

void __thiscall PlantSpartanBamboo::canKill(PlantSpartanBamboo *this,Zombie *param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = FUN_04e46bcc(*(undefined8 *)(this + 0x10));
  cVar1 = ClassRestrictionSet::IsIncluded
                    ((ClassRestrictionSet *)(lVar2 + 0x318),(GameObject *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  Zombie::CanTakeFatalDamage(param_1);
  return;
}


/* PlantSpartanBamboo::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantSpartanBamboo::LaunchProjectileAt
          (PlantSpartanBamboo *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_04e46bcc(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 0x354);
  lVar1 = FUN_04e46bcc(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar1 + 0x354));
  lVar1 = FUN_04e46bcc(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar1 + 0x358);
  lVar1 = FUN_04e46bcc(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar1 + 0x358));
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* PlantSpartanBamboo::isSpecialTarget(BoardEntity*) */

char __thiscall PlantSpartanBamboo::isSpecialTarget(PlantSpartanBamboo *this,BoardEntity *param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  Zombie *pZVar6;
  
  lVar5 = FUN_04e46bcc(*(undefined8 *)(this + 0x10));
  cVar2 = ClassRestrictionSet::IsIncluded
                    ((ClassRestrictionSet *)(lVar5 + 0x2c8),(GameObject *)param_1);
  if (((cVar2 == '\0') && (param_1 != (BoardEntity *)0x0)) &&
     (bVar3 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar3)) {
    pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    cVar4 = Zombie::HasCondition(pZVar6,0x27);
    cVar1 = '\x01';
    cVar2 = cVar1;
    if (((cVar4 == '\0') && (cVar4 = Zombie::HasCondition(pZVar6,0x2c), cVar4 == '\0')) &&
       (cVar4 = Zombie::HasCondition(pZVar6,0x25), cVar2 = '\0', cVar4 != '\0')) {
      cVar2 = cVar1;
    }
  }
  return cVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::getDamageInfo(PlantWeapon) */

void PlantSpartanBamboo::getDamageInfo(undefined8 *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_04e43a38(*(undefined8 *)(lVar2 + 0x70),param_3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_2 + 0x10));
  cVar1 = *(char *)(param_2 + 0x40);
  *param_1 = *(undefined8 *)(param_2 + 0x10);
  param_1[2] = 0x4000000000;
  if (cVar1 != '\0') {
    lVar2 = FUN_04e46bcc(*(undefined8 *)(param_2 + 0x10));
    *(float *)(param_1 + 1) = *(float *)(lVar2 + 0x2c0) * *(float *)(param_1 + 1) * 0.01;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::MatrixAttack() */

void __thiscall PlantSpartanBamboo::MatrixAttack(PlantSpartanBamboo *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  lVar3 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar3 + 200) = 0xe;
  local_8 = ___stack_chk_guard;
  uVar2 = FUN_04e46f14(lVar3);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRemoteLoopAnimComplete);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<PlantSpartanBamboo,void(PlantSpartanBamboo::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  uVar1 = HasShield(this);
  PlantAnimRig_SpartanBamboo::PlayremoteAnimation(uVar2,aDStack_38,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::onRemoteLoopAnimComplete(std::string const&) */

void __thiscall
PlantSpartanBamboo::onRemoteLoopAnimComplete(PlantSpartanBamboo *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  PlantAnimRig_SpartanBamboo *pPVar3;
  code *pcVar4;
  char *pcVar5;
  Delegate1<std::string_const&> *local_68;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  *(int *)(this + 0x58) = *(int *)(this + 0x58) + -1;
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"attack_remote");
  if (bVar1) {
    pPVar3 = (PlantAnimRig_SpartanBamboo *)FUN_04e46f14(*(undefined8 *)(this + 0x10));
    pcVar5 = "08";
LAB_04e4711c:
    std::string::string(asStack_58,pcVar5);
    pcVar4 = onRemoteLoopAnimComplete;
LAB_04e47138:
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,pcVar4);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantSpartanBamboo,void(PlantSpartanBamboo::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
  }
  else {
    pcVar5 = "08";
    bVar1 = std::operator==(param_1,"08");
    if (bVar1) {
      uVar2 = *(undefined8 *)(this + 0x10);
      if (0 < *(int *)(this + 0x58)) goto LAB_04e47058;
      pPVar3 = (PlantAnimRig_SpartanBamboo *)FUN_04e46f14(uVar2);
      pcVar5 = "09";
LAB_04e471e0:
      std::string::string(asStack_58,pcVar5);
      pcVar4 = onRemoteAnimComplete;
      goto LAB_04e47138;
    }
    bVar1 = std::operator==(param_1,"battle_attack_remote");
    if (bVar1) {
      pPVar3 = (PlantAnimRig_SpartanBamboo *)FUN_04e46f14(*(undefined8 *)(this + 0x10));
      pcVar5 = "06";
      goto LAB_04e4711c;
    }
    pcVar5 = "06";
    bVar1 = std::operator==(param_1,"06");
    if (bVar1) {
      uVar2 = *(undefined8 *)(this + 0x10);
      if (*(int *)(this + 0x58) < 1) {
        pPVar3 = (PlantAnimRig_SpartanBamboo *)FUN_04e46f14(uVar2);
        pcVar5 = "07";
        goto LAB_04e471e0;
      }
LAB_04e47058:
      pPVar3 = (PlantAnimRig_SpartanBamboo *)FUN_04e46f14(uVar2);
    }
    else {
      bVar1 = std::operator==(param_1,"attack_remote_rage");
      if (bVar1) {
        pPVar3 = (PlantAnimRig_SpartanBamboo *)FUN_04e46f14(*(undefined8 *)(this + 0x10));
        pcVar5 = "02";
        goto LAB_04e4711c;
      }
      pcVar5 = "02";
      bVar1 = std::operator==(param_1,"02");
      if (bVar1) {
        uVar2 = *(undefined8 *)(this + 0x10);
        if (*(int *)(this + 0x58) < 1) {
          pPVar3 = (PlantAnimRig_SpartanBamboo *)FUN_04e46f14(uVar2);
          pcVar5 = "03";
          goto LAB_04e471e0;
        }
        goto LAB_04e47058;
      }
      bVar1 = std::operator==(param_1,"battle_attack_remote_rage");
      if (bVar1) {
        pPVar3 = (PlantAnimRig_SpartanBamboo *)FUN_04e46f14(*(undefined8 *)(this + 0x10));
        pcVar5 = "04";
        goto LAB_04e4711c;
      }
      pcVar5 = "04";
      bVar1 = std::operator==(param_1,"04");
      if (!bVar1) goto LAB_04e470c8;
      if (*(int *)(this + 0x58) < 1) {
        pPVar3 = (PlantAnimRig_SpartanBamboo *)FUN_04e46f14(*(undefined8 *)(this + 0x10));
        pcVar5 = "05";
        goto LAB_04e471e0;
      }
      pPVar3 = (PlantAnimRig_SpartanBamboo *)FUN_04e46f14(*(undefined8 *)(this + 0x10));
    }
    std::string::string(asStack_58,pcVar5);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onRemoteLoopAnimComplete);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantSpartanBamboo,void(PlantSpartanBamboo::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
  }
  local_68 = aDStack_38;
  PlantAnimRig_SpartanBamboo::PlayremoteLoopAnimation(pPVar3,asStack_58,local_68);
  std::string::~string(asStack_58);
  nop();
LAB_04e470c8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::onJabAnimComplete(std::string const&) */

void PlantSpartanBamboo::onJabAnimComplete(string *param_1)

{
  PlantAnimRig_SpartanBamboo *pPVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x54] != (string)0x0) {
    pPVar1 = (PlantAnimRig_SpartanBamboo *)FUN_04e46f14(*(undefined8 *)(param_1 + 0x10));
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,onAnimComplete);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantSpartanBamboo,void(PlantSpartanBamboo::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PlantAnimRig_SpartanBamboo::PlayEndBerserkerAnimation(pPVar1,aDStack_38);
    param_1[0x54] = (string)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::CanPlantType(Sexy::Point, int, int) */

void PlantSpartanBamboo::CanPlantType
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               undefined8 param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long extraout_x0;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  iVar1 = *param_3;
  local_8 = ___stack_chk_guard;
  iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
  if ((((iVar4 < param_4 + iVar1) || (param_4 + *param_3 < 0)) ||
      (iVar1 = param_3[1], iVar4 = BoardConstants::NUMBER_OF_ROWS(), iVar4 < param_5 + iVar1)) ||
     (param_5 + param_3[1] < 0)) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (param_1);
  }
  else {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    EntityFinder::GetEntitiesAtGridSquare(avStack_20,1,param_4 + *param_3,param_5 + param_3[1]);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar3)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      nop();
      Plant::GetType();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      bVar3 = std::operator==((string *)(lVar5 + 8),"spartanbamboo");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      if (bVar3) {
        nop();
        cVar2 = FUN_04e439f4(*(undefined1 *)(extraout_x0 + 0x6c));
        if (((cVar2 == '\0') && (*(char *)(extraout_x0 + 0x5d) == '\0')) &&
           (*(int *)(extraout_x0 + 0x60) == -1)) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)aRStack_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
          goto LAB_04e47c80;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (param_1);
LAB_04e47c80:
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::findTargets(Sexy::TRect<int>, bool) */

void __thiscall
PlantSpartanBamboo::findTargets(PlantSpartanBamboo *this,undefined8 param_2,char param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  GridItem *pGVar8;
  Zombie *this_00;
  code *pcVar9;
  RtObject *this_01;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar4 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar4,
             param_2);
  lVar6 = FUN_04e43a20(local_20,local_18);
  cVar1 = '\0';
  if (lVar6 != 0) {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (cVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
          (bool)cVar1) {
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      this_01 = (RtObject *)*puVar7;
      pGVar8 = Sexy::RtObject::Cast<GridItem>(this_01);
      this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
      if ((pGVar8 != (GridItem *)0x0) &&
         (cVar2 = (**(code **)(*(long *)pGVar8 + 0x200))(pGVar8), cVar2 != '\0')) break;
      if (this_00 != (Zombie *)0x0) {
        pcVar9 = *(code **)(*(long *)this + 0x3e0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_30);
        uVar4 = getWeapon(this);
        cVar2 = (*pcVar9)(this,aRStack_28,uVar4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        if (cVar2 != '\0') {
          if (((param_3 != '\0') &&
              (bVar3 = Sexy::RtObject::IsA<ZombieImp>((RtObject *)this_00), cVar1 = cVar2, bVar3))
             && (iVar5 = Zombie::getZombieStateSerialization(this_00), iVar5 == 0x1f)) {
            cVar1 = '\0';
          }
          break;
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::targetInAttackArea() */

void __thiscall PlantSpartanBamboo::targetInAttackArea(PlantSpartanBamboo *this)

{
  int iVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_28);
  iVar1 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  Sexy::Insets::Insets((Insets *)&local_18,iVar1,iVar2,3,1);
  local_28 = local_18;
  uStack_20 = uStack_10;
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
  findTargets(this,(Insets *)&local_18,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::RemoteAttackTarget() */

void __thiscall PlantSpartanBamboo::RemoteAttackTarget(PlantSpartanBamboo *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)&local_28);
  iVar1 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  Sexy::Insets::Insets((Insets *)&local_18,iVar1 + 2,iVar2,(iVar3 - iVar4) + -2,1);
  local_28 = local_18;
  uStack_20 = uStack_10;
  Sexy::Insets::Insets((Insets *)&local_18,(Insets *)&local_28);
  findTargets(this,(Insets *)&local_18,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::ConfirmZombieTarget() */

void PlantSpartanBamboo::ConfirmZombieTarget(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long in_x0;
  undefined8 *puVar8;
  Zombie *this;
  undefined8 uVar9;
  Insets *pIVar10;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  int iVar11;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  int local_30 [4];
  undefined8 local_20;
  undefined8 uStack_18;
  long local_8;
  
  iVar11 = 0;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  Sexy::Insets::Insets((Insets *)&local_40);
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(in_x0 + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(in_x0 + 0x10));
  iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar6 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(in_x0 + 0x10));
  Sexy::Insets::Insets((Insets *)&local_20,iVar3 + 2,iVar4,(iVar5 - iVar6) + 2,1);
  local_40 = local_20;
  uStack_38 = uStack_18;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar7 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares((Insets *)&local_20,uVar7,(Insets *)&local_40);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&local_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1) {
    puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
    uVar9 = operator|(1,4);
    uVar9 = operator|(uVar9,0x80);
    uVar9 = operator|(uVar9,0x200);
    uVar9 = operator|(uVar9,0x800);
    uVar7 = operator|(uVar9,0x2000);
    if (((((this != (Zombie *)0x0) && (cVar2 = RealObject::IsOnTeam(this,1), cVar2 == '\0')) &&
         (cVar2 = FUN_04e454fc(*(undefined4 *)(this + 0xcc)), cVar2 == '\0')) &&
        ((iVar3 = Zombie::GetInvisibleState(this), iVar3 != 2 &&
         (cVar2 = (**(code **)(*(long *)this + 0x328))(this), cVar2 == '\0')))) &&
       (cVar2 = Zombie::MatchesAny(this,uVar7,*(undefined8 *)(in_x0 + 0x10)), cVar2 == '\0')) {
      pIVar10 = (Insets *)(**(code **)(*(long *)this + 0x178))(this);
      Sexy::Insets::Insets((Insets *)local_30,pIVar10);
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)in_x8);
      if ((cVar2 == '\0') || (local_30[0] < iVar11)) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)in_x8,(RtWeakPtrBase *)aRStack_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        iVar11 = local_30[0];
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::plantfoodDamage() */

void __thiscall PlantSpartanBamboo::plantfoodDamage(PlantSpartanBamboo *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  Zombie *this_00;
  ZombieTosserSubSystem *pZVar8;
  long lVar9;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 local_100;
  undefined8 local_f8;
  string asStack_f0 [8];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  undefined8 local_68;
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets((Insets *)local_d8);
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  Sexy::Insets::Insets((Insets *)&local_68,iVar3 + 1,iVar4 + -2,2,5);
  local_d8[0] = local_68;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
  uVar5 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares(avStack_c8,uVar5,(Insets *)local_d8);
  getDamageInfo((Insets *)&local_68,this,1);
  local_100 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_c8);
  local_f8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_c8);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_100,(__normal_iterator *)&local_f8), bVar1)
  {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100);
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)*puVar6;
    std::string::string(asStack_f0,"POPANIM_EFFECTS_SPARTANBAMBOO_EFFECT");
    pfVar7 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_01);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_e8,*pfVar7 - 80.0,pfVar7[1] - 120.0,0.0);
    createEffect(local_e8 & 0xffffffff,local_e8._4_4_,local_e0,this,asStack_f0);
    std::string::~string(asStack_f0);
    nop();
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_01);
    if ((this_00 == (Zombie *)0x0) || (cVar2 = canKill(this,this_00), cVar2 == '\0')) {
      cVar2 = isSpecialTarget(this,(BoardEntity *)this_01);
      if (cVar2 != '\0') {
        lVar9 = FUN_04e46bcc(*(undefined8 *)(this + 0x10));
        local_60 = *(float *)(lVar9 + 700) * local_60 * 0.01;
      }
      if (this[0x5d] != (PlantSpartanBamboo)0x0) {
        local_60 = local_60 * 1.1;
      }
      (**(code **)(*(long *)this_01 + 0x110))(this_01,(Insets *)&local_68);
      iVar3 = getState(this);
      if (((iVar3 == 0x13) && (this_00 != (Zombie *)0x0)) &&
         (cVar2 = CanZombieLaunch(this,this_00), cVar2 != '\0')) {
        puVar6 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this_00);
        local_e8._0_4_ = (float)*puVar6;
        local_e0 = *(undefined4 *)(puVar6 + 1);
        local_e8._4_4_ = (undefined4)((ulong)*puVar6 >> 0x20);
        local_e8 = CONCAT44(local_e8._4_4_,(float)local_e8 + 80.0);
        pZVar8 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
        ZombieTosserSubSystem::LaunchZombie
                  ((ZombieTosserSubSystem *)0x42a00000,0x3f800000,pZVar8,this_00,(Vec3 *)&local_e8,
                   aRStack_b0,1);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_b0);
      }
    }
    else {
      Zombie::TakeFatalDamage(this_00,*(BoardEntity **)(this + 0x10));
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_100);
  }
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::CanMatrixCondition() */

void __thiscall PlantSpartanBamboo::CanMatrixCondition(PlantSpartanBamboo *this)

{
  char cVar1;
  undefined4 uVar2;
  BoardTransforms *this_00;
  long lVar3;
  undefined8 uVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int local_c0;
  int local_bc;
  RtMixedPtrBase aRStack_b8 [8];
  RtMixedPtrBase aRStack_b0 [8];
  DVec3 aDStack_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  RtMixedPtrBase aRStack_80 [24];
  Point aPStack_68 [8];
  float local_60;
  long local_8;
  RtMixedPtrBase *this_02;
  
  local_8 = ___stack_chk_guard;
  iVar8 = 1;
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
  iVar6 = 1;
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
  DVec3::DVec3(aDStack_a8);
  do {
    Sexy::Point::Point(aPStack_68,(TPoint *)&local_c0);
    CanPlantType(aRStack_b8,this,aPStack_68,iVar8,0);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_b8);
    if (cVar1 != '\0') {
      iVar6 = 1;
      do {
        Sexy::Point::Point(aPStack_68,(TPoint *)&local_c0);
        CanPlantType(aRStack_b0,this,aPStack_68,0,iVar6);
        cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_b0);
        if (cVar1 != '\0') {
          Sexy::Point::Point(aPStack_68,(TPoint *)&local_c0);
          CanPlantType(aRStack_80,this,aPStack_68,iVar8,iVar6);
          cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_80);
          if (cVar1 != '\0') {
            std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                      ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                       &local_98,(RtWeakPtr *)aRStack_80);
            std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                      ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                       &local_98,(RtWeakPtr *)aRStack_b0);
            std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                      ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                       &local_98,(RtWeakPtr *)aRStack_b8);
            if (((iVar6 < 0) && (this_02 = aRStack_80, 0 < iVar8)) ||
               ((0 < iVar6 && (this_02 = aRStack_b8, 0 < iVar8)))) {
LAB_04e4a93c:
              this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
              pSVar5 = (SexyVector3 *)
                       std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost(this_01);
              Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_a8,pSVar5);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
            }
            else if ((iVar6 < 1) || (-1 < iVar8)) {
              if ((iVar6 < 0) && (this_02 = aRStack_b0, iVar8 < 0)) goto LAB_04e4a93c;
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
            }
            else {
              pSVar5 = (SexyVector3 *)
                       std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       **)(this + 0x10));
              Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_a8,pSVar5);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0);
            }
            lVar3 = FUN_04e43a00(local_98,local_90);
            goto joined_r0x04e4a828;
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
        }
        iVar6 = iVar6 + -2;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b0)
        ;
      } while (iVar6 != -3);
    }
    lVar3 = FUN_04e43a00(local_98,local_90);
joined_r0x04e4a828:
    if (lVar3 == 3) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
      lVar3 = FUN_04e43a00(local_98,local_90);
      goto joined_r0x04e4a844;
    }
    iVar8 = iVar8 + -2;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_b8);
    if (iVar8 == -3) {
      lVar3 = FUN_04e43a00(local_98,local_90);
joined_r0x04e4a844:
      uVar7 = 0;
      if (lVar3 == 3) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aPStack_68,(RtWeakPtrBase *)aRStack_80);
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                   &local_98,(RtWeakPtr *)aPStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_68)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80)
        ;
        if (iVar8 == 1) {
          local_c0 = local_c0 + 1;
        }
        if (iVar6 < 0) {
          local_bc = iVar6 + local_bc;
        }
        uVar7 = 1;
        Sexy::Point::Point((Point *)aRStack_b0,local_c0,local_bc);
        getDamageInfo(aPStack_68,this,0);
        uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                   aRStack_80,(vector *)&local_98);
        uVar2 = SpartanBambooMatrixSystem::AddMatrix
                          ((SpartanBambooMatrixSystem *)(local_60 * 1.1),uVar4,
                           (RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80,(Point *)aRStack_b0,
                           aDStack_a8);
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                   aRStack_80);
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::vector
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                   aRStack_80,(vector *)&local_98);
        ApplyMatrix(this,(RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80,uVar2);
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                   aRStack_80);
        DamageInfo::~DamageInfo((DamageInfo *)aPStack_68);
      }
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)&local_98)
      ;
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar7);
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::getJabTargets() */

void PlantSpartanBamboo::getJabTargets(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  PlantSpartanBamboo *in_x0;
  long lVar6;
  undefined8 *puVar7;
  GridItem *pGVar8;
  Zombie *pZVar9;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  code *pcVar10;
  RtObject *local_60;
  undefined8 local_58;
  undefined8 local_50;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  iVar3 = getWeapon(in_x0);
  Sexy::Insets::Insets((Insets *)&local_40);
  if (iVar3 == 1) {
    iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(in_x0 + 0x10));
    iVar4 = SharkMinion::getRow(*(SharkMinion **)(in_x0 + 0x10));
    Sexy::Insets::Insets((Insets *)&local_30,iVar3 + 1,iVar4 + -1,2,3);
    local_40 = local_30;
    uStack_38 = uStack_28;
  }
  else {
    iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(in_x0 + 0x10));
    iVar4 = SharkMinion::getRow(*(SharkMinion **)(in_x0 + 0x10));
    Sexy::Insets::Insets((Insets *)&local_30,iVar3,iVar4,3,1);
    local_40 = local_30;
    uStack_38 = uStack_28;
  }
  uVar5 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar5,
             (Insets *)&local_40);
  lVar6 = FUN_04e43a20(local_20,local_18);
  if (lVar6 != 0) {
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar1)
    {
      puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
      ;
      local_60 = (RtObject *)*puVar7;
      pGVar8 = Sexy::RtObject::Cast<GridItem>(local_60);
      pZVar9 = Sexy::RtObject::Cast<Zombie>(local_60);
      if ((pGVar8 != (GridItem *)0x0) &&
         (cVar2 = (**(code **)(*(long *)pGVar8 + 0x200))(pGVar8), cVar2 != '\0')) {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,
                   (BoardEntity **)&local_60);
      }
      if (pZVar9 != (Zombie *)0x0) {
        pcVar10 = *(code **)(*(long *)in_x0 + 0x3e0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_48);
        cVar2 = (*pcVar10)();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
        if (cVar2 != '\0') {
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)in_x8,
                     (BoardEntity **)&local_60);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::dealDamage() */

void __thiscall PlantSpartanBamboo::dealDamage(PlantSpartanBamboo *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  float *pfVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  ZombieTosserSubSystem *pZVar7;
  long lVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 local_140;
  undefined8 local_138;
  string asStack_130 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_128 [24];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_110 [72];
  DamageInfo aDStack_c8 [8];
  float local_c0;
  undefined8 local_68;
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_c8);
  uVar3 = getWeapon(this);
  getJabTargets();
  getDamageInfo((DamageInfo *)&local_68,this,uVar3);
  DamageInfo::operator=(aDStack_c8,(DamageInfo *)&local_68);
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  local_140 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(avStack_128);
  local_138 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(avStack_128);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_140,(__normal_iterator *)&local_138);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_128);
      DamageInfo::~DamageInfo(aDStack_c8);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_140);
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)*puVar5;
    std::string::string(asStack_130,"POPANIM_EFFECTS_SPARTANBAMBOO_EFFECT");
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(this_01);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_68,*pfVar6 - 80.0,pfVar6[1] - 120.0,0.0);
    createEffect(local_68 & 0xffffffff,local_68._4_4_,local_60,this,asStack_130);
    std::string::~string(asStack_130);
    nop();
    if ((this_01 ==
         (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)0x0) ||
       (this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtObject::Cast<Zombie>((RtObject *)this_01),
       this_00 ==
       (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        *)0x0)) {
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0;
      cVar2 = isSpecialTarget(this,(BoardEntity *)this_01);
joined_r0x04e4af98:
      if (cVar2 != '\0') {
        lVar8 = FUN_04e46bcc(*(undefined8 *)(this + 0x10));
        local_c0 = *(float *)(lVar8 + 700) * local_c0 * 0.01;
      }
      if (this[0x5d] != (PlantSpartanBamboo)0x0) {
        local_c0 = local_c0 * 1.1;
      }
      (**(code **)(*(long *)this_01 + 0x110))(this_01,aDStack_c8);
      iVar4 = getState(this);
      if (((iVar4 == 0x13) &&
          (this_00 !=
           (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            *)0x0)) && (cVar2 = CanZombieLaunch(this,(Zombie *)this_00), cVar2 != '\0')) {
        puVar5 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_00);
        local_68._0_4_ = (float)*puVar5;
        local_60 = *(undefined4 *)(puVar5 + 1);
        local_68._4_4_ = (undefined4)((ulong)*puVar5 >> 0x20);
        local_68 = CONCAT44(local_68._4_4_,(float)local_68 + 80.0);
        pZVar7 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_110);
        ZombieTosserSubSystem::LaunchZombie
                  ((ZombieTosserSubSystem *)0x42a00000,0x3f800000,pZVar7,this_00,
                   (DamageInfo *)&local_68,aRStack_110,1);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_110);
      }
    }
    else {
      cVar2 = canKill(this,(Zombie *)this_00);
      if (cVar2 == '\0') {
        cVar2 = isSpecialTarget(this,(BoardEntity *)this_01);
        goto joined_r0x04e4af98;
      }
      Zombie::TakeFatalDamage((Zombie *)this_00,*(BoardEntity **)(this + 0x10));
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_140);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::OnAnimCommand(std::string const&, std::string const&) */

void PlantSpartanBamboo::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  RtObject *this;
  SpearProjectile *pSVar7;
  ResourceInfo *pRVar8;
  float *pfVar9;
  long *plVar10;
  BoardEntity *this_00;
  SharkMinion *this_01;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_28 [4];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action2");
  if (bVar1) {
    getState((PlantSpartanBamboo *)param_1);
    dealDamage((PlantSpartanBamboo *)param_1);
    bVar1 = true;
  }
  else {
    bVar1 = std::operator==(param_2,"use_action");
    if (bVar1) {
      this_00 = *(BoardEntity **)(param_1 + 0x10);
      *(undefined4 *)(this_00 + 0x150) = 2;
      iVar3 = BoardEntity::CalcColumnPosition(this_00);
      iVar4 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
      iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
      Sexy::Insets::Insets(aIStack_18,iVar3 + 2,iVar4,iVar5,1);
      ConfirmZombieTarget();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_28,(RtWeakPtrBase *)aRStack_48);
      this_01 = *(SharkMinion **)(param_1 + 0x10);
      uVar6 = SharkMinion::getRow(this_01);
      this = (RtObject *)
             Plant::Fire((Plant *)this_01,(RtWeakPtr<Sexy::SoundResource> *)local_28,uVar6,0);
      pSVar7 = Sexy::RtObject::Cast<SpearProjectile>(this);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      DVec3::DVec3((DVec3 *)&local_38);
      (**(code **)(*(long *)param_1 + 0xf8))((RtWeakPtr<Sexy::SoundResource> *)local_28,param_1,0);
      pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      if (param_1[0x5c] == (string)0x0) {
        pfVar9 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(param_1 + 0x10));
        local_34 = pfVar9[1];
        local_38 = *pfVar9 + 600.0;
        local_30 = 0x44160000;
      }
      else {
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_48);
        if (cVar2 == '\0') {
          if (pRVar8 == (ResourceInfo *)0x0) {
            pfVar9 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                              **)(param_1 + 0x10));
            local_34 = pfVar9[1];
            local_38 = *pfVar9 + 600.0;
            local_30 = 0;
          }
          else {
            GridItem::GetGridLocation();
            BoardTransforms::GridToBoardSpace((Point *)local_28);
            local_38 = (float)local_40;
            local_30 = 0x41c80000;
            local_34 = (float)local_3c;
          }
        }
        else {
          plVar10 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
          local_28[0] = (**(code **)(*plVar10 + 0x3b0))(0x3f99999a);
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_38,(SexyVector3 *)local_28);
        }
      }
      if (param_1[0x5d] != (string)0x0) {
        fVar11 = (float)FUN_04e43910(*(undefined4 *)(pSVar7 + 0xd8));
        FUN_04e43914(fVar11 * 1.1,pSVar7 + 0xd8);
      }
      if (local_38 <= 0.0) {
        pfVar9 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(param_1 + 0x10));
        local_34 = pfVar9[1];
        local_38 = *pfVar9 + 600.0;
        local_30 = 0;
      }
      LaunchProjectileAt((PlantSpartanBamboo *)param_1,(Projectile *)pSVar7,(SexyVector3 *)&local_38
                         ,0.1,0.1);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_28,(RtWeakPtrBase *)&local_40);
      SpearProjectile::SetPlant(pSVar7,(RtWeakPtr<Sexy::SoundResource> *)local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_28);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0xffffffff;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    }
    else {
      bVar1 = std::operator==(param_2,"use_action3");
      if (bVar1) {
        dealDamage((PlantSpartanBamboo *)param_1);
        bVar1 = true;
      }
      else {
        bVar1 = std::operator==(param_2,"use_action4");
        if (bVar1) {
          plantfoodDamage((PlantSpartanBamboo *)param_1);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::onDestroy() */

void __thiscall PlantSpartanBamboo::onDestroy(PlantSpartanBamboo *this)

{
  int iVar1;
  char cVar2;
  SpartanBambooMatrixSystem *this_00;
  RealObject *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x5d] != (PlantSpartanBamboo)0x0) {
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x48));
    if (cVar2 != '\0') {
      this_00 = (SpartanBambooMatrixSystem *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
      iVar1 = *(int *)(this + 0x60);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
      SpartanBambooMatrixSystem::RemoveMatrix(this_00,iVar1,(RtWeakPtr *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  FUN_04e439d8(this + 0x60,0xffffffff);
  SetBattLearrayState(this,false);
  this_01 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Plant_spartanbamboo3");
  RealObject::PlayPositionalSound(this_01,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  PlantFramework::onDestroy((PlantFramework *)this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::OnRelocationBegun() */

void __thiscall PlantSpartanBamboo::OnRelocationBegun(PlantSpartanBamboo *this)

{
  char cVar1;
  int iVar2;
  SpartanBambooMatrixSystem *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x5d] != (PlantSpartanBamboo)0x0) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x48));
    if (cVar1 != '\0') {
      this_00 = (SpartanBambooMatrixSystem *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
      iVar2 = *(int *)(this + 0x60);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
      SpartanBambooMatrixSystem::RemoveMatrix(this_00,iVar2,(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  SetBattLearrayState(this,false);
  FUN_04e439d8(this + 0x60,0xffffffff);
  this[0x6c] = (PlantSpartanBamboo)0x1;
  iVar2 = FUN_04e43950(*(undefined8 *)(this + 0x10));
  if (iVar2 == 5) {
    CanMatrixCondition(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::setState(unsigned int) */

void __thiscall PlantSpartanBamboo::setState(PlantSpartanBamboo *this,uint param_1)

{
  bool bVar1;
  int iVar2;
  UIEasyButtonWidget *this_00;
  PlantAnimRig_SpartanBamboo *pPVar3;
  PlantAnimRig *pPVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(uint *)(this_00 + 200) = param_1;
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 10:
    fVar7 = (float)PVZ_T();
    lVar5 = FUN_04e46bcc(*(undefined8 *)(this + 0x10));
    *(float *)(this + 0x28) = fVar7 + *(float *)(lVar5 + 0x2b8);
    break;
  case 0xb:
    pPVar4 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
    PlantAnimRig::SetState(pPVar4,0xe);
    bVar1 = (bool)FUN_04e46f14(*(undefined8 *)(this + 0x10));
    HasShield(this);
    PlantAnimRig_SpartanBamboo::PlayIdle(bVar1);
    break;
  case 0xd:
    uVar6 = PVZ_T();
    *(undefined4 *)(this + 0x30) = uVar6;
  case 0xc:
  case 0xf:
    uVar6 = PVZ_T();
    *(undefined4 *)(this + 0x2c) = uVar6;
    break;
  case 0xe:
    this[0x40] = (PlantSpartanBamboo)0x1;
    pPVar3 = (PlantAnimRig_SpartanBamboo *)FUN_04e46f14();
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimComplete);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantSpartanBamboo,void(PlantSpartanBamboo::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    iVar2 = FUN_04e43950(*(undefined8 *)(this + 0x10));
    PlantAnimRig_SpartanBamboo::PlayShieldBreakAnimation(pPVar3,aDStack_38,1 < iVar2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::Initialize() */

void __thiscall PlantSpartanBamboo::Initialize(PlantSpartanBamboo *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  char cVar1;
  int iVar2;
  long lVar3;
  Shield *pSVar4;
  PlantAnimRig *pPVar5;
  PopAnimRig *pPVar6;
  undefined4 uVar7;
  ShieldProps aSStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  uVar7 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar7;
  lVar3 = FUN_04e46bcc(*(undefined8 *)(this + 0x10));
  GameObject::Create<Shield>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  iVar2 = FUN_04e43950(*(undefined8 *)(this + 0x10));
  ShieldProps::ShieldProps(aSStack_20,(int)(*(float *)(lVar3 + 0x35c) * 0.5 * (float)iVar2));
  pSVar4 = (Shield *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Shield::SetProps(pSVar4,aSStack_20);
  pSVar4 = (Shield *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  Shield::SetAnimRig(pSVar4,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  pPVar5 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  PlantAnimRig::SetState(pPVar5,0xe);
  pSVar4 = (Shield *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  cVar1 = Shield::CanDeployShield(pSVar4);
  if (cVar1 != '\0') {
    pSVar4 = (Shield *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Shield::DeployShield(pSVar4);
  }
  Board::GetGameSubSystem<SpartanBambooMatrixSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x48),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this[0x6c] = (PlantSpartanBamboo)0x0;
  *(undefined4 *)(this + 0x60) = 0xffffffff;
  setState(this,0xb);
  *(undefined4 *)(this + 0x44) = uVar7;
  *(undefined4 *)(this + 100) = 0x3f400000;
  uVar7 = Plant::GetMaxHealth(*(Plant **)(this + 0x10));
  *(undefined4 *)(this + 0x68) = uVar7;
  pPVar6 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string((string *)aRStack_10,"hair");
  PopAnimRig::SetLayerVisibility(pPVar6,(string *)aRStack_10,false);
  std::string::~string((string *)aRStack_10);
  nop();
  pPVar6 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  std::string::string((string *)aRStack_10,"hair2");
  PopAnimRig::SetLayerVisibility(pPVar6,(string *)aRStack_10,false);
  std::string::~string((string *)aRStack_10);
  nop();
  iVar2 = FUN_04e43950(*(undefined8 *)(this + 0x10));
  if (iVar2 == 5) {
    CanMatrixCondition(this);
  }
  PlantFramework::Initialize((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::SetBerserkerCondition(bool, float) */

void __thiscall
PlantSpartanBamboo::SetBerserkerCondition(PlantSpartanBamboo *this,bool param_1,float param_2)

{
  PlantSpartanBamboo PVar1;
  int iVar2;
  PlantAnimRig_SpartanBamboo *pPVar3;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = FUN_04e43950(*(undefined8 *)(this + 0x10));
  if (param_1) {
    if (iVar2 < 3) {
      PVar1 = this[0x41];
      *(undefined4 *)(this + 100) = 0x3f000000;
    }
    else {
      PVar1 = this[0x41];
      *(undefined4 *)(this + 100) = 0x3e800000;
    }
    if (PVar1 == (PlantSpartanBamboo)0x0) {
      setState(this,0x14);
      pPVar3 = (PlantAnimRig_SpartanBamboo *)FUN_04e46f14(*(undefined8 *)(this + 0x10));
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onAnimComplete);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<PlantSpartanBamboo,void(PlantSpartanBamboo::*)(std::string_const&)>
                (aDStack_38,aCStack_50);
      PlantAnimRig_SpartanBamboo::PlayBeginBerserkerAnimation(pPVar3,aDStack_38);
    }
    this[0x41] = (PlantSpartanBamboo)0x1;
    *(float *)(this + 0x44) = param_2;
  }
  else {
    this[0x41] = (PlantSpartanBamboo)param_1;
    *(float *)(this + 0x44) = param_2;
    *(undefined4 *)(this + 100) = 0x3f400000;
    iVar2 = getState(this);
    if (((iVar2 - 0xfU & 0xfffffffb) == 0) || (iVar2 - 0xcU < 2)) {
      this[0x54] = (PlantSpartanBamboo)0x1;
    }
    else {
      pPVar3 = (PlantAnimRig_SpartanBamboo *)FUN_04e46f14(*(undefined8 *)(this + 0x10));
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,onAnimComplete);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<PlantSpartanBamboo,void(PlantSpartanBamboo::*)(std::string_const&)>
                (aDStack_38,aCStack_50);
      PlantAnimRig_SpartanBamboo::PlayEndBerserkerAnimation(pPVar3,aDStack_38);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpartanBamboo::calculatecooldown() */

void __thiscall PlantSpartanBamboo::calculatecooldown(PlantSpartanBamboo *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)PVZ_T();
  fVar2 = *(float *)(this + 100);
  *(float *)(this + 0x44) = fVar1 + 1.0;
  *(float *)(this + 100) = fVar2 + 0.1;
  if (fVar2 + 0.1 < 0.75) {
    return;
  }
  fVar1 = (float)PVZ_EOT();
  SetBerserkerCondition(this,false,fVar1);
  return;
}


/* PlantSpartanBamboo::Matrixberserker() */

void __thiscall PlantSpartanBamboo::Matrixberserker(PlantSpartanBamboo *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  SetBerserkerCondition(this,true,fVar1 + 5.0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::OnKillZombie(Zombie*) */

void PlantSpartanBamboo::OnKillZombie(Zombie *param_1)

{
  int iVar1;
  SpartanBambooMatrixSystem *this;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04e43950(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 2) {
    fVar2 = (float)PVZ_T();
    SetBerserkerCondition((PlantSpartanBamboo *)param_1,true,fVar2 + 2.5);
  }
  else if ((1 < iVar1) && (iVar1 < 6)) {
    fVar2 = (float)PVZ_T();
    SetBerserkerCondition((PlantSpartanBamboo *)param_1,true,fVar2 + 5.0);
  }
  this = (SpartanBambooMatrixSystem *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x48))
  ;
  iVar1 = *(int *)(param_1 + 0x60);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  SpartanBambooMatrixSystem::SetBerserkerCondition(this,iVar1,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::UpdateActions() */

void __thiscall PlantSpartanBamboo::UpdateActions(PlantSpartanBamboo *this)

{
  PlantSpartanBamboo PVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  RealObject *this_00;
  float fVar8;
  float fVar9;
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar7 = *(int *)(*(long *)(this + 0x10) + 200);
  do {
    switch(iVar7) {
    case 10:
      fVar8 = (float)PVZ_T();
      if (*(float *)(this + 0x28) <= fVar8) {
LAB_04e4d234:
        setState(this,0xb);
        break;
      }
      PVar1 = this[0x41];
      goto joined_r0x04e4d244;
    case 0xb:
      cVar3 = targetInAttackArea(this);
      if (cVar3 == '\0') {
        iVar4 = FUN_04e43950(*(undefined8 *)(this + 0x10));
        if (((iVar4 == 5) && (fVar8 = (float)PVZ_T(), *(float *)(this + 0x30) <= fVar8)) &&
           ((cVar3 = RemoteAttackTarget(this), cVar3 != '\0' &&
            (this[0x5d] == (PlantSpartanBamboo)0x0)))) {
          setState(this,0xd);
        }
      }
      else {
        cVar3 = HasShield(this);
        if (cVar3 == '\0') {
          setState(this,0xf);
        }
        else {
          setState(this,0xc);
        }
      }
      break;
    case 0xc:
    case 0xd:
    case 0xf:
      cVar3 = targetInAttackArea(this);
      if (cVar3 == '\0') {
        iVar4 = FUN_04e43950(*(undefined8 *)(this + 0x10));
        if (((iVar4 != 5) || (cVar3 = RemoteAttackTarget(this), cVar3 == '\0')) ||
           (this[0x5d] != (PlantSpartanBamboo)0x0)) goto LAB_04e4d234;
        fVar8 = (float)PVZ_T();
        if (*(float *)(this + 0x30) <= fVar8) {
          fVar8 = (float)PVZ_T();
          *(float *)(this + 0x30) = fVar8 + 6.0;
          fVar8 = (float)PVZ_T();
          *(float *)(this + 0x2c) = fVar8 + *(float *)(this + 100);
          uVar6 = FUN_04e46f14(*(undefined8 *)(this + 0x10));
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,onRemoteLoopAnimComplete);
          Sexy::Delegate1<std::string_const&>::
          Delegate1<PlantSpartanBamboo,void(PlantSpartanBamboo::*)(std::string_const&)>
                    (aDStack_38,asStack_50);
          uVar5 = HasShield(this);
          PlantAnimRig_SpartanBamboo::PlayremoteAnimation(uVar6,aDStack_38,uVar5);
        }
      }
      else {
        fVar8 = (float)PVZ_T();
        if (*(float *)(this + 0x2c) <= fVar8) {
          fVar8 = (float)PVZ_T();
          this_00 = *(RealObject **)(this + 0x10);
          *(float *)(this + 0x2c) = fVar8 + *(float *)(this + 100);
          std::string::string(asStack_50,"Plant_spartanbamboo1");
          RealObject::PlayPositionalSound(this_00,asStack_50,0.0);
          std::string::~string(asStack_50);
          nop();
          uVar6 = FUN_04e46f14(*(undefined8 *)(this + 0x10));
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,onJabAnimComplete);
          Sexy::Delegate1<std::string_const&>::
          Delegate1<PlantSpartanBamboo,void(PlantSpartanBamboo::*)(std::string_const&)>
                    (aDStack_38,asStack_50);
          uVar5 = HasShield(this);
          PlantAnimRig_SpartanBamboo::PlayJabAnimation(uVar6,aDStack_38,uVar5);
        }
      }
    }
    PVar1 = this[0x41];
joined_r0x04e4d244:
    if (((PVar1 == (PlantSpartanBamboo)0x0) ||
        (cVar3 = (**(code **)(*(long *)this + 0x180))(this), cVar3 != '\0')) ||
       (fVar9 = *(float *)(this + 0x44), fVar8 = (float)PVZ_T(), fVar8 < fVar9)) {
      iVar4 = *(int *)(*(long *)(this + 0x10) + 200);
    }
    else {
      calculatecooldown(this);
      iVar4 = *(int *)(*(long *)(this + 0x10) + 200);
    }
    bVar2 = iVar7 == iVar4;
    iVar7 = iVar4;
    if (bVar2) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


/* PlantSpartanBamboo::ApplyPlantfood() */

void __thiscall PlantSpartanBamboo::ApplyPlantfood(PlantSpartanBamboo *this)

{
  undefined4 uVar1;
  long lVar2;
  
  setState(this,0x13);
  lVar2 = FUN_04e46f14(*(undefined8 *)(this + 0x10));
  uVar1 = (**(code **)(*(long *)this + 0x118))(this);
  FUN_04e439f8(lVar2 + 0x3bc,uVar1);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantSpartanBamboo::CancelPlantfood() */

void __thiscall PlantSpartanBamboo::CancelPlantfood(PlantSpartanBamboo *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,0xb);
  return;
}


/* PlantSpartanBamboo::breakShield() */

void __thiscall PlantSpartanBamboo::breakShield(PlantSpartanBamboo *this)

{
  long lVar1;
  
  lVar1 = FUN_04e46f14(*(undefined8 *)(this + 0x10));
  FUN_04e43bc8(lVar1 + 0x3b8);
  if (this[0x40] != (PlantSpartanBamboo)0x0) {
    return;
  }
  setState(this,0xe);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::TakeDamage(DamageInfo const&) */

void PlantSpartanBamboo::TakeDamage(DamageInfo *param_1)

{
  char cVar1;
  DamageInfo *pDVar2;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = HasShield((PlantSpartanBamboo *)param_1);
  if (cVar1 == '\0') {
    DamageInfo::DamageInfo(in_x8,in_x1);
  }
  else {
    pDVar2 = (DamageInfo *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x38));
    Shield::ReduceDamage(pDVar2);
    cVar1 = HasShield((PlantSpartanBamboo *)param_1);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x180))(param_1), cVar1 == '\0')
       ) {
      breakShield((PlantSpartanBamboo *)param_1);
    }
    DamageInfo::DamageInfo(in_x8,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantSpartanBamboo::TakeSmashAttack(PlantSpartanBamboo *this,RtWeakPtr *param_2)

{
  char cVar1;
  BoardEntity *pBVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsInvincible(*(Plant **)(this + 0x10),false);
  if (cVar1 == '\0') {
    pBVar2 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
    Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
    cVar1 = Shield::TakeSmashAttack(pBVar2);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
      PlantTupistraStalker::TakeSmashAttack(this,aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    else {
      breakShield(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSpartanBamboo::onApplyCondition(PlantConditions) */

void __thiscall PlantSpartanBamboo::onApplyCondition(PlantSpartanBamboo *this,int param_2)

{
  if (param_2 == 0xf) {
    setState(this,0xb);
    return;
  }
  if (param_2 != 0xe) {
    return;
  }
  Plant::EndCondition(*(Plant **)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::onAnimComplete(std::string const&) */

void __thiscall PlantSpartanBamboo::onAnimComplete(PlantSpartanBamboo *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  SpartanBambooMatrixSystem *this_00;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"battle_trance_shield_break_abandon");
  if (bVar1) {
    cVar2 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar2 != '\0') goto LAB_04e4d8c8;
LAB_04e4d790:
    setState(this,0xb);
  }
  else {
    bVar1 = std::operator==(param_1,"battle_trance_shield_break");
    if (!bVar1) goto LAB_04e4d834;
    cVar2 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar2 == '\0') goto LAB_04e4d790;
LAB_04e4d8c8:
    setState(this,0x13);
  }
  bVar1 = std::operator==(param_1,"battle_trance_shield_break");
  if (bVar1) {
    iVar3 = FUN_04e43950(*(undefined8 *)(this + 0x10));
    if (iVar3 == 2) {
      fVar4 = (float)PVZ_T();
      SetBerserkerCondition(this,true,fVar4 + 2.5);
    }
    else if ((1 < iVar3) && (iVar3 < 6)) {
      fVar4 = (float)PVZ_T();
      SetBerserkerCondition(this,true,fVar4 + 5.0);
    }
    this_00 = (SpartanBambooMatrixSystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
    iVar3 = *(int *)(this + 0x60);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    SpartanBambooMatrixSystem::SetBerserkerCondition(this_00,iVar3,(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
LAB_04e4d834:
  bVar1 = std::operator==(param_1,"begin_rage");
  if ((((bVar1) || (bVar1 = std::operator==(param_1,"battle_begin_rage"), bVar1)) ||
      (bVar1 = std::operator==(param_1,"end_rage"), bVar1)) ||
     (bVar1 = std::operator==(param_1,"end_rage_battle"), bVar1)) {
    cVar2 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar2 == '\0') {
      setState(this,0xb);
    }
    else {
      setState(this,0x13);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSpartanBamboo::onRemoteAnimComplete(std::string const&) */

void PlantSpartanBamboo::onRemoteAnimComplete(string *param_1)

{
  PlantAnimRig_SpartanBamboo *pPVar1;
  undefined4 uVar2;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = PVZ_T();
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  if (param_1[0x54] != (string)0x0) {
    pPVar1 = (PlantAnimRig_SpartanBamboo *)FUN_04e46f14(*(undefined8 *)(param_1 + 0x10));
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)param_1,onAnimComplete);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<PlantSpartanBamboo,void(PlantSpartanBamboo::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PlantAnimRig_SpartanBamboo::PlayEndBerserkerAnimation(pPVar1,aDStack_38);
    param_1[0x54] = (string)0x0;
  }
  setState((PlantSpartanBamboo *)param_1,0xb);
  FUN_04e439ec(param_1 + 0x5c,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

