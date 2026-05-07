// Class: ZombieGargantuarProps


/* ZombieGargantuarProps::ZombieGargantuarProps() */

void __thiscall ZombieGargantuarProps::ZombieGargantuarProps(ZombieGargantuarProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068b02b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  DVec3::DVec3((DVec3 *)(this + 0x238));
  Set8BytesTo0(this + 0x250);
  Set8BytesTo0(this + 600);
  Set8BytesTo0(this + 0x260);
  *(undefined4 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x22c) = 0;
  *(undefined4 *)(this + 0x234) = 0;
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x24c) = 0x447a0000;
  return;
}


/* ZombieGargantuarProps::~ZombieGargantuarProps() */

void __thiscall ZombieGargantuarProps::~ZombieGargantuarProps(ZombieGargantuarProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b02b0;
  std::string::~string((string *)(this + 0x260));
  std::string::~string((string *)(this + 600));
  std::string::~string((string *)(this + 0x250));
  std::vector<ZombieGargantuarProjectilePair,std::allocator<ZombieGargantuarProjectilePair>>::
  ~vector((vector<ZombieGargantuarProjectilePair,std::allocator<ZombieGargantuarProjectilePair>> *)
          (this + 0x210));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieGargantuarProps::~ZombieGargantuarProps() */

void __thiscall ZombieGargantuarProps::~ZombieGargantuarProps(ZombieGargantuarProps *this)

{
  ~ZombieGargantuarProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGargantuarProps::StaticClassInit() */

void ZombieGargantuarProps::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieGargantuarProjectilePair");
    (*pcVar3)(plVar2,asStack_10,FUN_046b4960,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieGargantuarProps");
    (*pcVar3)(plVar2,asStack_10,FUN_046bca08,0x268,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGargantuarProps::StaticNew() */

ZombieGargantuarProps * ZombieGargantuarProps::StaticNew(void)

{
  ZombieGargantuarProps *this;
  
  this = ::operator_new(0x268);
  ZombieGargantuarProps(this);
  return this;
}


/* ZombieGargantuarProps::StaticGetClass() */

long * ZombieGargantuarProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieGargantuarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGargantuarProps::GetClass() const */

long * ZombieGargantuarProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieGargantuarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

