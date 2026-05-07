// Class: HeliconiaGunnerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeliconiaGunnerProps::StaticClassInit() */

void HeliconiaGunnerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeliconiaGunnerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04d32c2c,0x300,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeliconiaGunnerProps::StaticGetClass() */

long * HeliconiaGunnerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HeliconiaGunnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeliconiaGunnerProps::GetClass() const */

long * HeliconiaGunnerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"HeliconiaGunnerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeliconiaGunnerProps::HeliconiaGunnerProps() */

void __thiscall HeliconiaGunnerProps::HeliconiaGunnerProps(HeliconiaGunnerProps *this)

{
  StarRateProps::StarRateProps((StarRateProps *)this);
  *(undefined ***)this = &PTR_GetClass_069ac760;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d0));
  *(undefined4 *)(this + 0x2c0) = 1;
  *(undefined4 *)(this + 0x2c8) = 0x3f800000;
  *(undefined4 *)(this + 0x2c4) = 0x3ea3d70a;
  return;
}


/* HeliconiaGunnerProps::StaticNew() */

HeliconiaGunnerProps * HeliconiaGunnerProps::StaticNew(void)

{
  HeliconiaGunnerProps *this;
  
  this = ::operator_new(0x300);
  HeliconiaGunnerProps(this);
  return this;
}


/* HeliconiaGunnerProps::~HeliconiaGunnerProps() */

void __thiscall HeliconiaGunnerProps::~HeliconiaGunnerProps(HeliconiaGunnerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069ac760;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2d0));
  StarRateProps::~StarRateProps((StarRateProps *)this);
  return;
}


/* HeliconiaGunnerProps::~HeliconiaGunnerProps() */

void __thiscall HeliconiaGunnerProps::~HeliconiaGunnerProps(HeliconiaGunnerProps *this)

{
  ~HeliconiaGunnerProps(this);
  AK::FreeHook(this);
  return;
}

