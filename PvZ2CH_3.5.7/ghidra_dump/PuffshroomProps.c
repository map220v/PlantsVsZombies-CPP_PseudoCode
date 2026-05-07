// Class: PuffshroomProps


/* PuffshroomProps::GetPacketCoolDownTime(int) const */

float __thiscall PuffshroomProps::GetPacketCoolDownTime(PuffshroomProps *this,int param_1)

{
  if (param_1 == 2) {
    return *(float *)(this + 0x2d0) * *(float *)(this + 0x30);
  }
  if (param_1 < 3) {
    return *(float *)(this + 0x30);
  }
  return *(float *)(this + 0x2d4) * *(float *)(this + 0x30);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PuffshroomProps::StaticClassInit() */

void PuffshroomProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PuffshroomProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f94554,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PuffshroomProps::PuffshroomProps() */

void __thiscall PuffshroomProps::PuffshroomProps(PuffshroomProps *this)

{
  undefined4 uVar1;
  
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 1;
  *(undefined ***)this = &PTR_GetClass_067a47e0;
  uVar1 = PVZ_EOT();
  this[0x2cc] = (PuffshroomProps)0x0;
  *(undefined4 *)(this + 700) = uVar1;
  *(undefined4 *)(this + 0x2c0) = 0x40a00000;
  *(undefined4 *)(this + 0x2c8) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x2d0) = 0x3f800000;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined4 *)(this + 0x2d4) = 0x3f800000;
  return;
}


/* PuffshroomProps::StaticNew() */

PuffshroomProps * PuffshroomProps::StaticNew(void)

{
  PuffshroomProps *this;
  
  this = ::operator_new(0x2d8);
  PuffshroomProps(this);
  return this;
}


/* PuffshroomProps::~PuffshroomProps() */

void __thiscall PuffshroomProps::~PuffshroomProps(PuffshroomProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a47e0;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PuffshroomProps::~PuffshroomProps() */

void __thiscall PuffshroomProps::~PuffshroomProps(PuffshroomProps *this)

{
  ~PuffshroomProps(this);
  AK::FreeHook(this);
  return;
}


/* PuffshroomProps::StaticGetClass() */

long * PuffshroomProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PuffshroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PuffshroomProps::GetClass() const */

long * PuffshroomProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PuffshroomProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

