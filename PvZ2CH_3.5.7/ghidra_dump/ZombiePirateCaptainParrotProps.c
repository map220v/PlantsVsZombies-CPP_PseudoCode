// Class: ZombiePirateCaptainParrotProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePirateCaptainParrotProps::StaticClassInit() */

void ZombiePirateCaptainParrotProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePirateCaptainParrotProps");
    (*pcVar2)(plVar1,asStack_10,FUN_046bf048,0x220,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePirateCaptainParrotProps::ZombiePirateCaptainParrotProps() */

void __thiscall
ZombiePirateCaptainParrotProps::ZombiePirateCaptainParrotProps(ZombiePirateCaptainParrotProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined4 *)(this + 0x214) = 0x40400000;
  *(undefined ***)this = &PTR_GetClass_068b07c0;
  *(undefined4 *)(this + 0x210) = 0x42c80000;
  *(undefined4 *)(this + 0x218) = 0x40400000;
  return;
}


/* ZombiePirateCaptainParrotProps::StaticNew() */

ZombiePirateCaptainParrotProps * ZombiePirateCaptainParrotProps::StaticNew(void)

{
  ZombiePirateCaptainParrotProps *this;
  
  this = ::operator_new(0x220);
  ZombiePirateCaptainParrotProps(this);
  return this;
}


/* ZombiePirateCaptainParrotProps::~ZombiePirateCaptainParrotProps() */

void __thiscall
ZombiePirateCaptainParrotProps::~ZombiePirateCaptainParrotProps
          (ZombiePirateCaptainParrotProps *this)

{
  *(undefined ***)this = &PTR_GetClass_068b07c0;
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombiePirateCaptainParrotProps::~ZombiePirateCaptainParrotProps() */

void __thiscall
ZombiePirateCaptainParrotProps::~ZombiePirateCaptainParrotProps
          (ZombiePirateCaptainParrotProps *this)

{
  ~ZombiePirateCaptainParrotProps(this);
  AK::FreeHook(this);
  return;
}


/* ZombiePirateCaptainParrotProps::StaticGetClass() */

long * ZombiePirateCaptainParrotProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePirateCaptainParrotProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePirateCaptainParrotProps::GetClass() const */

long * ZombiePirateCaptainParrotProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombiePirateCaptainParrotProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

