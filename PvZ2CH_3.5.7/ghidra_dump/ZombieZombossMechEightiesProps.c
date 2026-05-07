// Class: ZombieZombossMechEightiesProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMechEightiesProps::StaticClassInit() */

void ZombieZombossMechEightiesProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMechEightiesProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047f0310,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMechEightiesProps::StaticGetClass() */

long * ZombieZombossMechEightiesProps::StaticGetClass(void)

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
  uVar2 = ZombieZombossMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMechEightiesProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechEightiesProps::GetClass() const */

long * ZombieZombossMechEightiesProps::GetClass(void)

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
  uVar2 = ZombieZombossMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMechEightiesProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMechEightiesProps::ZombieZombossMechEightiesProps() */

void __thiscall
ZombieZombossMechEightiesProps::ZombieZombossMechEightiesProps(ZombieZombossMechEightiesProps *this)

{
  ZombieZombossMechProps::ZombieZombossMechProps((ZombieZombossMechProps *)this);
  *(undefined ***)this = &PTR_GetClass_068f56e0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2a0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2b8));
  return;
}


/* ZombieZombossMechEightiesProps::StaticNew() */

ZombieZombossMechEightiesProps * ZombieZombossMechEightiesProps::StaticNew(void)

{
  ZombieZombossMechEightiesProps *this;
  
  this = ::operator_new(0x2d0);
  ZombieZombossMechEightiesProps(this);
  return this;
}


/* ZombieZombossMechEightiesProps::~ZombieZombossMechEightiesProps() */

void __thiscall
ZombieZombossMechEightiesProps::~ZombieZombossMechEightiesProps
          (ZombieZombossMechEightiesProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068f56e0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2b8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2a0));
  ZombieZombossMechProps::~ZombieZombossMechProps((ZombieZombossMechProps *)this);
  return;
}


/* ZombieZombossMechEightiesProps::~ZombieZombossMechEightiesProps() */

void __thiscall
ZombieZombossMechEightiesProps::~ZombieZombossMechEightiesProps
          (ZombieZombossMechEightiesProps *this)

{
  ~ZombieZombossMechEightiesProps(this);
  AK::FreeHook(this);
  return;
}

