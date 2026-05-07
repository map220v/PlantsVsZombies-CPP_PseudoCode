// Class: PlantCrackerPlantfoodProjectileAvatar


/* PlantCrackerPlantfoodProjectileAvatar::GetFlower() */

void __thiscall
PlantCrackerPlantfoodProjectileAvatar::GetFlower(PlantCrackerPlantfoodProjectileAvatar *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrackerPlantfoodProjectileAvatar::StaticClassInit() */

void PlantCrackerPlantfoodProjectileAvatar::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCrackerPlantfoodProjectileAvatar");
    (*pcVar2)(plVar1,asStack_10,FUN_040a4964,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCrackerPlantfoodProjectileAvatar::StaticGetClass() */

long * PlantCrackerPlantfoodProjectileAvatar::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantCrackerPlantfoodProjectileAvatar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCrackerPlantfoodProjectileAvatar::GetClass() const */

long * PlantCrackerPlantfoodProjectileAvatar::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantCrackerPlantfoodProjectileAvatar",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCrackerPlantfoodProjectileAvatar::PlantCrackerPlantfoodProjectileAvatar() */

void __thiscall
PlantCrackerPlantfoodProjectileAvatar::PlantCrackerPlantfoodProjectileAvatar
          (PlantCrackerPlantfoodProjectileAvatar *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067d1360;
  *(undefined ***)(this + 0x10) = &PTR__PlantCrackerPlantfoodProjectileAvatar_067d1550;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  return;
}


/* PlantCrackerPlantfoodProjectileAvatar::StaticNew() */

PlantCrackerPlantfoodProjectileAvatar * PlantCrackerPlantfoodProjectileAvatar::StaticNew(void)

{
  PlantCrackerPlantfoodProjectileAvatar *this;
  
  this = ::operator_new(0x1b0);
  PlantCrackerPlantfoodProjectileAvatar(this);
  return this;
}


/* PlantCrackerPlantfoodProjectileAvatar::~PlantCrackerPlantfoodProjectileAvatar() */

void __thiscall
PlantCrackerPlantfoodProjectileAvatar::~PlantCrackerPlantfoodProjectileAvatar
          (PlantCrackerPlantfoodProjectileAvatar *this)

{
  *(undefined ***)this = &PTR_GetClass_067d1360;
  *(undefined ***)(this + 0x10) = &PTR__PlantCrackerPlantfoodProjectileAvatar_067d1550;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to
   PlantCrackerPlantfoodProjectileAvatar::~PlantCrackerPlantfoodProjectileAvatar() */

void __thiscall
PlantCrackerPlantfoodProjectileAvatar::~PlantCrackerPlantfoodProjectileAvatar
          (PlantCrackerPlantfoodProjectileAvatar *this)

{
  ~PlantCrackerPlantfoodProjectileAvatar(this + -0x10);
  return;
}


/* PlantCrackerPlantfoodProjectileAvatar::~PlantCrackerPlantfoodProjectileAvatar() */

void __thiscall
PlantCrackerPlantfoodProjectileAvatar::~PlantCrackerPlantfoodProjectileAvatar
          (PlantCrackerPlantfoodProjectileAvatar *this)

{
  ~PlantCrackerPlantfoodProjectileAvatar(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   PlantCrackerPlantfoodProjectileAvatar::~PlantCrackerPlantfoodProjectileAvatar() */

void __thiscall
PlantCrackerPlantfoodProjectileAvatar::~PlantCrackerPlantfoodProjectileAvatar
          (PlantCrackerPlantfoodProjectileAvatar *this)

{
  ~PlantCrackerPlantfoodProjectileAvatar(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCrackerPlantfoodProjectileAvatar::onProjectileInitialized() */

void __thiscall
PlantCrackerPlantfoodProjectileAvatar::onProjectileInitialized
          (PlantCrackerPlantfoodProjectileAvatar *this)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  std::string::string(asStack_40,"attack");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

