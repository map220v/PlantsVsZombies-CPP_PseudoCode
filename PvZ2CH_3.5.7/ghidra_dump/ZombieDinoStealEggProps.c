// Class: ZombieDinoStealEggProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDinoStealEggProps::StaticClassInit() */

void ZombieDinoStealEggProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieDinoStealEggProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047ff6d0,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDinoStealEggProps::StaticGetClass() */

long * ZombieDinoStealEggProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDinoStealEggProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDinoStealEggProps::GetClass() const */

long * ZombieDinoStealEggProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDinoStealEggProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDinoStealEggProps::ZombieDinoStealEggProps() */

void __thiscall ZombieDinoStealEggProps::ZombieDinoStealEggProps(ZombieDinoStealEggProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068fb740;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  *(undefined4 *)(this + 0x228) = 5;
  return;
}


/* ZombieDinoStealEggProps::StaticNew() */

ZombieDinoStealEggProps * ZombieDinoStealEggProps::StaticNew(void)

{
  ZombieDinoStealEggProps *this;
  
  this = ::operator_new(0x230);
  ZombieDinoStealEggProps(this);
  return this;
}


/* ZombieDinoStealEggProps::~ZombieDinoStealEggProps() */

void __thiscall ZombieDinoStealEggProps::~ZombieDinoStealEggProps(ZombieDinoStealEggProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068fb740;
  std::vector<EntityWeight,std::allocator<EntityWeight>>::~vector
            ((vector<EntityWeight,std::allocator<EntityWeight>> *)(this + 0x210));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieDinoStealEggProps::~ZombieDinoStealEggProps() */

void __thiscall ZombieDinoStealEggProps::~ZombieDinoStealEggProps(ZombieDinoStealEggProps *this)

{
  ~ZombieDinoStealEggProps(this);
  AK::FreeHook(this);
  return;
}

