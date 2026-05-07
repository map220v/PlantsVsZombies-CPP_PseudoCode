// Class: ZombieParkourProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieParkourProps::StaticClassInit() */

void ZombieParkourProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieParkourProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04f47030,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieParkourProps::StaticGetClass() */

long * ZombieParkourProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieParkourProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieParkourProps::GetClass() const */

long * ZombieParkourProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieParkourProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieParkourProps::ZombieParkourProps() */

void __thiscall ZombieParkourProps::ZombieParkourProps(ZombieParkourProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 500;
  *(undefined ***)this = &PTR_GetClass_06a1c500;
  *(undefined4 *)(this + 0x214) = 0x3f800000;
  *(undefined4 *)(this + 0x218) = 0x40000000;
  *(undefined4 *)(this + 0x21c) = 0x3e800000;
  *(undefined4 *)(this + 0x220) = 0x3f19999a;
  *(undefined4 *)(this + 0x224) = 0x3f800000;
  *(undefined4 *)(this + 0x228) = 0x40000000;
  return;
}


/* ZombieParkourProps::StaticNew() */

ZombieParkourProps * ZombieParkourProps::StaticNew(void)

{
  ZombieParkourProps *this;
  
  this = ::operator_new(0x230);
  ZombieParkourProps(this);
  return this;
}


/* ZombieParkourProps::~ZombieParkourProps() */

void __thiscall ZombieParkourProps::~ZombieParkourProps(ZombieParkourProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06a1c500;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieParkourProps::~ZombieParkourProps() */

void __thiscall ZombieParkourProps::~ZombieParkourProps(ZombieParkourProps *this)

{
  ~ZombieParkourProps(this);
  AK::FreeHook(this);
  return;
}

