// Class: PlantPoisonPeashooterLevel5Projectile


/* PlantPoisonPeashooterLevel5Projectile::~PlantPoisonPeashooterLevel5Projectile() */

void __thiscall
PlantPoisonPeashooterLevel5Projectile::~PlantPoisonPeashooterLevel5Projectile
          (PlantPoisonPeashooterLevel5Projectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0699c270;
  *(undefined ***)(this + 0x10) = &PTR__PlantPoisonPeashooterLevel5Projectile_0699c468;
  PlantPoisonPeashooterProjectile::~PlantPoisonPeashooterProjectile
            ((PlantPoisonPeashooterProjectile *)this);
  return;
}


/* non-virtual thunk to
   PlantPoisonPeashooterLevel5Projectile::~PlantPoisonPeashooterLevel5Projectile() */

void __thiscall
PlantPoisonPeashooterLevel5Projectile::~PlantPoisonPeashooterLevel5Projectile
          (PlantPoisonPeashooterLevel5Projectile *this)

{
  ~PlantPoisonPeashooterLevel5Projectile(this + -0x10);
  return;
}


/* PlantPoisonPeashooterLevel5Projectile::~PlantPoisonPeashooterLevel5Projectile() */

void __thiscall
PlantPoisonPeashooterLevel5Projectile::~PlantPoisonPeashooterLevel5Projectile
          (PlantPoisonPeashooterLevel5Projectile *this)

{
  ~PlantPoisonPeashooterLevel5Projectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   PlantPoisonPeashooterLevel5Projectile::~PlantPoisonPeashooterLevel5Projectile() */

void __thiscall
PlantPoisonPeashooterLevel5Projectile::~PlantPoisonPeashooterLevel5Projectile
          (PlantPoisonPeashooterLevel5Projectile *this)

{
  ~PlantPoisonPeashooterLevel5Projectile(this + -0x10);
  return;
}


/* PlantPoisonPeashooterLevel5Projectile::PlantPoisonPeashooterLevel5Projectile() */

void __thiscall
PlantPoisonPeashooterLevel5Projectile::PlantPoisonPeashooterLevel5Projectile
          (PlantPoisonPeashooterLevel5Projectile *this)

{
  PlantPoisonPeashooterProjectile::PlantPoisonPeashooterProjectile
            ((PlantPoisonPeashooterProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_0699c270;
  *(undefined ***)(this + 0x10) = &PTR__PlantPoisonPeashooterLevel5Projectile_0699c468;
  return;
}


/* PlantPoisonPeashooterLevel5Projectile::StaticNew() */

PlantPoisonPeashooterLevel5Projectile * PlantPoisonPeashooterLevel5Projectile::StaticNew(void)

{
  PlantPoisonPeashooterLevel5Projectile *this;
  
  this = ::operator_new(0x1c0);
  PlantPoisonPeashooterLevel5Projectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooterLevel5Projectile::StaticClassInit() */

void PlantPoisonPeashooterLevel5Projectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantPoisonPeashooterLevel5Projectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04cc7c3c,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantPoisonPeashooterLevel5Projectile::StaticGetClass() */

long * PlantPoisonPeashooterLevel5Projectile::StaticGetClass(void)

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
  uVar2 = PlantPoisonPeashooterProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPoisonPeashooterLevel5Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantPoisonPeashooterLevel5Projectile::GetClass() const */

long * PlantPoisonPeashooterLevel5Projectile::GetClass(void)

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
  uVar2 = PlantPoisonPeashooterProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"PlantPoisonPeashooterLevel5Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooterLevel5Projectile::PoisonGrid(Sexy::Point) */

void __thiscall
PlantPoisonPeashooterLevel5Projectile::PoisonGrid(undefined8 param_1,undefined4 *param_2)

{
  bool bVar1;
  long extraout_x0;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,*param_2,param_2[1]);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    nop();
    if (extraout_x0 != 0) {
      Zombie::ApplyCondition((Zombie *)0x3f800000,0);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantPoisonPeashooterLevel5Projectile::applyConditions(BoardEntity*) */

void __thiscall
PlantPoisonPeashooterLevel5Projectile::applyConditions
          (PlantPoisonPeashooterLevel5Projectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *this_00;
  string *psVar3;
  BoardTransforms *this_01;
  EntityConditionTracker<Zombie,ZombieConditions> *pEVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  TPoint aTStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_10,"poisonpeashooter");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    std::string::~string(asStack_10);
    nop();
    cVar2 = Zombie::HasCondition(this_00,0x33);
    if (cVar2 != '\0') {
      Zombie::GetConditionTracker(this_00);
      Zombie::EndCondition(this_00,0x33);
    }
    fVar7 = 0.0;
    cVar2 = Zombie::HasCondition(this_00,0x30);
    if (cVar2 != '\0') {
      pEVar4 = (EntityConditionTracker<Zombie,ZombieConditions> *)
               Zombie::GetConditionTracker(this_00);
      lVar5 = EntityConditionTracker<Zombie,ZombieConditions>::GetCondition(pEVar4,0x30);
      fVar7 = *(float *)(lVar5 + 0xc);
      Zombie::GetConditionTracker(this_00);
      Zombie::EndCondition(this_00,0x30);
    }
                    /* WARNING: Load size is inaccurate */
    if (fVar7 < *(float *)(this + 0x1ac) * *(float *)(this + 0x1a8)) {
      Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_00,0x30,1);
      fVar6 = (float)FUN_04cc6f80(*(undefined4 *)(this + 0x180));
      Zombie::SetConditionTracker
                ((fVar7 + *(float *)(this + 0x1ac)) *
                 ((float)(*(int *)(this + 0x1b8) + -1) * 0.5 + 1.0) * fVar6,this_00,0x30);
    }
    else {
      Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_00,0x30,1);
    }
    this_01 = (BoardTransforms *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this_00);
    BoardTransforms::BoardSpaceToGrid(this_01,*(float *)this_01,*(float *)(this_01 + 4));
    Sexy::Point::Point((Point *)asStack_10,aTStack_18);
    PoisonGrid(this,asStack_10);
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(this + 0x1b4),0,this_00,0x33,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

