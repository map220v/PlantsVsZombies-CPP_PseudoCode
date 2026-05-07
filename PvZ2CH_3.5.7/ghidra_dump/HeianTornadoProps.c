// Class: HeianTornadoProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeianTornadoProps::StaticClassInit() */

void HeianTornadoProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeianTornadoProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03d2cd30,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeianTornadoProps::StaticGetClass() */

long * HeianTornadoProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeianTornadoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianTornadoProps::GetClass() const */

long * HeianTornadoProps::GetClass(void)

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
  (*pcVar3)(plVar1,"HeianTornadoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeianTornadoProps::~HeianTornadoProps() */

void __thiscall HeianTornadoProps::~HeianTornadoProps(HeianTornadoProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06767c70;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* HeianTornadoProps::~HeianTornadoProps() */

void __thiscall HeianTornadoProps::~HeianTornadoProps(HeianTornadoProps *this)

{
  ~HeianTornadoProps(this);
  AK::FreeHook(this);
  return;
}


/* HeianTornadoProps::HeianTornadoProps() */

void __thiscall HeianTornadoProps::HeianTornadoProps(HeianTornadoProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined ***)this = &PTR_GetClass_06767c70;
  *(undefined4 *)(this + 0x1e4) = 0x43820000;
  return;
}


/* HeianTornadoProps::StaticNew() */

HeianTornadoProps * HeianTornadoProps::StaticNew(void)

{
  HeianTornadoProps *this;
  
  this = ::operator_new(0x1e8);
  HeianTornadoProps(this);
  return this;
}

