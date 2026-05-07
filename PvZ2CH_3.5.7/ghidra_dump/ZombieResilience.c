// Class: ZombieResilience


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieResilience::StaticClassInit() */

void ZombieResilience::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieResilience");
    (*pcVar2)(plVar1,asStack_10,FUN_046b44f4,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieResilience::StaticGetClass() */

long * ZombieResilience::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieResilience",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieResilience::GetClass() const */

long * ZombieResilience::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieResilience",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieResilience::ZombieResilience() */

void __thiscall ZombieResilience::ZombieResilience(ZombieResilience *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_068afec0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  return;
}


/* ZombieResilience::StaticNew() */

ZombieResilience * ZombieResilience::StaticNew(void)

{
  ZombieResilience *this;
  
  this = ::operator_new(0x48);
  ZombieResilience(this);
  return this;
}


/* ZombieResilience::~ZombieResilience() */

void __thiscall ZombieResilience::~ZombieResilience(ZombieResilience *this)

{
  *(undefined ***)this = &PTR_GetClass_068afec0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* ZombieResilience::~ZombieResilience() */

void __thiscall ZombieResilience::~ZombieResilience(ZombieResilience *this)

{
  ~ZombieResilience(this);
  AK::FreeHook(this);
  return;
}

