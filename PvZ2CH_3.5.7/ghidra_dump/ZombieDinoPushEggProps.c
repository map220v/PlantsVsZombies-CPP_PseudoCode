// Class: ZombieDinoPushEggProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoPushEggProps::StaticClassInit() */

void ZombieDinoPushEggProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieDinoPushEggProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047fd2c4,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDinoPushEggProps::StaticGetClass() */

long * ZombieDinoPushEggProps::StaticGetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDinoPushEggProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDinoPushEggProps::GetClass() const */

long * ZombieDinoPushEggProps::GetClass(void)

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
  uVar2 = ZombieWithActionsProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieDinoPushEggProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDinoPushEggProps::ZombieDinoPushEggProps() */

void __thiscall ZombieDinoPushEggProps::ZombieDinoPushEggProps(ZombieDinoPushEggProps *this)

{
  ZombieWithActionsProps::ZombieWithActionsProps((ZombieWithActionsProps *)this);
  *(undefined4 *)(this + 0x228) = 1;
  *(undefined ***)this = &PTR_GetClass_068fa930;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x230));
  return;
}


/* ZombieDinoPushEggProps::StaticNew() */

ZombieDinoPushEggProps * ZombieDinoPushEggProps::StaticNew(void)

{
  ZombieDinoPushEggProps *this;
  
  this = ::operator_new(0x248);
  ZombieDinoPushEggProps(this);
  return this;
}


/* ZombieDinoPushEggProps::~ZombieDinoPushEggProps() */

void __thiscall ZombieDinoPushEggProps::~ZombieDinoPushEggProps(ZombieDinoPushEggProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068fa930;
  std::vector<EntityWeight,std::allocator<EntityWeight>>::~vector
            ((vector<EntityWeight,std::allocator<EntityWeight>> *)(this + 0x230));
  ZombieWithActionsProps::~ZombieWithActionsProps((ZombieWithActionsProps *)this);
  return;
}


/* ZombieDinoPushEggProps::~ZombieDinoPushEggProps() */

void __thiscall ZombieDinoPushEggProps::~ZombieDinoPushEggProps(ZombieDinoPushEggProps *this)

{
  ~ZombieDinoPushEggProps(this);
  AK::FreeHook(this);
  return;
}

