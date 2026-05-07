// Class: ConvallariaChemistProjectileProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvallariaChemistProjectileProps::StaticClassInit() */

void ConvallariaChemistProjectileProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PoisonInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03c058ac,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ConvallariaChemistProjectileProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03c095d0,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ConvallariaChemistProjectileProps::StaticGetClass() */

long * ConvallariaChemistProjectileProps::StaticGetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ConvallariaChemistProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ConvallariaChemistProjectileProps::GetClass() const */

long * ConvallariaChemistProjectileProps::GetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ConvallariaChemistProjectileProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ConvallariaChemistProjectileProps::~ConvallariaChemistProjectileProps() */

void __thiscall
ConvallariaChemistProjectileProps::~ConvallariaChemistProjectileProps
          (ConvallariaChemistProjectileProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06745140;
  std::string::~string((string *)(this + 0x208));
  std::vector<PoisonInfo,std::allocator<PoisonInfo>>::~vector
            ((vector<PoisonInfo,std::allocator<PoisonInfo>> *)(this + 0x1f0));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* ConvallariaChemistProjectileProps::~ConvallariaChemistProjectileProps() */

void __thiscall
ConvallariaChemistProjectileProps::~ConvallariaChemistProjectileProps
          (ConvallariaChemistProjectileProps *this)

{
  ~ConvallariaChemistProjectileProps(this);
  AK::FreeHook(this);
  return;
}


/* ConvallariaChemistProjectileProps::ConvallariaChemistProjectileProps() */

void __thiscall
ConvallariaChemistProjectileProps::ConvallariaChemistProjectileProps
          (ConvallariaChemistProjectileProps *this)

{
  size_t in_x2;
  
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06745140;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1f0));
  Set8BytesTo0((string *)(this + 0x208));
  *(undefined4 *)(this + 0x1e8) = 0x3f800000;
  *(undefined4 *)(this + 0x1e0) = 0x40400000;
  *(undefined4 *)(this + 0x1e4) = 0x40400000;
  std::string::append((string *)(this + 0x208),"venom",in_x2);
  *(undefined4 *)(this + 0x210) = 0x3f800000;
  *(undefined4 *)(this + 0x214) = 0x3f800000;
  return;
}


/* ConvallariaChemistProjectileProps::StaticNew() */

ConvallariaChemistProjectileProps * ConvallariaChemistProjectileProps::StaticNew(void)

{
  ConvallariaChemistProjectileProps *this;
  
  this = ::operator_new(0x218);
  ConvallariaChemistProjectileProps(this);
  return this;
}

