// Class: GeishaPlantfoodSplitProjectile


/* GeishaPlantfoodSplitProjectile::~GeishaPlantfoodSplitProjectile() */

void __thiscall
GeishaPlantfoodSplitProjectile::~GeishaPlantfoodSplitProjectile
          (GeishaPlantfoodSplitProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0674c0c0;
  *(undefined ***)(this + 0x10) = &PTR__GeishaPlantfoodSplitProjectile_0674c2c8;
  GeishaProjectile::~GeishaProjectile((GeishaProjectile *)this);
  return;
}


/* non-virtual thunk to GeishaPlantfoodSplitProjectile::~GeishaPlantfoodSplitProjectile() */

void __thiscall
GeishaPlantfoodSplitProjectile::~GeishaPlantfoodSplitProjectile
          (GeishaPlantfoodSplitProjectile *this)

{
  ~GeishaPlantfoodSplitProjectile(this + -0x10);
  return;
}


/* GeishaPlantfoodSplitProjectile::~GeishaPlantfoodSplitProjectile() */

void __thiscall
GeishaPlantfoodSplitProjectile::~GeishaPlantfoodSplitProjectile
          (GeishaPlantfoodSplitProjectile *this)

{
  ~GeishaPlantfoodSplitProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GeishaPlantfoodSplitProjectile::~GeishaPlantfoodSplitProjectile() */

void __thiscall
GeishaPlantfoodSplitProjectile::~GeishaPlantfoodSplitProjectile
          (GeishaPlantfoodSplitProjectile *this)

{
  ~GeishaPlantfoodSplitProjectile(this + -0x10);
  return;
}


/* GeishaPlantfoodSplitProjectile::GeishaPlantfoodSplitProjectile() */

void __thiscall
GeishaPlantfoodSplitProjectile::GeishaPlantfoodSplitProjectile(GeishaPlantfoodSplitProjectile *this)

{
  GeishaProjectile::GeishaProjectile((GeishaProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_0674c0c0;
  *(undefined ***)(this + 0x10) = &PTR__GeishaPlantfoodSplitProjectile_0674c2c8;
  return;
}


/* GeishaPlantfoodSplitProjectile::StaticNew() */

GeishaPlantfoodSplitProjectile * GeishaPlantfoodSplitProjectile::StaticNew(void)

{
  GeishaPlantfoodSplitProjectile *this;
  
  this = ::operator_new(0x1f8);
  GeishaPlantfoodSplitProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaPlantfoodSplitProjectile::StaticClassInit() */

void GeishaPlantfoodSplitProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeishaPlantfoodSplitProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03c2e270,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeishaPlantfoodSplitProjectile::StaticGetClass() */

long * GeishaPlantfoodSplitProjectile::StaticGetClass(void)

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
  uVar2 = GeishaProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"GeishaPlantfoodSplitProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeishaPlantfoodSplitProjectile::GetClass() const */

long * GeishaPlantfoodSplitProjectile::GetClass(void)

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
  uVar2 = GeishaProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"GeishaPlantfoodSplitProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

