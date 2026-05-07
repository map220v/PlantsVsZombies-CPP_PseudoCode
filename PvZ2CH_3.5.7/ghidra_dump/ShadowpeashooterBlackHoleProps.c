// Class: ShadowpeashooterBlackHoleProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShadowpeashooterBlackHoleProps::StaticClassInit() */

void ShadowpeashooterBlackHoleProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ShadowpeashooterBlackHoleProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03bc6b4c,0x108,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ShadowpeashooterBlackHoleProps::StaticGetClass() */

long * ShadowpeashooterBlackHoleProps::StaticGetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"ShadowpeashooterBlackHoleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShadowpeashooterBlackHoleProps::GetClass() const */

long * ShadowpeashooterBlackHoleProps::GetClass(void)

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
  uVar2 = GridItemAnimationProps::StaticGetClass();
  (*pcVar3)(plVar1,"ShadowpeashooterBlackHoleProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ShadowpeashooterBlackHoleProps::ShadowpeashooterBlackHoleProps() */

void __thiscall
ShadowpeashooterBlackHoleProps::ShadowpeashooterBlackHoleProps(ShadowpeashooterBlackHoleProps *this)

{
  GridItemAnimationProps::GridItemAnimationProps((GridItemAnimationProps *)this);
  *(undefined4 *)(this + 0xd0) = 1;
  *(undefined4 *)(this + 0xd4) = 1;
  *(undefined ***)this = &PTR_GetClass_0673b000;
  *(undefined4 *)(this + 0xd8) = 1;
  *(undefined4 *)(this + 0xdc) = 1;
  *(undefined4 *)(this + 0xe0) = 0x3f800000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xe8));
  *(undefined4 *)(this + 0x100) = 0;
  return;
}


/* ShadowpeashooterBlackHoleProps::StaticNew() */

ShadowpeashooterBlackHoleProps * ShadowpeashooterBlackHoleProps::StaticNew(void)

{
  ShadowpeashooterBlackHoleProps *this;
  
  this = ::operator_new(0x108);
  ShadowpeashooterBlackHoleProps(this);
  return this;
}


/* ShadowpeashooterBlackHoleProps::~ShadowpeashooterBlackHoleProps() */

void __thiscall
ShadowpeashooterBlackHoleProps::~ShadowpeashooterBlackHoleProps
          (ShadowpeashooterBlackHoleProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0673b000;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xe8));
  GridItemAnimationProps::~GridItemAnimationProps((GridItemAnimationProps *)this);
  return;
}


/* ShadowpeashooterBlackHoleProps::~ShadowpeashooterBlackHoleProps() */

void __thiscall
ShadowpeashooterBlackHoleProps::~ShadowpeashooterBlackHoleProps
          (ShadowpeashooterBlackHoleProps *this)

{
  ~ShadowpeashooterBlackHoleProps(this);
  AK::FreeHook(this);
  return;
}

