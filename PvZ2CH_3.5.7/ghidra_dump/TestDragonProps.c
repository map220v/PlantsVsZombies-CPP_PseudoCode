// Class: TestDragonProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TestDragonProps::StaticClassInit() */

void TestDragonProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"TestDragonProps");
    (*pcVar2)(plVar1,asStack_10,FUN_037477b8,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TestDragonProps::StaticGetClass() */

long * TestDragonProps::StaticGetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"TestDragonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TestDragonProps::GetClass() const */

long * TestDragonProps::GetClass(void)

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
  uVar2 = ProjectilePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"TestDragonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TestDragonProps::~TestDragonProps() */

void __thiscall TestDragonProps::~TestDragonProps(TestDragonProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06693d70;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* TestDragonProps::~TestDragonProps() */

void __thiscall TestDragonProps::~TestDragonProps(TestDragonProps *this)

{
  ~TestDragonProps(this);
  AK::FreeHook(this);
  return;
}


/* TestDragonProps::TestDragonProps() */

void __thiscall TestDragonProps::TestDragonProps(TestDragonProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06693d70;
  DVec3::DVec3((DVec3 *)(this + 0x1ec));
  *(undefined4 *)(this + 0x1e0) = 0x3f800000;
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x1fc) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  return;
}


/* TestDragonProps::StaticNew() */

TestDragonProps * TestDragonProps::StaticNew(void)

{
  TestDragonProps *this;
  
  this = ::operator_new(0x208);
  TestDragonProps(this);
  return this;
}

