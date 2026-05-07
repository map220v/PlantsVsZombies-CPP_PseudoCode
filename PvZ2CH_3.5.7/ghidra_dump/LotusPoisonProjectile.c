// Class: LotusPoisonProjectile


/* LotusPoisonProjectile::~LotusPoisonProjectile() */

void __thiscall LotusPoisonProjectile::~LotusPoisonProjectile(LotusPoisonProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06744690;
  *(undefined ***)(this + 0x10) = &PTR__LotusPoisonProjectile_06744880;
  LotusProjectile::~LotusProjectile((LotusProjectile *)this);
  return;
}


/* non-virtual thunk to LotusPoisonProjectile::~LotusPoisonProjectile() */

void __thiscall LotusPoisonProjectile::~LotusPoisonProjectile(LotusPoisonProjectile *this)

{
  ~LotusPoisonProjectile(this + -0x10);
  return;
}


/* LotusPoisonProjectile::~LotusPoisonProjectile() */

void __thiscall LotusPoisonProjectile::~LotusPoisonProjectile(LotusPoisonProjectile *this)

{
  ~LotusPoisonProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LotusPoisonProjectile::~LotusPoisonProjectile() */

void __thiscall LotusPoisonProjectile::~LotusPoisonProjectile(LotusPoisonProjectile *this)

{
  ~LotusPoisonProjectile(this + -0x10);
  return;
}


/* LotusPoisonProjectile::LotusPoisonProjectile() */

void __thiscall LotusPoisonProjectile::LotusPoisonProjectile(LotusPoisonProjectile *this)

{
  LotusProjectile::LotusProjectile((LotusProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_06744690;
  *(undefined ***)(this + 0x10) = &PTR__LotusPoisonProjectile_06744880;
  return;
}


/* LotusPoisonProjectile::StaticNew() */

LotusPoisonProjectile * LotusPoisonProjectile::StaticNew(void)

{
  LotusPoisonProjectile *this;
  
  this = ::operator_new(0x1a8);
  LotusPoisonProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotusPoisonProjectile::StaticClassInit() */

void LotusPoisonProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"LotusPoisonProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03c013b8,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LotusPoisonProjectile::StaticGetClass() */

long * LotusPoisonProjectile::StaticGetClass(void)

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
  uVar2 = LotusProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"LotusPoisonProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LotusPoisonProjectile::GetClass() const */

long * LotusPoisonProjectile::GetClass(void)

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
  uVar2 = LotusProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"LotusPoisonProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LotusPoisonProjectile::handleImpact(BoardEntity*) */

void __thiscall
LotusPoisonProjectile::handleImpact(LotusPoisonProjectile *this,BoardEntity *param_1)

{
  Zombie *this_00;
  string *psVar1;
  PlantType *this_01;
  RtObject *this_02;
  LotusshooterProps *pLVar2;
  undefined8 uVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) &&
     (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) {
    psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_10,"lotusshooter");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
    std::string::~string(asStack_10);
    nop();
    this_01 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    this_02 = (RtObject *)PlantType::GetProps(this_01);
    pLVar2 = Sexy::RtObject::Cast<LotusshooterProps_const>(this_02);
    if (pLVar2 != (LotusshooterProps *)0x0) {
      uVar3 = Zombie::GetConditionTracker(this_00);
      fVar4 = (float)FUN_03c005b0(*(undefined4 *)(this + 0x180));
      ZombieConditionTracker::SetAdditionalValue
                ((ZombieConditionTracker *)(fVar4 * *(float *)(pLVar2 + 700)),uVar3,0x4f);
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(pLVar2 + 0x2b8),0,this_00,0x4f,1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  LotusProjectile::handleImpact((LotusProjectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

