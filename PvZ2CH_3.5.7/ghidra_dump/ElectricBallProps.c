// Class: ElectricBallProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElectricBallProps::StaticClassInit() */

void ElectricBallProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElectricBallProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c11f50,0x1f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElectricBallProps::StaticGetClass() */

long * ElectricBallProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ElectricBallProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricBallProps::GetClass() const */

long * ElectricBallProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ElectricBallProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElectricBallProps::~ElectricBallProps() */

void __thiscall ElectricBallProps::~ElectricBallProps(ElectricBallProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06748950;
  std::string::~string((string *)(this + 0x1e8));
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* ElectricBallProps::~ElectricBallProps() */

void __thiscall ElectricBallProps::~ElectricBallProps(ElectricBallProps *this)

{
  ~ElectricBallProps(this);
  AK::FreeHook(this);
  return;
}


/* ElectricBallProps::ElectricBallProps() */

void __thiscall ElectricBallProps::ElectricBallProps(ElectricBallProps *this)

{
  size_t in_x2;
  
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06748950;
  Set8BytesTo0((string *)(this + 0x1e8));
  *(undefined4 *)(this + 0x1e0) = 0x3f800000;
  std::string::append((string *)(this + 0x1e8),"storm",in_x2);
  return;
}


/* ElectricBallProps::StaticNew() */

ElectricBallProps * ElectricBallProps::StaticNew(void)

{
  ElectricBallProps *this;
  
  this = ::operator_new(0x1f0);
  ElectricBallProps(this);
  return this;
}

