// Class: ZombiePvpDeadProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePvpDeadProps::StaticClassInit() */

void ZombiePvpDeadProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePvpDeadProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0499b304,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePvpDeadProps::StaticGetClass() */

long * ZombiePvpDeadProps::StaticGetClass(void)

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
  uVar2 = ZombieTombRaiserProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePvpDeadProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePvpDeadProps::GetClass() const */

long * ZombiePvpDeadProps::GetClass(void)

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
  uVar2 = ZombieTombRaiserProps::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePvpDeadProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePvpDeadProps::ZombiePvpDeadProps() */

void __thiscall ZombiePvpDeadProps::ZombiePvpDeadProps(ZombiePvpDeadProps *this)

{
  ZombieTombRaiserProps::ZombieTombRaiserProps((ZombieTombRaiserProps *)this);
  *(undefined4 *)(this + 0x214) = 0x40c00000;
  *(undefined4 *)(this + 0x218) = 2;
  *(undefined ***)this = &PTR_GetClass_0691e1b0;
  *(undefined4 *)(this + 0x230) = 0x41a00000;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x22c) = 0x442f0000;
  *(undefined4 *)(this + 0x234) = 0x3fc00000;
  *(undefined4 *)(this + 0x228) = 0;
  return;
}


/* ZombiePvpDeadProps::StaticNew() */

ZombiePvpDeadProps * ZombiePvpDeadProps::StaticNew(void)

{
  ZombiePvpDeadProps *this;
  
  this = ::operator_new(0x238);
  ZombiePvpDeadProps(this);
  return this;
}


/* ZombiePvpDeadProps::~ZombiePvpDeadProps() */

void __thiscall ZombiePvpDeadProps::~ZombiePvpDeadProps(ZombiePvpDeadProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0691e1b0;
  ZombieTombRaiserProps::~ZombieTombRaiserProps((ZombieTombRaiserProps *)this);
  return;
}


/* ZombiePvpDeadProps::~ZombiePvpDeadProps() */

void __thiscall ZombiePvpDeadProps::~ZombiePvpDeadProps(ZombiePvpDeadProps *this)

{
  ~ZombiePvpDeadProps(this);
  AK::FreeHook(this);
  return;
}

