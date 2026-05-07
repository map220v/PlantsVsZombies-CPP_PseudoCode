// Class: CaulipowerProps


/* CaulipowerProps::GetPacketCoolDownTime(int) const */

float __thiscall CaulipowerProps::GetPacketCoolDownTime(CaulipowerProps *this,int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x30);
  if (param_1 == 2) {
    return fVar1 - 5.0;
  }
  if (param_1 < 3) {
    return fVar1;
  }
  return fVar1 - 10.0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CaulipowerProps::StaticClassInit() */

void CaulipowerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"CaulipowerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03bcde50,0x310,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CaulipowerProps::StaticGetClass() */

long * CaulipowerProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"CaulipowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CaulipowerProps::GetClass() const */

long * CaulipowerProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"CaulipowerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CaulipowerProps::CaulipowerProps() */

void __thiscall CaulipowerProps::CaulipowerProps(CaulipowerProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0673b190;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2e0));
  *(undefined4 *)(this + 0x2cc) = 1;
  *(undefined4 *)(this + 0x2d4) = 1;
  *(undefined4 *)(this + 700) = 0x40000000;
  *(undefined4 *)(this + 0x2b8) = 3;
  *(undefined4 *)(this + 0x2d0) = 0x40000000;
  *(undefined4 *)(this + 0x2d8) = 1;
  *(undefined4 *)(this + 0x2dc) = 1;
  *(undefined4 *)(this + 0x2c0) = 0x42c80000;
  *(undefined4 *)(this + 0x2c4) = 0x42c80000;
  *(undefined4 *)(this + 0x2c8) = 0x3f800000;
  *(undefined4 *)(this + 0x308) = 0x3e800000;
  return;
}


/* CaulipowerProps::StaticNew() */

CaulipowerProps * CaulipowerProps::StaticNew(void)

{
  CaulipowerProps *this;
  
  this = ::operator_new(0x310);
  CaulipowerProps(this);
  return this;
}


/* CaulipowerProps::~CaulipowerProps() */

void __thiscall CaulipowerProps::~CaulipowerProps(CaulipowerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0673b190;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2e0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* CaulipowerProps::~CaulipowerProps() */

void __thiscall CaulipowerProps::~CaulipowerProps(CaulipowerProps *this)

{
  ~CaulipowerProps(this);
  AK::FreeHook(this);
  return;
}

