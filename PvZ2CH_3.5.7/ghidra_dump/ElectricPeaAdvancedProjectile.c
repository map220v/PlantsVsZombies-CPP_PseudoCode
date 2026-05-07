// Class: ElectricPeaAdvancedProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeaAdvancedProjectile::StaticClassInit() */

void ElectricPeaAdvancedProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElectricPeaAdvancedProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03c106a4,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricPeaAdvancedProjectile::StaticGetClass() */

long * ElectricPeaAdvancedProjectile::StaticGetClass(void)

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
  uVar2 = ElectricPeaProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"ElectricPeaAdvancedProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricPeaAdvancedProjectile::GetClass() const */

long * ElectricPeaAdvancedProjectile::GetClass(void)

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
  uVar2 = ElectricPeaProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"ElectricPeaAdvancedProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricPeaAdvancedProjectile::handleImpact(BoardEntity*) */

void __thiscall
ElectricPeaAdvancedProjectile::handleImpact
          (ElectricPeaAdvancedProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  Zombie *this_00;
  long extraout_x0;
  ZombieConditionsStruct *pZVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  PVPZoneData aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (BoardEntity *)0x0) &&
      (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) &&
     (cVar1 = GeraniiFencerSubsystem::shouldStun((GeraniiFencerSubsystem *)this,this_00),
     cVar1 != '\0')) {
    Projectile::GetProps((Projectile *)this);
    nop();
                    /* WARNING: Load size is inaccurate */
    pZVar2._0_4_ = *(ZombieConditionsStruct **)(extraout_x0 + 0x1e0);
    PVPSeedBankModule::GetPVPSkillEnergyUI();
    ZombieConditionsStruct::ZombieConditionsStruct(pZVar2._0_4_,aPStack_20,0x18,aRStack_28);
    Zombie::ApplyCondition(this_00,(ZombieConditionsStruct *)aPStack_20);
    PVPZoneData::~PVPZoneData(aPStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  }
  Projectile::handleImpact((Projectile *)this,param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricPeaAdvancedProjectile::ElectricPeaAdvancedProjectile() */

void __thiscall
ElectricPeaAdvancedProjectile::ElectricPeaAdvancedProjectile(ElectricPeaAdvancedProjectile *this)

{
  ElectricPeaProjectile::ElectricPeaProjectile((ElectricPeaProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_06747630;
  *(undefined ***)(this + 0x10) = &PTR__ElectricPeaAdvancedProjectile_06747820;
  return;
}


/* ElectricPeaAdvancedProjectile::StaticNew() */

ElectricPeaAdvancedProjectile * ElectricPeaAdvancedProjectile::StaticNew(void)

{
  ElectricPeaAdvancedProjectile *this;
  
  this = ::operator_new(0x1e8);
  ElectricPeaAdvancedProjectile(this);
  return this;
}


/* ElectricPeaAdvancedProjectile::~ElectricPeaAdvancedProjectile() */

void __thiscall
ElectricPeaAdvancedProjectile::~ElectricPeaAdvancedProjectile(ElectricPeaAdvancedProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06747630;
  *(undefined ***)(this + 0x10) = &PTR__ElectricPeaAdvancedProjectile_06747820;
  ElectricPeaProjectile::~ElectricPeaProjectile((ElectricPeaProjectile *)this);
  return;
}


/* non-virtual thunk to ElectricPeaAdvancedProjectile::~ElectricPeaAdvancedProjectile() */

void __thiscall
ElectricPeaAdvancedProjectile::~ElectricPeaAdvancedProjectile(ElectricPeaAdvancedProjectile *this)

{
  ~ElectricPeaAdvancedProjectile(this + -0x10);
  return;
}


/* ElectricPeaAdvancedProjectile::~ElectricPeaAdvancedProjectile() */

void __thiscall
ElectricPeaAdvancedProjectile::~ElectricPeaAdvancedProjectile(ElectricPeaAdvancedProjectile *this)

{
  ~ElectricPeaAdvancedProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ElectricPeaAdvancedProjectile::~ElectricPeaAdvancedProjectile() */

void __thiscall
ElectricPeaAdvancedProjectile::~ElectricPeaAdvancedProjectile(ElectricPeaAdvancedProjectile *this)

{
  ~ElectricPeaAdvancedProjectile(this + -0x10);
  return;
}

