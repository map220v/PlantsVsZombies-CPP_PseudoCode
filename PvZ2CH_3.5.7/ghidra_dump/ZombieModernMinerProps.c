// Class: ZombieModernMinerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieModernMinerProps::StaticClassInit() */

void ZombieModernMinerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieModernMinerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_048060cc,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieModernMinerProps::StaticGetClass() */

long * ZombieModernMinerProps::StaticGetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieModernMinerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernMinerProps::GetClass() const */

long * ZombieModernMinerProps::GetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieModernMinerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieModernMinerProps::ZombieModernMinerProps() */

void __thiscall ZombieModernMinerProps::ZombieModernMinerProps(ZombieModernMinerProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068fd3c0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x228));
  *(undefined4 *)(this + 0x240) = 0x41000000;
  return;
}


/* ZombieModernMinerProps::StaticNew() */

ZombieModernMinerProps * ZombieModernMinerProps::StaticNew(void)

{
  ZombieModernMinerProps *this;
  
  this = ::operator_new(0x248);
  ZombieModernMinerProps(this);
  return this;
}


/* ZombieModernMinerProps::~ZombieModernMinerProps() */

void __thiscall ZombieModernMinerProps::~ZombieModernMinerProps(ZombieModernMinerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068fd3c0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x228));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x210));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieModernMinerProps::~ZombieModernMinerProps() */

void __thiscall ZombieModernMinerProps::~ZombieModernMinerProps(ZombieModernMinerProps *this)

{
  ~ZombieModernMinerProps(this);
  AK::FreeHook(this);
  return;
}

