// Class: ZombieSkyCityTwinsPlaneProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSkyCityTwinsPlaneProps::StaticClassInit() */

void ZombieSkyCityTwinsPlaneProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSkyCityTwinsPlaneProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047aa864,600,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSkyCityTwinsPlaneProps::StaticGetClass() */

long * ZombieSkyCityTwinsPlaneProps::StaticGetClass(void)

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
  uVar2 = ZombieSkyCityProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCityTwinsPlaneProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityTwinsPlaneProps::GetClass() const */

long * ZombieSkyCityTwinsPlaneProps::GetClass(void)

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
  uVar2 = ZombieSkyCityProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSkyCityTwinsPlaneProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSkyCityTwinsPlaneProps::ZombieSkyCityTwinsPlaneProps() */

void __thiscall
ZombieSkyCityTwinsPlaneProps::ZombieSkyCityTwinsPlaneProps(ZombieSkyCityTwinsPlaneProps *this)

{
  ZombieSkyCityProps::ZombieSkyCityProps((ZombieSkyCityProps *)this);
  *(undefined ***)this = &PTR_GetClass_068e2190;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x238));
  return;
}


/* ZombieSkyCityTwinsPlaneProps::StaticNew() */

ZombieSkyCityTwinsPlaneProps * ZombieSkyCityTwinsPlaneProps::StaticNew(void)

{
  ZombieSkyCityTwinsPlaneProps *this;
  
  this = ::operator_new(600);
  ZombieSkyCityTwinsPlaneProps(this);
  return this;
}


/* ZombieSkyCityTwinsPlaneProps::~ZombieSkyCityTwinsPlaneProps() */

void __thiscall
ZombieSkyCityTwinsPlaneProps::~ZombieSkyCityTwinsPlaneProps(ZombieSkyCityTwinsPlaneProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068e2190;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x238));
  ZombieSkyCityProps::~ZombieSkyCityProps((ZombieSkyCityProps *)this);
  return;
}


/* ZombieSkyCityTwinsPlaneProps::~ZombieSkyCityTwinsPlaneProps() */

void __thiscall
ZombieSkyCityTwinsPlaneProps::~ZombieSkyCityTwinsPlaneProps(ZombieSkyCityTwinsPlaneProps *this)

{
  ~ZombieSkyCityTwinsPlaneProps(this);
  AK::FreeHook(this);
  return;
}

