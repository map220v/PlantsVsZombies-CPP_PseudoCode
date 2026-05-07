// Class: PlantDraftodilProjectile


/* PlantDraftodilProjectile::~PlantDraftodilProjectile() */

void __thiscall PlantDraftodilProjectile::~PlantDraftodilProjectile(PlantDraftodilProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067b6230;
  *(undefined ***)(this + 0x10) = &PTR__PlantDraftodilProjectile_067b6420;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PlantDraftodilProjectile::~PlantDraftodilProjectile() */

void __thiscall PlantDraftodilProjectile::~PlantDraftodilProjectile(PlantDraftodilProjectile *this)

{
  ~PlantDraftodilProjectile(this + -0x10);
  return;
}


/* PlantDraftodilProjectile::~PlantDraftodilProjectile() */

void __thiscall PlantDraftodilProjectile::~PlantDraftodilProjectile(PlantDraftodilProjectile *this)

{
  ~PlantDraftodilProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantDraftodilProjectile::~PlantDraftodilProjectile() */

void __thiscall PlantDraftodilProjectile::~PlantDraftodilProjectile(PlantDraftodilProjectile *this)

{
  ~PlantDraftodilProjectile(this + -0x10);
  return;
}


/* PlantDraftodilProjectile::PlantDraftodilProjectile() */

void __thiscall PlantDraftodilProjectile::PlantDraftodilProjectile(PlantDraftodilProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067b6230;
  *(undefined ***)(this + 0x10) = &PTR__PlantDraftodilProjectile_067b6420;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  return;
}


/* PlantDraftodilProjectile::StaticNew() */

PlantDraftodilProjectile * PlantDraftodilProjectile::StaticNew(void)

{
  PlantDraftodilProjectile *this;
  
  this = ::operator_new(0x1b8);
  PlantDraftodilProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDraftodilProjectile::StaticClassInit() */

void PlantDraftodilProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantDraftodilProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04016364,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDraftodilProjectile::StaticGetClass() */

long * PlantDraftodilProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantDraftodilProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDraftodilProjectile::GetClass() const */

long * PlantDraftodilProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantDraftodilProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDraftodilProjectile::handleLightweightZombie(Zombie*) */

void __thiscall
PlantDraftodilProjectile::handleLightweightZombie(PlantDraftodilProjectile *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined4 local_78 [2];
  TitleStatus aTStack_70 [24];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (Zombie *)0x0) || (cVar1 = Zombie::IsBoss(param_1), cVar1 != '\0'))
  goto LAB_0401829c;
  cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0'))
  {
    cVar1 = Zombie::HasCondition(param_1,0x7a);
    if (cVar1 != '\0') goto LAB_0401829c;
    Zombie::GetCurrentTitleStatus();
    TitleStatus::~TitleStatus(aTStack_70);
    if (local_58 != '\0') goto LAB_0401829c;
  }
  else {
    iVar2 = (**(code **)(*(long *)param_1 + 0x4e8))(param_1);
    if (iVar2 != 1) goto LAB_0401829c;
  }
  fVar4 = (float)FUN_0401564c(*(undefined4 *)(this + 0x170));
  if (fVar4 == 2.0) {
    fVar4 = *(float *)(this + 0x1ac);
  }
  else if (fVar4 < 3.0) {
    fVar4 = *(float *)(this + 0x1a8);
  }
  else {
    fVar4 = *(float *)(this + 0x1b0);
  }
  fVar5 = (float)Sexy::Rand(1.0);
  if (fVar5 <= fVar4) {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar5 = pfVar3[1];
    fVar4 = *pfVar3;
    local_78[0] = 0x43160000;
    pfVar3 = eastl::max_alt<float>((float *)local_78,pfVar3 + 2);
    EATextSquish::Vec3::Vec3((Vec3 *)aTStack_70,fVar4 + 850.0,fVar5,*pfVar3);
    Zombie::FlickOff((SexyVector3 *)param_1,400.0,-1120.0);
    std::string::string((string *)local_78,"Play_UI_PowerUp_Flick_Secondary");
    RealObject::PlayPositionalSound((RealObject *)param_1,(string *)local_78,0.0);
    std::string::~string((string *)local_78);
    nop();
    MessageRouter::Broadcast<KnockbackReason,KnockbackReason>
              ((MessageRouter *)gMessageRouter,Message::ZombieKnockedBackByPlayer,2);
  }
LAB_0401829c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDraftodilProjectile::handleGroundZombie(Zombie*) */

void __thiscall
PlantDraftodilProjectile::handleGroundZombie(PlantDraftodilProjectile *this,Zombie *param_1)

{
  RtObject *this_00;
  DraftodilProjectileProps *pDVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pDVar1 = Sexy::RtObject::Cast<DraftodilProjectileProps>(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_28._0_4_ = 1;
  do {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_20,(int *)&local_28);
    local_28._0_4_ = (int)local_28 + 1;
  } while ((int)local_28 < 0x65);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar2,uVar3);
  iVar5 = *(int *)(pDVar1 + 0x1f0);
  fVar6 = (float)FUN_0401564c(*(undefined4 *)(this + 0x170));
  if (fVar6 == 2.0) {
    iVar5 = *(int *)(pDVar1 + 500);
  }
  else if (3.0 <= fVar6) {
    iVar5 = *(int *)(pDVar1 + 0x1f8);
  }
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
  if (*piVar4 <= iVar5) {
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(pDVar1 + 0x1e8),0,param_1,0x18,1);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDraftodilProjectile::applyConditions(BoardEntity*) */

void __thiscall
PlantDraftodilProjectile::applyConditions(PlantDraftodilProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  Zombie *this_00;
  RtObject *this_01;
  DraftodilProjectileProps *pDVar2;
  
  nop();
  if ((this_00 == (Zombie *)0x0) || (cVar1 = Zombie::IsBoss(this_00), cVar1 != '\0')) {
    return;
  }
  cVar1 = Zombie::IsOnGround(this_00);
  if (cVar1 == '\0') {
    if (*(code **)(*(long *)this_00 + 1000) == Zombie::CanBeBlovered) {
      cVar1 = Zombie::CanBeBlovered();
    }
    else {
      cVar1 = (**(code **)(*(long *)this_00 + 1000))(this_00);
    }
    if ((((cVar1 != '\0') &&
         (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar1 == '\0')) &&
        (cVar1 = Zombie::IsIgnoringAllDamage(this_00), cVar1 == '\0')) &&
       ((cVar1 = Zombie::HasCondition(this_00,0x7a), cVar1 == '\0' &&
        (cVar1 = Zombie::IsControlled(this_00), cVar1 == '\0')))) {
      PlantDraftodilProjectile2::handleFlyingZombie((PlantDraftodilProjectile2 *)this,this_00);
      return;
    }
  }
  this_01 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pDVar2 = Sexy::RtObject::Cast<DraftodilProjectileProps>(this_01);
  cVar1 = ClassRestrictionSet::IsIncluded
                    ((ClassRestrictionSet *)(pDVar2 + 0x200),(GameObject *)this_00);
  if (cVar1 == '\0') {
    handleGroundZombie(this,this_00);
    return;
  }
  handleLightweightZombie(this,this_00);
  return;
}


/* PlantDraftodilProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
PlantDraftodilProjectile::OnCollideEntity(PlantDraftodilProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(long *)param_1 + 0x20);
  uVar2 = Zombie::StaticGetClass();
  cVar1 = (*pcVar3)(param_1,uVar2);
  if (cVar1 != '\0') {
    applyConditions(this,param_1);
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
  return;
}

