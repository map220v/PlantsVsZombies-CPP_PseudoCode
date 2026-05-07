// Class: ZombieEightiesBreakDancerProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEightiesBreakDancerProps::StaticClassInit() */

void ZombieEightiesBreakDancerProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEightiesBreakDancerProps");
    (*pcVar2)(plVar1,asStack_10,FUN_047e594c,0x238,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEightiesBreakDancerProps::StaticGetClass() */

long * ZombieEightiesBreakDancerProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEightiesBreakDancerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesBreakDancerProps::GetClass() const */

long * ZombieEightiesBreakDancerProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEightiesBreakDancerProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEightiesBreakDancerProps::ZombieEightiesBreakDancerProps() */

void __thiscall
ZombieEightiesBreakDancerProps::ZombieEightiesBreakDancerProps(ZombieEightiesBreakDancerProps *this)

{
  size_t in_x2;
  
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_068f1210;
  Set8BytesTo0((string *)(this + 0x210));
  Sexy::Insets::Insets((Insets *)(this + 0x228));
  std::string::append((string *)(this + 0x210),"",in_x2);
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x224) = 0;
  return;
}


/* ZombieEightiesBreakDancerProps::StaticNew() */

ZombieEightiesBreakDancerProps * ZombieEightiesBreakDancerProps::StaticNew(void)

{
  ZombieEightiesBreakDancerProps *this;
  
  this = ::operator_new(0x238);
  ZombieEightiesBreakDancerProps(this);
  return this;
}


/* ZombieEightiesBreakDancerProps::~ZombieEightiesBreakDancerProps() */

void __thiscall
ZombieEightiesBreakDancerProps::~ZombieEightiesBreakDancerProps
          (ZombieEightiesBreakDancerProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068f1210;
  std::string::~string((string *)(this + 0x210));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieEightiesBreakDancerProps::~ZombieEightiesBreakDancerProps() */

void __thiscall
ZombieEightiesBreakDancerProps::~ZombieEightiesBreakDancerProps
          (ZombieEightiesBreakDancerProps *this)

{
  ~ZombieEightiesBreakDancerProps(this);
  AK::FreeHook(this);
  return;
}

