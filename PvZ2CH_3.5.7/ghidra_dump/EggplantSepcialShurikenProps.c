// Class: EggplantSepcialShurikenProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EggplantSepcialShurikenProps::StaticClassInit() */

void EggplantSepcialShurikenProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"EggplantSepcialShurikenProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c2861c,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EggplantSepcialShurikenProps::StaticGetClass() */

long * EggplantSepcialShurikenProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EggplantSepcialShurikenProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EggplantSepcialShurikenProps::GetClass() const */

long * EggplantSepcialShurikenProps::GetClass(void)

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
  (*pcVar3)(plVar1,"EggplantSepcialShurikenProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EggplantSepcialShurikenProps::~EggplantSepcialShurikenProps() */

void __thiscall
EggplantSepcialShurikenProps::~EggplantSepcialShurikenProps(EggplantSepcialShurikenProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0674afa0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* EggplantSepcialShurikenProps::~EggplantSepcialShurikenProps() */

void __thiscall
EggplantSepcialShurikenProps::~EggplantSepcialShurikenProps(EggplantSepcialShurikenProps *this)

{
  ~EggplantSepcialShurikenProps(this);
  AK::FreeHook(this);
  return;
}


/* EggplantSepcialShurikenProps::EggplantSepcialShurikenProps() */

void __thiscall
EggplantSepcialShurikenProps::EggplantSepcialShurikenProps(EggplantSepcialShurikenProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0674afa0;
  return;
}


/* EggplantSepcialShurikenProps::StaticNew() */

EggplantSepcialShurikenProps * EggplantSepcialShurikenProps::StaticNew(void)

{
  EggplantSepcialShurikenProps *this;
  
  this = ::operator_new(0x1e8);
  EggplantSepcialShurikenProps(this);
  return this;
}

