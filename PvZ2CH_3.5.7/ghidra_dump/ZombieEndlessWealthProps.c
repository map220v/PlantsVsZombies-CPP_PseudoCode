// Class: ZombieEndlessWealthProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEndlessWealthProps::StaticClassInit() */

void ZombieEndlessWealthProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEndlessWealthProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04640738,0x268,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEndlessWealthProps::StaticGetClass() */

long * ZombieEndlessWealthProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEndlessWealthProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEndlessWealthProps::GetClass() const */

long * ZombieEndlessWealthProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieEndlessWealthProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEndlessWealthProps::ZombieEndlessWealthProps() */

void __thiscall ZombieEndlessWealthProps::ZombieEndlessWealthProps(ZombieEndlessWealthProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06882910;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x214));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x21c));
  Set8BytesTo0(this + 0x248);
  Set8BytesTo0(this + 600);
  *(undefined4 *)(this + 0x224) = 5;
  *(undefined4 *)(this + 0x230) = 1000;
  *(undefined4 *)(this + 0x234) = 3;
  *(undefined4 *)(this + 0x210) = 0x40000000;
  *(undefined4 *)(this + 0x228) = 0x3e3d70a4;
  *(undefined4 *)(this + 0x238) = 0x40000000;
  *(undefined4 *)(this + 0x244) = 0x3f000000;
  *(undefined4 *)(this + 0x23c) = 0x3f800000;
  *(undefined4 *)(this + 0x22c) = 0x3e99999a;
  *(undefined4 *)(this + 0x240) = 0x3fc00000;
  return;
}


/* ZombieEndlessWealthProps::StaticNew() */

ZombieEndlessWealthProps * ZombieEndlessWealthProps::StaticNew(void)

{
  ZombieEndlessWealthProps *this;
  
  this = ::operator_new(0x268);
  ZombieEndlessWealthProps(this);
  return this;
}


/* ZombieEndlessWealthProps::~ZombieEndlessWealthProps() */

void __thiscall ZombieEndlessWealthProps::~ZombieEndlessWealthProps(ZombieEndlessWealthProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06882910;
  std::string::~string((string *)(this + 600));
  std::string::~string((string *)(this + 0x248));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieEndlessWealthProps::~ZombieEndlessWealthProps() */

void __thiscall ZombieEndlessWealthProps::~ZombieEndlessWealthProps(ZombieEndlessWealthProps *this)

{
  ~ZombieEndlessWealthProps(this);
  AK::FreeHook(this);
  return;
}

