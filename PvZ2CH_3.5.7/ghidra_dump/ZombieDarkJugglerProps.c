// Class: ZombieDarkJugglerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieDarkJugglerProps::StaticClassInit() */

void ZombieDarkJugglerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieDarkJugglerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0466b35c,0x288,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieDarkJugglerProps::StaticGetClass() */

long * ZombieDarkJugglerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDarkJugglerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDarkJugglerProps::GetClass() const */

long * ZombieDarkJugglerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieDarkJugglerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieDarkJugglerProps::ZombieDarkJugglerProps() */

void __thiscall ZombieDarkJugglerProps::ZombieDarkJugglerProps(ZombieDarkJugglerProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06891e30;
  DVec3::DVec3((DVec3 *)(this + 0x210));
  DVec3::DVec3((DVec3 *)(this + 0x21c));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x228));
  *(undefined4 *)(this + 0x230) = 3;
  *(undefined4 *)(this + 0x234) = 0x40000000;
  *(undefined4 *)(this + 0x238) = 0x3f4ccccd;
  *(undefined4 *)(this + 0x23c) = 0x42f00000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x240));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 600));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x270));
  return;
}


/* ZombieDarkJugglerProps::StaticNew() */

ZombieDarkJugglerProps * ZombieDarkJugglerProps::StaticNew(void)

{
  ZombieDarkJugglerProps *this;
  
  this = ::operator_new(0x288);
  ZombieDarkJugglerProps(this);
  return this;
}


/* ZombieDarkJugglerProps::~ZombieDarkJugglerProps() */

void __thiscall ZombieDarkJugglerProps::~ZombieDarkJugglerProps(ZombieDarkJugglerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06891e30;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x270));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 600));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x240));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieDarkJugglerProps::~ZombieDarkJugglerProps() */

void __thiscall ZombieDarkJugglerProps::~ZombieDarkJugglerProps(ZombieDarkJugglerProps *this)

{
  ~ZombieDarkJugglerProps(this);
  AK::FreeHook(this);
  return;
}

