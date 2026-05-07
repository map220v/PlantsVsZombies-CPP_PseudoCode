// Class: MulberryGasGrenade


/* MulberryGasGrenade::~MulberryGasGrenade() */

void __thiscall MulberryGasGrenade::~MulberryGasGrenade(MulberryGasGrenade *this)

{
  *(undefined ***)this = &PTR_GetClass_06746c00;
  *(undefined ***)(this + 0x10) = &PTR__MulberryGasGrenade_06746df0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to MulberryGasGrenade::~MulberryGasGrenade() */

void __thiscall MulberryGasGrenade::~MulberryGasGrenade(MulberryGasGrenade *this)

{
  ~MulberryGasGrenade(this + -0x10);
  return;
}


/* MulberryGasGrenade::~MulberryGasGrenade() */

void __thiscall MulberryGasGrenade::~MulberryGasGrenade(MulberryGasGrenade *this)

{
  ~MulberryGasGrenade(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MulberryGasGrenade::~MulberryGasGrenade() */

void __thiscall MulberryGasGrenade::~MulberryGasGrenade(MulberryGasGrenade *this)

{
  ~MulberryGasGrenade(this + -0x10);
  return;
}


/* MulberryGasGrenade::MulberryGasGrenade() */

void __thiscall MulberryGasGrenade::MulberryGasGrenade(MulberryGasGrenade *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06746c00;
  *(undefined ***)(this + 0x10) = &PTR__MulberryGasGrenade_06746df0;
  return;
}


/* MulberryGasGrenade::StaticNew() */

MulberryGasGrenade * MulberryGasGrenade::StaticNew(void)

{
  MulberryGasGrenade *this;
  
  this = ::operator_new(0x1a8);
  MulberryGasGrenade(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MulberryGasGrenade::StaticClassInit() */

void MulberryGasGrenade::StaticClassInit(void)

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
    std::string::string(asStack_10,"MulberryGasGrenade");
    (*pcVar2)(plVar1,asStack_10,FUN_03c0d348,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MulberryGasGrenade::StaticGetClass() */

long * MulberryGasGrenade::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MulberryGasGrenade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MulberryGasGrenade::GetClass() const */

long * MulberryGasGrenade::GetClass(void)

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
  (*pcVar3)(plVar1,"MulberryGasGrenade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MulberryGasGrenade::shouldPoison(Zombie*) */

undefined8 __thiscall MulberryGasGrenade::shouldPoison(MulberryGasGrenade *this,Zombie *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((((param_1 == (Zombie *)0x0) || (cVar1 = Zombie::IsFriendZombie(param_1), cVar1 != '\0')) ||
      (cVar1 = Zombie::IsFlickedOff(param_1), cVar1 != '\0')) ||
     (((cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0' ||
       (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 != '\0')) ||
      ((cVar1 = Zombie::IsControlled(param_1), cVar1 != '\0' ||
       (cVar1 = Zombie::IsInvisible(param_1), cVar1 != '\0')))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MulberryGasGrenade::poisonZombie(BoardEntity*) */

void __thiscall MulberryGasGrenade::poisonZombie(MulberryGasGrenade *this,BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long extraout_x0;
  undefined8 *puVar5;
  Zombie *this_00;
  undefined8 uVar6;
  float fVar7;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    Projectile::GetProps((Projectile *)this);
    nop();
    if (extraout_x0 != 0) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      iVar3 = BoardEntity::CalcColumnPosition(param_1);
      iVar4 = SharkMinion::getRow((SharkMinion *)param_1);
      Sexy::Insets::Insets(aIStack_30,iVar3 + -1,iVar4 + -1,3,3);
      EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
            bVar2) {
        puVar5 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
        if ((this_00 != (Zombie *)0x0) && (cVar1 = shouldPoison(this,this_00), cVar1 != '\0')) {
          uVar6 = Zombie::GetConditionTracker(this_00);
          fVar7 = (float)FUN_03c0b9ac(*(undefined4 *)(this + 0x180));
          ZombieConditionTracker::SetAdditionalValue
                    ((ZombieConditionTracker *)(fVar7 * *(float *)(extraout_x0 + 0x1e4)),uVar6,0x4f)
          ;
                    /* WARNING: Load size is inaccurate */
          Zombie::ApplyCondition(*(Zombie **)(extraout_x0 + 0x1e0),0,this_00,0x4f,1);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MulberryGasGrenade::handleImpact(BoardEntity*) */

void __thiscall MulberryGasGrenade::handleImpact(MulberryGasGrenade *this,BoardEntity *param_1)

{
  poisonZombie(this,param_1);
  Projectile::handleImpact((Projectile *)this,param_1);
  return;
}

