// Class: LightningReedProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightningReedProps::StaticClassInit() */

void LightningReedProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"LightningReedProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f8ebec,0x2e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LightningReedProps::LightningReedProps() */

void __thiscall LightningReedProps::LightningReedProps(LightningReedProps *this)

{
  StarRateProps::StarRateProps((StarRateProps *)this);
  *(undefined4 *)(this + 0x2c4) = 0x3f000000;
  *(undefined4 *)(this + 0x2c0) = 3;
  *(undefined ***)this = &PTR_GetClass_067a3d40;
  *(undefined4 *)(this + 0x2cc) = 0x41700000;
  *(undefined4 *)(this + 0x2d0) = 0x41a00000;
  *(undefined4 *)(this + 0x2d4) = 0x40000000;
  *(undefined4 *)(this + 0x2c8) = 0x3e19999a;
  *(undefined4 *)(this + 0x2d8) = 0x41200000;
  return;
}


/* LightningReedProps::StaticNew() */

LightningReedProps * LightningReedProps::StaticNew(void)

{
  LightningReedProps *this;
  
  this = ::operator_new(0x2e0);
  LightningReedProps(this);
  return this;
}


/* LightningReedProps::~LightningReedProps() */

void __thiscall LightningReedProps::~LightningReedProps(LightningReedProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a3d40;
  StarRateProps::~StarRateProps((StarRateProps *)this);
  return;
}


/* LightningReedProps::~LightningReedProps() */

void __thiscall LightningReedProps::~LightningReedProps(LightningReedProps *this)

{
  ~LightningReedProps(this);
  AK::FreeHook(this);
  return;
}


/* LightningReedProps::StaticGetClass() */

long * LightningReedProps::StaticGetClass(void)

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
  uVar2 = StarRateProps::StaticGetClass();
  (*pcVar3)(plVar1,"LightningReedProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LightningReedProps::GetClass() const */

long * LightningReedProps::GetClass(void)

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
  uVar2 = StarRateProps::StaticGetClass();
  (*pcVar3)(plVar1,"LightningReedProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

