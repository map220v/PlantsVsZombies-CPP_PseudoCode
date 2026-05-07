// Class: DragonRoarProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DragonRoarProps::StaticClassInit() */

void DragonRoarProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DragonRoarProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0418a6c0,0x310,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DragonRoarProps::StaticGetClass() */

long * DragonRoarProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DragonRoarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonRoarProps::GetClass() const */

long * DragonRoarProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DragonRoarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DragonRoarProps::DragonRoarProps() */

void __thiscall DragonRoarProps::DragonRoarProps(DragonRoarProps *this)

{
  StarRateProps::StarRateProps((StarRateProps *)this);
  *(undefined4 *)(this + 0x2c0) = 5;
  *(undefined ***)this = &PTR_GetClass_067fa730;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c8));
  *(undefined4 *)(this + 0x2e4) = 0x40a00000;
  *(undefined4 *)(this + 0x2e8) = 0x40000000;
  *(undefined4 *)(this + 0x2e0) = 0x42c80000;
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x2ec),4.0,2.0);
  *(undefined4 *)(this + 0x2fc) = 0x42c80000;
  *(undefined4 *)(this + 0x304) = 0x3f000000;
  *(undefined4 *)(this + 0x2f4) = 0x3ecccccd;
  *(undefined4 *)(this + 0x308) = 0x40400000;
  *(undefined4 *)(this + 0x2f8) = 0x3e4ccccd;
  *(undefined4 *)(this + 0x300) = 0x42480000;
  return;
}


/* DragonRoarProps::StaticNew() */

DragonRoarProps * DragonRoarProps::StaticNew(void)

{
  DragonRoarProps *this;
  
  this = ::operator_new(0x310);
  DragonRoarProps(this);
  return this;
}


/* DragonRoarProps::~DragonRoarProps() */

void __thiscall DragonRoarProps::~DragonRoarProps(DragonRoarProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067fa730;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2c8));
  StarRateProps::~StarRateProps((StarRateProps *)this);
  return;
}


/* DragonRoarProps::~DragonRoarProps() */

void __thiscall DragonRoarProps::~DragonRoarProps(DragonRoarProps *this)

{
  ~DragonRoarProps(this);
  AK::FreeHook(this);
  return;
}

