// Class: HeliconiaGunnerBombProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeliconiaGunnerBombProjectileProps::StaticClassInit() */

void HeliconiaGunnerBombProjectileProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeliconiaGunnerBombProjectileProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d31d1c,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeliconiaGunnerBombProjectileProps::StaticGetClass() */

long * HeliconiaGunnerBombProjectileProps::StaticGetClass(void)

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
  uVar2 = NekotailStabProps::StaticGetClass();
  (*pcVar3)(plVar1,"HeliconiaGunnerBombProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeliconiaGunnerBombProjectileProps::GetClass() const */

long * HeliconiaGunnerBombProjectileProps::GetClass(void)

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
  uVar2 = NekotailStabProps::StaticGetClass();
  (*pcVar3)(plVar1,"HeliconiaGunnerBombProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeliconiaGunnerBombProjectileProps::~HeliconiaGunnerBombProjectileProps() */

void __thiscall
HeliconiaGunnerBombProjectileProps::~HeliconiaGunnerBombProjectileProps
          (HeliconiaGunnerBombProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069acd40;
  NekotailStabProps::~NekotailStabProps((NekotailStabProps *)this);
  return;
}


/* HeliconiaGunnerBombProjectileProps::~HeliconiaGunnerBombProjectileProps() */

void __thiscall
HeliconiaGunnerBombProjectileProps::~HeliconiaGunnerBombProjectileProps
          (HeliconiaGunnerBombProjectileProps *this)

{
  ~HeliconiaGunnerBombProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* HeliconiaGunnerBombProjectileProps::HeliconiaGunnerBombProjectileProps() */

void __thiscall
HeliconiaGunnerBombProjectileProps::HeliconiaGunnerBombProjectileProps
          (HeliconiaGunnerBombProjectileProps *this)

{
  NekotailStabProps::NekotailStabProps((NekotailStabProps *)this);
  *(undefined ***)this = &PTR_GetClass_069acd40;
  return;
}


/* HeliconiaGunnerBombProjectileProps::StaticNew() */

HeliconiaGunnerBombProjectileProps * HeliconiaGunnerBombProjectileProps::StaticNew(void)

{
  HeliconiaGunnerBombProjectileProps *this;
  
  this = ::operator_new(0x1e8);
  HeliconiaGunnerBombProjectileProps(this);
  return this;
}

