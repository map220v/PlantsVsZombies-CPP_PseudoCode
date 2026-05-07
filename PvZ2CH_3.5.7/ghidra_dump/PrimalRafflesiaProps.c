// Class: PrimalRafflesiaProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrimalRafflesiaProps::StaticClassInit() */

void PrimalRafflesiaProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PrimalRafflesiaProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0418ec58,0x328,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PrimalRafflesiaProps::StaticGetClass() */

long * PrimalRafflesiaProps::StaticGetClass(void)

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
  uVar2 = CabbagepultProps::StaticGetClass();
  (*pcVar3)(plVar1,"PrimalRafflesiaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalRafflesiaProps::GetClass() const */

long * PrimalRafflesiaProps::GetClass(void)

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
  uVar2 = CabbagepultProps::StaticGetClass();
  (*pcVar3)(plVar1,"PrimalRafflesiaProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PrimalRafflesiaProps::PrimalRafflesiaProps() */

void __thiscall PrimalRafflesiaProps::PrimalRafflesiaProps(PrimalRafflesiaProps *this)

{
  CabbagepultProps::CabbagepultProps((CabbagepultProps *)this);
  *(undefined ***)this = &PTR_GetClass_067fb500;
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2d0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2f8));
  *(undefined4 *)(this + 0x314) = 0x20;
  *(undefined4 *)(this + 800) = 0x20;
  *(undefined4 *)(this + 0x318) = 200;
  *(undefined4 *)(this + 0x31c) = 200;
  *(undefined4 *)(this + 0x310) = 20000;
  *(undefined4 *)(this + 0x2c8) = 0x3ea8f5c3;
  return;
}


/* PrimalRafflesiaProps::StaticNew() */

PrimalRafflesiaProps * PrimalRafflesiaProps::StaticNew(void)

{
  PrimalRafflesiaProps *this;
  
  this = ::operator_new(0x328);
  PrimalRafflesiaProps(this);
  return this;
}


/* PrimalRafflesiaProps::~PrimalRafflesiaProps() */

void __thiscall PrimalRafflesiaProps::~PrimalRafflesiaProps(PrimalRafflesiaProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067fb500;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2f8));
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2d0));
  CabbagepultProps::~CabbagepultProps((CabbagepultProps *)this);
  return;
}


/* PrimalRafflesiaProps::~PrimalRafflesiaProps() */

void __thiscall PrimalRafflesiaProps::~PrimalRafflesiaProps(PrimalRafflesiaProps *this)

{
  ~PrimalRafflesiaProps(this);
  AK::FreeHook(this);
  return;
}

