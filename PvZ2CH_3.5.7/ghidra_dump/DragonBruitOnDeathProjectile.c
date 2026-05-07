// Class: DragonBruitOnDeathProjectile


/* DragonBruitOnDeathProjectile::~DragonBruitOnDeathProjectile() */

void __thiscall
DragonBruitOnDeathProjectile::~DragonBruitOnDeathProjectile(DragonBruitOnDeathProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069b7780;
  *(undefined ***)(this + 0x10) = &PTR__DragonBruitOnDeathProjectile_069b7970;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to DragonBruitOnDeathProjectile::~DragonBruitOnDeathProjectile() */

void __thiscall
DragonBruitOnDeathProjectile::~DragonBruitOnDeathProjectile(DragonBruitOnDeathProjectile *this)

{
  ~DragonBruitOnDeathProjectile(this + -0x10);
  return;
}


/* DragonBruitOnDeathProjectile::~DragonBruitOnDeathProjectile() */

void __thiscall
DragonBruitOnDeathProjectile::~DragonBruitOnDeathProjectile(DragonBruitOnDeathProjectile *this)

{
  ~DragonBruitOnDeathProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to DragonBruitOnDeathProjectile::~DragonBruitOnDeathProjectile() */

void __thiscall
DragonBruitOnDeathProjectile::~DragonBruitOnDeathProjectile(DragonBruitOnDeathProjectile *this)

{
  ~DragonBruitOnDeathProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonBruitOnDeathProjectile::StaticClassInit() */

void DragonBruitOnDeathProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"DragonBruitOnDeathProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d791cc,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DragonBruitOnDeathProjectile::StaticGetClass() */

long * DragonBruitOnDeathProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DragonBruitOnDeathProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonBruitOnDeathProjectile::GetClass() const */

long * DragonBruitOnDeathProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"DragonBruitOnDeathProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonBruitOnDeathProjectile::InitializeValues(Sexy::Point, int, bool, DragonBruitState) */

void __thiscall
DragonBruitOnDeathProjectile::InitializeValues
          (DragonBruitOnDeathProjectile *this,undefined8 *param_2,undefined4 param_3,
          DragonBruitOnDeathProjectile param_4,undefined4 param_5)

{
  *(undefined8 *)(this + 0x1a8) = *param_2;
  *(undefined4 *)(this + 0x1b0) = param_3;
  this[0x1b8] = param_4;
  *(undefined4 *)(this + 0x1bc) = param_5;
  return;
}


/* DragonBruitOnDeathProjectile::DragonBruitOnDeathProjectile() */

void __thiscall
DragonBruitOnDeathProjectile::DragonBruitOnDeathProjectile(DragonBruitOnDeathProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_069b7780;
  *(undefined ***)(this + 0x10) = &PTR__DragonBruitOnDeathProjectile_069b7970;
  Sexy::Point::Point((Point *)(this + 0x1a8));
  this[0x1b8] = (DragonBruitOnDeathProjectile)0x0;
  *(undefined4 *)(this + 0x1b0) = 1;
  return;
}


/* DragonBruitOnDeathProjectile::StaticNew() */

DragonBruitOnDeathProjectile * DragonBruitOnDeathProjectile::StaticNew(void)

{
  DragonBruitOnDeathProjectile *this;
  
  this = ::operator_new(0x1c0);
  DragonBruitOnDeathProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonBruitOnDeathProjectile::OnCollideGround() */

void __thiscall DragonBruitOnDeathProjectile::OnCollideGround(DragonBruitOnDeathProjectile *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  string *psVar5;
  long lVar6;
  PlantDragonBabyBruit *pPVar7;
  Board *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  std::string::string(asStack_10,"dragonbabybruit");
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
  cVar3 = Board::CanPlantAt(this_00,this + 0x1a8,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  if (cVar3 != '\0') {
    if (this[0x1b8] == (DragonBruitOnDeathProjectile)0x0) {
      iVar1 = *(int *)(this + 0x1ac);
      iVar2 = *(int *)(this + 0x1a8);
      std::string::string(asStack_10,"dragonbabybruit");
      lVar6 = Board::AddPlant(this_00,iVar2,iVar1,asStack_10,*(int *)(this + 0x1b0),false,false,true
                              ,false);
      std::string::~string(asStack_10);
      nop();
      pPVar7 = Sexy::RtObject::Cast<PlantDragonBabyBruit>(*(RtObject **)(lVar6 + 0xa8));
      PlantDragonBabyBruit::setTransformState(pPVar7,*(undefined4 *)(this + 0x1bc));
    }
    else {
      iVar1 = *(int *)(this + 0x1ac);
      iVar2 = *(int *)(this + 0x1a8);
      std::string::string(asStack_10,"dragonbabybruit");
      lVar6 = Board::AddPlant(this_00,iVar2,iVar1,asStack_10,*(int *)(this + 0x1b0),false,false,true
                              ,false);
      std::string::~string(asStack_10);
      nop();
      pPVar7 = Sexy::RtObject::Cast<PlantDragonBabyBruit>(*(RtObject **)(lVar6 + 0xa8));
      PlantDragonBabyBruit::setTransformState(pPVar7,0);
    }
  }
  uVar4 = Projectile::OnCollideGround((Projectile *)this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

