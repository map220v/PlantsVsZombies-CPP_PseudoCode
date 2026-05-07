// Class: EggplantStormShuriken


/* EggplantStormShuriken::~EggplantStormShuriken() */

void __thiscall EggplantStormShuriken::~EggplantStormShuriken(EggplantStormShuriken *this)

{
  *(undefined ***)this = &PTR_GetClass_0674a910;
  *(undefined ***)(this + 0x10) = &PTR__EggplantStormShuriken_0674ab10;
  EggplantShuriken::~EggplantShuriken((EggplantShuriken *)this);
  return;
}


/* non-virtual thunk to EggplantStormShuriken::~EggplantStormShuriken() */

void __thiscall EggplantStormShuriken::~EggplantStormShuriken(EggplantStormShuriken *this)

{
  ~EggplantStormShuriken(this + -0x10);
  return;
}


/* EggplantStormShuriken::~EggplantStormShuriken() */

void __thiscall EggplantStormShuriken::~EggplantStormShuriken(EggplantStormShuriken *this)

{
  ~EggplantStormShuriken(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EggplantStormShuriken::~EggplantStormShuriken() */

void __thiscall EggplantStormShuriken::~EggplantStormShuriken(EggplantStormShuriken *this)

{
  ~EggplantStormShuriken(this + -0x10);
  return;
}


/* EggplantStormShuriken::EggplantStormShuriken() */

void __thiscall EggplantStormShuriken::EggplantStormShuriken(EggplantStormShuriken *this)

{
  EggplantShuriken::EggplantShuriken((EggplantShuriken *)this);
  *(undefined ***)this = &PTR_GetClass_0674a910;
  *(undefined ***)(this + 0x10) = &PTR__EggplantStormShuriken_0674ab10;
  return;
}


/* EggplantStormShuriken::StaticNew() */

EggplantStormShuriken * EggplantStormShuriken::StaticNew(void)

{
  EggplantStormShuriken *this;
  
  this = ::operator_new(0x1f0);
  EggplantStormShuriken(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EggplantStormShuriken::StaticClassInit() */

void EggplantStormShuriken::StaticClassInit(void)

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
    std::string::string(asStack_10,"EggplantStormShuriken");
    (*pcVar2)(plVar1,asStack_10,FUN_03c2bca4,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EggplantStormShuriken::StaticGetClass() */

long * EggplantStormShuriken::StaticGetClass(void)

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
  uVar2 = EggplantShuriken::StaticGetClass();
  (*pcVar3)(plVar1,"EggplantStormShuriken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EggplantStormShuriken::GetClass() const */

long * EggplantStormShuriken::GetClass(void)

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
  uVar2 = EggplantShuriken::StaticGetClass();
  (*pcVar3)(plVar1,"EggplantStormShuriken",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EggplantStormShuriken::OnCollideEntity(BoardEntity*) */

void __thiscall
EggplantStormShuriken::OnCollideEntity(EggplantStormShuriken *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  RtObject *this_00;
  Zombie *this_01;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    ToolPacketData::GetProps();
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    this_01 = Sexy::RtObject::Cast<Zombie>(this_00);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (((this_01 != (Zombie *)0x0) && (iVar2 = Zombie::GetSizeType(this_01), iVar2 == 0)) &&
       (cVar1 = (**(code **)(*(long *)this_01 + 0x3f0))(this_01), cVar1 != '\0')) {
      iVar2 = Sexy::Rand(600);
      EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,1000.0,(float)iVar2,0.0);
      Zombie::FlickOff(this_01,(SexyVector3 *)aRStack_18);
      goto LAB_03c2910c;
    }
  }
  Projectile::OnCollideEntity((Projectile *)this,param_1);
LAB_03c2910c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EggplantStormShuriken::onFlyBackDone(BoardEntity*) */

void EggplantStormShuriken::onFlyBackDone(BoardEntity *param_1)

{
  long lVar1;
  long extraout_x0;
  PlantEggplantNinja *this;
  PlantEggplantNinja *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = Projectile::GetInstigator((Projectile *)param_1);
  if (lVar1 != 0) {
    Projectile::GetInstigator((Projectile *)param_1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (extraout_x0 != 0) {
      nop();
      PlantEggplantNinja::ResetShurikenSlot(this,*(uint *)(param_1 + 0x1a8));
      nop();
      PlantEggplantNinja::PlayShurikenBack(this_00,true);
    }
  }
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

