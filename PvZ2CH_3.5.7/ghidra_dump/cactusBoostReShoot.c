// Class: cactusBoostReShoot


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cactusBoostReShoot::StaticClassInit() */

void cactusBoostReShoot::StaticClassInit(void)

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
    std::string::string(asStack_10,"cactusBoostReShoot");
    (*pcVar2)(plVar1,asStack_10,FUN_043b070c,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* cactusBoostReShoot::StaticGetClass() */

long * cactusBoostReShoot::StaticGetClass(void)

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
  uVar2 = PlantNewAvatar::StaticGetClass();
  (*pcVar3)(plVar1,"cactusBoostReShoot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* cactusBoostReShoot::GetClass() const */

long * cactusBoostReShoot::GetClass(void)

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
  uVar2 = PlantNewAvatar::StaticGetClass();
  (*pcVar3)(plVar1,"cactusBoostReShoot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cactusBoostReShoot::cactusBoostReShoot() */

void __thiscall cactusBoostReShoot::cactusBoostReShoot(cactusBoostReShoot *this)

{
  undefined4 uVar1;
  
  PlantNewAvatar::PlantNewAvatar((PlantNewAvatar *)this);
  uVar1 = _FUN_043b0b74;
  *(undefined ***)this = &PTR_GetClass_06841700;
  *(undefined4 *)(this + 100) = uVar1;
  return;
}


/* cactusBoostReShoot::StaticNew() */

cactusBoostReShoot * cactusBoostReShoot::StaticNew(void)

{
  cactusBoostReShoot *this;
  
  this = ::operator_new(0x68);
  cactusBoostReShoot(this);
  return this;
}


/* cactusBoostReShoot::~cactusBoostReShoot() */

void __thiscall cactusBoostReShoot::~cactusBoostReShoot(cactusBoostReShoot *this)

{
  *(undefined ***)this = &PTR_GetClass_06841700;
  PlantNewAvatar::~PlantNewAvatar((PlantNewAvatar *)this);
  return;
}


/* cactusBoostReShoot::~cactusBoostReShoot() */

void __thiscall cactusBoostReShoot::~cactusBoostReShoot(cactusBoostReShoot *this)

{
  ~cactusBoostReShoot(this);
  AK::FreeHook(this);
  return;
}

