// Class: PlantDraftodilProjectile2


/* PlantDraftodilProjectile2::~PlantDraftodilProjectile2() */

void __thiscall
PlantDraftodilProjectile2::~PlantDraftodilProjectile2(PlantDraftodilProjectile2 *this)

{
  *(undefined ***)this = &PTR_GetClass_067b64e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantDraftodilProjectile2_067b66d0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to PlantDraftodilProjectile2::~PlantDraftodilProjectile2() */

void __thiscall
PlantDraftodilProjectile2::~PlantDraftodilProjectile2(PlantDraftodilProjectile2 *this)

{
  ~PlantDraftodilProjectile2(this + -0x10);
  return;
}


/* PlantDraftodilProjectile2::~PlantDraftodilProjectile2() */

void __thiscall
PlantDraftodilProjectile2::~PlantDraftodilProjectile2(PlantDraftodilProjectile2 *this)

{
  ~PlantDraftodilProjectile2(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantDraftodilProjectile2::~PlantDraftodilProjectile2() */

void __thiscall
PlantDraftodilProjectile2::~PlantDraftodilProjectile2(PlantDraftodilProjectile2 *this)

{
  ~PlantDraftodilProjectile2(this + -0x10);
  return;
}


/* PlantDraftodilProjectile2::PlantDraftodilProjectile2() */

void __thiscall
PlantDraftodilProjectile2::PlantDraftodilProjectile2(PlantDraftodilProjectile2 *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (PlantDraftodilProjectile2)0x0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined ***)this = &PTR_GetClass_067b64e0;
  *(undefined ***)(this + 0x10) = &PTR__PlantDraftodilProjectile2_067b66d0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1bc) = 0;
  return;
}


/* PlantDraftodilProjectile2::StaticNew() */

PlantDraftodilProjectile2 * PlantDraftodilProjectile2::StaticNew(void)

{
  PlantDraftodilProjectile2 *this;
  
  this = ::operator_new(0x1c0);
  PlantDraftodilProjectile2(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDraftodilProjectile2::StaticClassInit() */

void PlantDraftodilProjectile2::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantDraftodilProjectile2");
    (*pcVar2)(plVar1,asStack_10,FUN_04016910,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDraftodilProjectile2::StaticGetClass() */

long * PlantDraftodilProjectile2::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantDraftodilProjectile2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantDraftodilProjectile2::GetClass() const */

long * PlantDraftodilProjectile2::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantDraftodilProjectile2",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDraftodilProjectile2::handleFlyingZombie(Zombie*) */

void __thiscall
PlantDraftodilProjectile2::handleFlyingZombie(PlantDraftodilProjectile2 *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  RtObject *pRVar3;
  DraftodilProjectileProps *pDVar4;
  ZombieBlowerSubSystem *pZVar5;
  Plant *pPVar6;
  ZombieBlowerSubSystem *pZVar8;
  undefined4 uVar7;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar3 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pDVar4 = Sexy::RtObject::Cast<DraftodilProjectileProps>(pRVar3);
  if ((param_1 == (Zombie *)0x0) || (cVar1 = Zombie::IsBoss(param_1), cVar1 != '\0')) {
LAB_04017554:
    Projectile::GetInstigator((Projectile *)this);
  }
  else {
    cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')
       ) {
      cVar1 = Zombie::HasCondition(param_1,0x7a);
      pRVar3 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
      if (cVar1 != '\0') goto LAB_0401755c;
    }
    else {
      iVar2 = (**(code **)(*(long *)param_1 + 0x4e8))(param_1);
      if (iVar2 != 1) goto LAB_04017554;
      pRVar3 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
    }
    if (pRVar3 == (RtObject *)0x0) {
      pZVar5 = Board::GetGameSubSystem<ZombieBlowerSubSystem>(*(Board **)(gLawnApp + 0x9f0));
                    /* WARNING: Load size is inaccurate */
      pZVar8._0_4_ = *(ZombieBlowerSubSystem **)(pDVar4 + 0x1e0);
      uVar7 = *(undefined4 *)(pDVar4 + 0x1e4);
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
      pPVar6 = (Plant *)0x0;
    }
    else {
      pZVar5 = Board::GetGameSubSystem<ZombieBlowerSubSystem>(*(Board **)(gLawnApp + 0x9f0));
      pPVar6 = Sexy::RtObject::Cast<Plant>(pRVar3);
                    /* WARNING: Load size is inaccurate */
      pZVar8._0_4_ = *(ZombieBlowerSubSystem **)(pDVar4 + 0x1e0);
      uVar7 = *(undefined4 *)(pDVar4 + 0x1e4);
      RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
    }
    ZombieBlowerSubSystem::BlowZombie(pZVar8._0_4_,uVar7,pZVar5,pPVar6,param_1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
  }
LAB_0401755c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDraftodilProjectile2::handleLightweightZombie(Zombie*) */

void __thiscall
PlantDraftodilProjectile2::handleLightweightZombie(PlantDraftodilProjectile2 *this,Zombie *param_1)

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
  goto LAB_040184a0;
  cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0'))
  {
    cVar1 = Zombie::HasCondition(param_1,0x7a);
    if (cVar1 != '\0') goto LAB_040184a0;
    Zombie::GetCurrentTitleStatus();
    TitleStatus::~TitleStatus(aTStack_70);
    if (local_58 != '\0') goto LAB_040184a0;
  }
  else {
    iVar2 = (**(code **)(*(long *)param_1 + 0x4e8))(param_1);
    if (iVar2 != 1) goto LAB_040184a0;
  }
  if (*(long *)(this + 0x1a8) == 0) {
    fVar5 = *(float *)(this + 0x1bc);
  }
  else {
    fVar5 = *(float *)(this + 0x1b8);
  }
  fVar4 = (float)Sexy::Rand(1.0);
  if (fVar4 <= fVar5) {
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar4 = pfVar3[1];
    fVar5 = *pfVar3;
    local_78[0] = 0x43160000;
    pfVar3 = eastl::max_alt<float>((float *)local_78,pfVar3 + 2);
    EATextSquish::Vec3::Vec3((Vec3 *)aTStack_70,fVar5 + 850.0,fVar4,*pfVar3);
    Zombie::FlickOff((SexyVector3 *)param_1,400.0,-1120.0);
    std::string::string((string *)local_78,"Play_UI_PowerUp_Flick_Secondary");
    RealObject::PlayPositionalSound((RealObject *)param_1,(string *)local_78,0.0);
    std::string::~string((string *)local_78);
    nop();
    MessageRouter::Broadcast<KnockbackReason,KnockbackReason>
              ((MessageRouter *)gMessageRouter,Message::ZombieKnockedBackByPlayer,2);
  }
LAB_040184a0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantDraftodilProjectile2::handleGroundZombie(Zombie*) */

void __thiscall
PlantDraftodilProjectile2::handleGroundZombie(PlantDraftodilProjectile2 *this,Zombie *param_1)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  DraftodilProjectileProps *pDVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  PopAnimRig *pPVar7;
  float *pfVar8;
  float fVar9;
  Zombie *pZVar11;
  float fVar10;
  undefined4 local_c0 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_b8 [24];
  DummyInit aDStack_a0 [48];
  undefined8 local_70 [3];
  char local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)Projectile::GetProps((Projectile *)this);
  pDVar3 = Sexy::RtObject::Cast<DraftodilProjectileProps>(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_b8);
  local_70[0]._0_4_ = 1;
  do {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_b8,(int *)local_70);
    local_70[0]._0_4_ = (int)local_70[0] + 1;
  } while ((int)local_70[0] < 0x65);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_b8);
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_b8);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar4,uVar5);
  iVar2 = *(int *)(pDVar3 + 0x1f0);
  fVar9 = (float)FUN_0401564c(*(undefined4 *)(this + 0x170));
  if (fVar9 == 2.0) {
    iVar2 = *(int *)(pDVar3 + 500);
LAB_04018f7c:
    local_70[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_b8);
    piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_70);
    if (iVar2 < *piVar6) goto LAB_04018fc0;
  }
  else {
    if (fVar9 < 3.0) goto LAB_04018f7c;
    iVar2 = *(int *)(pDVar3 + 0x1f8);
    local_70[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)avStack_b8);
    piVar6 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_70);
    if (iVar2 < *piVar6) goto LAB_04018fc0;
  }
  if (*(long *)(this + 0x1a8) == 0) {
    iVar2 = Zombie::GetSizeType(param_1);
    if ((iVar2 == 0) && (cVar1 = Zombie::HasCondition(param_1,0x7a), cVar1 == '\0')) {
      Zombie::GetCurrentTitleStatus();
      TitleStatus::~TitleStatus((TitleStatus *)local_70);
      if (local_58 == '\0') {
        if (((param_1 != (Zombie *)0x0) && (cVar1 = Zombie::IsBoss(param_1), cVar1 == '\0')) &&
           (((cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1), cVar1 == '\0' &&
             (cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0')) ||
            (iVar2 = (**(code **)(*(long *)param_1 + 0x4e8))(param_1), iVar2 == 1)))) {
          pfVar8 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)param_1);
          fVar10 = pfVar8[1];
          fVar9 = *pfVar8;
          local_c0[0] = 0x43160000;
          pfVar8 = eastl::max_alt<float>((float *)local_c0,pfVar8 + 2);
          EATextSquish::Vec3::Vec3((Vec3 *)local_70,fVar9 + 850.0,fVar10,*pfVar8);
          Zombie::FlickOff((SexyVector3 *)param_1,400.0,-1120.0);
          std::string::string((string *)local_c0,"Play_UI_PowerUp_Flick_Secondary");
          RealObject::PlayPositionalSound((RealObject *)param_1,(string *)local_c0,0.0);
          std::string::~string((string *)local_c0);
          nop();
          MessageRouter::Broadcast<KnockbackReason,KnockbackReason>
                    ((MessageRouter *)gMessageRouter,Message::ZombieKnockedBackByPlayer,2);
        }
        goto LAB_04018fc0;
      }
    }
                    /* WARNING: Load size is inaccurate */
    pZVar11._0_4_ = *(Zombie **)(pDVar3 + 0x1ec);
  }
  else {
                    /* WARNING: Load size is inaccurate */
    pZVar11._0_4_ = *(Zombie **)(pDVar3 + 0x1e8);
  }
  Zombie::ApplyCondition(pZVar11._0_4_,0,param_1,0x18,1);
LAB_04018fc0:
  pPVar7 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string((string *)local_70,"animation");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_a0);
  PopAnimRig::PlayAndContinue(pPVar7,(exception_ptr *)local_70,0,aDStack_a0);
  std::string::~string((string *)local_70);
  nop();
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_b8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantDraftodilProjectile2::applyConditions(BoardEntity*) */

void __thiscall
PlantDraftodilProjectile2::applyConditions(PlantDraftodilProjectile2 *this,BoardEntity *param_1)

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
      handleFlyingZombie(this,this_00);
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


/* PlantDraftodilProjectile2::OnCollideEntity(BoardEntity*) */

undefined8 __thiscall
PlantDraftodilProjectile2::OnCollideEntity(PlantDraftodilProjectile2 *this,BoardEntity *param_1)

{
  PlantDraftodilProjectile2 PVar1;
  char cVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  if (*(BoardEntity **)(this + 0x1a8) == param_1) {
    return 0;
  }
  pcVar4 = *(code **)(*(long *)param_1 + 0x20);
  uVar3 = Zombie::StaticGetClass();
  cVar2 = (*pcVar4)(param_1,uVar3);
  if (cVar2 == '\0') {
    PVar1 = this[0x1a5];
  }
  else {
    applyConditions(this,param_1);
    PVar1 = this[0x1a5];
  }
  if (PVar1 != (PlantDraftodilProjectile2)0x0) {
    this[0x1a5] = (PlantDraftodilProjectile2)0x0;
    uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
    return uVar3;
  }
  FUN_04015690(this + 0x4c);
  *(BoardEntity **)(this + 0x1a8) = param_1;
  this[0x1a5] = (PlantDraftodilProjectile2)0x1;
  uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  return uVar3;
}

