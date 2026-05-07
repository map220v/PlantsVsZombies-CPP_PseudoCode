// Class: ZombiePVPCannonProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPCannonProps::StaticClassInit() */

void ZombiePVPCannonProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPCannonProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046c4bd8,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPCannonProps::ZombiePVPCannonProps() */

void __thiscall ZombiePVPCannonProps::ZombiePVPCannonProps(ZombiePVPCannonProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x210) = 0x40400000;
  *(undefined4 *)(this + 0x22c) = 10;
  *(undefined ***)this = &PTR_GetClass_068b1ae0;
  *(undefined4 *)(this + 0x230) = 2;
  *(undefined4 *)(this + 0x234) = 9;
  *(undefined4 *)(this + 0x214) = 0x41000000;
  *(undefined4 *)(this + 0x218) = 0x3dcccccd;
  *(undefined4 *)(this + 0x21c) = 0x40800000;
  *(undefined4 *)(this + 0x220) = 0x42a00000;
  *(undefined4 *)(this + 0x224) = 0x3f800000;
  *(undefined4 *)(this + 0x228) = 0x3e99999a;
  *(undefined4 *)(this + 0x23c) = 0x3fc00000;
  *(undefined4 *)(this + 0x238) = 0x43340000;
  *(undefined4 *)(this + 0x240) = 0x3e800000;
  return;
}


/* ZombiePVPCannonProps::StaticNew() */

ZombiePVPCannonProps * ZombiePVPCannonProps::StaticNew(void)

{
  ZombiePVPCannonProps *this;
  
  this = ::operator_new(0x248);
  ZombiePVPCannonProps(this);
  return this;
}


/* ZombiePVPCannonProps::~ZombiePVPCannonProps() */

void __thiscall ZombiePVPCannonProps::~ZombiePVPCannonProps(ZombiePVPCannonProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b1ae0;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombiePVPCannonProps::~ZombiePVPCannonProps() */

void __thiscall ZombiePVPCannonProps::~ZombiePVPCannonProps(ZombiePVPCannonProps *this)

{
  ~ZombiePVPCannonProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombiePVPCannonProps::StaticGetClass() */

long * ZombiePVPCannonProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPCannonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPCannonProps::GetClass() const */

long * ZombiePVPCannonProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePVPCannonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

