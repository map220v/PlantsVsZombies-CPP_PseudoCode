// Class: PlantTypeIceburg


/* PlantTypeIceburg::GetCost(PlantAvatarType) const */

undefined4 PlantTypeIceburg::GetCost(void)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = PlantType::GetCost();
  cVar1 = WhackZombieUtils::IsPlayingWhackZombie();
  if (cVar1 != '\0') {
    uVar2 = 0x4b;
  }
  return uVar2;
}


/* PlantTypeIceburg::PlantTypeIceburg() */

void __thiscall PlantTypeIceburg::PlantTypeIceburg(PlantTypeIceburg *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_067bb2f0;
  return;
}


/* PlantTypeIceburg::StaticNew() */

PlantTypeIceburg * PlantTypeIceburg::StaticNew(void)

{
  PlantTypeIceburg *this;
  
  this = ::operator_new(0x138);
  PlantTypeIceburg(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTypeIceburg::StaticClassInit() */

void PlantTypeIceburg::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTypeIceburg");
    (*pcVar2)(plVar1,asStack_10,FUN_04034eb8,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTypeIceburg::StaticGetClass() */

long * PlantTypeIceburg::StaticGetClass(void)

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
  uVar2 = PlantType::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypeIceburg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTypeIceburg::GetClass() const */

long * PlantTypeIceburg::GetClass(void)

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
  uVar2 = PlantType::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypeIceburg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTypeIceburg::~PlantTypeIceburg() */

void __thiscall PlantTypeIceburg::~PlantTypeIceburg(PlantTypeIceburg *this)

{
  *(undefined ***)this = &PTR_GetClass_067bb2f0;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeIceburg::~PlantTypeIceburg() */

void __thiscall PlantTypeIceburg::~PlantTypeIceburg(PlantTypeIceburg *this)

{
  ~PlantTypeIceburg(this);
  AK::FreeHook(this);
  return;
}

