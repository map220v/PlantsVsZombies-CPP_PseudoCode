// Class: ZombiePirateCannonProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateCannonProps::StaticClassInit() */

void ZombiePirateCannonProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePirateCannonProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046be758,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePirateCannonProps::ZombiePirateCannonProps() */

void __thiscall ZombiePirateCannonProps::ZombiePirateCannonProps(ZombiePirateCannonProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0x40400000;
  *(undefined4 *)(this + 0x228) = 10;
  *(undefined ***)this = &PTR_GetClass_068b06a0;
  *(undefined4 *)(this + 0x230) = 9;
  *(undefined4 *)(this + 0x22c) = 2;
  *(undefined4 *)(this + 0x214) = 0x41000000;
  *(undefined4 *)(this + 0x218) = 0x3dcccccd;
  *(undefined4 *)(this + 0x21c) = 0x40800000;
  *(undefined4 *)(this + 0x220) = 0x42a00000;
  *(undefined4 *)(this + 0x224) = 0x3f800000;
  *(undefined4 *)(this + 0x238) = 0x3fc00000;
  *(undefined4 *)(this + 0x234) = 0x43340000;
  *(undefined4 *)(this + 0x23c) = 0x3e800000;
  return;
}


/* ZombiePirateCannonProps::StaticNew() */

ZombiePirateCannonProps * ZombiePirateCannonProps::StaticNew(void)

{
  ZombiePirateCannonProps *this;
  
  this = ::operator_new(0x240);
  ZombiePirateCannonProps(this);
  return this;
}


/* ZombiePirateCannonProps::~ZombiePirateCannonProps() */

void __thiscall ZombiePirateCannonProps::~ZombiePirateCannonProps(ZombiePirateCannonProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b06a0;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombiePirateCannonProps::~ZombiePirateCannonProps() */

void __thiscall ZombiePirateCannonProps::~ZombiePirateCannonProps(ZombiePirateCannonProps *this)

{
  ~ZombiePirateCannonProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombiePirateCannonProps::StaticGetClass() */

long * ZombiePirateCannonProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePirateCannonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePirateCannonProps::GetClass() const */

long * ZombiePirateCannonProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePirateCannonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

