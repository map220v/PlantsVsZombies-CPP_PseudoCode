// Class: ZombieMechDiscoProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMechDiscoProps::StaticClassInit() */

void ZombieMechDiscoProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMechDiscoProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046bc258,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMechDiscoProps::ZombieMechDiscoProps() */

void __thiscall ZombieMechDiscoProps::ZombieMechDiscoProps(ZombieMechDiscoProps *this)

{
  ZombieMechProps::ZombieMechProps((ZombieMechProps *)this);
  *(undefined ***)this = &PTR_GetClass_068b0220;
  Set8BytesTo0(this + 0x230);
  return;
}


/* ZombieMechDiscoProps::StaticNew() */

ZombieMechDiscoProps * ZombieMechDiscoProps::StaticNew(void)

{
  ZombieMechDiscoProps *this;
  
  this = ::operator_new(0x238);
  ZombieMechDiscoProps(this);
  return this;
}


/* ZombieMechDiscoProps::~ZombieMechDiscoProps() */

void __thiscall ZombieMechDiscoProps::~ZombieMechDiscoProps(ZombieMechDiscoProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b0220;
  std::string::~string((string *)(this + 0x230));
  ZombieMechProps::~ZombieMechProps((ZombieMechProps *)this);
  return;
}


/* ZombieMechDiscoProps::~ZombieMechDiscoProps() */

void __thiscall ZombieMechDiscoProps::~ZombieMechDiscoProps(ZombieMechDiscoProps *this)

{
  ~ZombieMechDiscoProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombieMechDiscoProps::StaticGetClass() */

long * ZombieMechDiscoProps::StaticGetClass(void)

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
  uVar2 = ZombieMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMechDiscoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMechDiscoProps::GetClass() const */

long * ZombieMechDiscoProps::GetClass(void)

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
  uVar2 = ZombieMechProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMechDiscoProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

