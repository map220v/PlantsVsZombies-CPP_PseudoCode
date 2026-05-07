// Class: PowerupTypeBeghouledShovel


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerupTypeBeghouledShovel::StaticClassInit() */

void PowerupTypeBeghouledShovel::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerupTypeBeghouledShovel");
    (*pcVar2)(plVar1,asStack_10,FUN_04993fc8,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerupTypeBeghouledShovel::StaticGetClass() */

long * PowerupTypeBeghouledShovel::StaticGetClass(void)

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
  uVar2 = PowerupType::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupTypeBeghouledShovel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupTypeBeghouledShovel::GetClass() const */

long * PowerupTypeBeghouledShovel::GetClass(void)

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
  uVar2 = PowerupType::StaticGetClass();
  (*pcVar3)(plVar1,"PowerupTypeBeghouledShovel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerupTypeBeghouledShovel::PowerupTypeBeghouledShovel() */

void __thiscall
PowerupTypeBeghouledShovel::PowerupTypeBeghouledShovel(PowerupTypeBeghouledShovel *this)

{
  PowerupType::PowerupType((PowerupType *)this);
  *(undefined ***)this = &PTR_GetClass_06919fc0;
  return;
}


/* PowerupTypeBeghouledShovel::StaticNew() */

PowerupTypeBeghouledShovel * PowerupTypeBeghouledShovel::StaticNew(void)

{
  PowerupTypeBeghouledShovel *this;
  
  this = ::operator_new(0x78);
  PowerupTypeBeghouledShovel(this);
  return this;
}


/* PowerupTypeBeghouledShovel::~PowerupTypeBeghouledShovel() */

void __thiscall
PowerupTypeBeghouledShovel::~PowerupTypeBeghouledShovel(PowerupTypeBeghouledShovel *this)

{
  *(undefined ***)this = &PTR_GetClass_06919fc0;
  PowerupType::~PowerupType((PowerupType *)this);
  return;
}


/* PowerupTypeBeghouledShovel::~PowerupTypeBeghouledShovel() */

void __thiscall
PowerupTypeBeghouledShovel::~PowerupTypeBeghouledShovel(PowerupTypeBeghouledShovel *this)

{
  ~PowerupTypeBeghouledShovel(this);
  AK::FreeHook(this);
  return;
}

