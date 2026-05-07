// Class: TurkeypultProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TurkeypultProps::StaticClassInit() */

void TurkeypultProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"TurkeypultProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b040c4,0x348,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TurkeypultProps::StaticGetClass() */

long * TurkeypultProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"TurkeypultProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TurkeypultProps::GetClass() const */

long * TurkeypultProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"TurkeypultProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TurkeypultProps::TurkeypultProps() */

void __thiscall TurkeypultProps::TurkeypultProps(TurkeypultProps *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06729050;
  std::string::string((string *)(this + 0x2b8),"turkeypult_basic");
  nop();
  std::string::string((string *)(this + 0x2c0),"turkeypult_turkzilla");
  nop();
  std::string::string((string *)(this + 0x2c8),"turkeypult_turkzilla_avatar");
  nop();
  std::string::string((string *)(this + 0x2d0),"turkeypult_turkzilla_lv5");
  nop();
  *(undefined4 *)(this + 0x2e4) = 0x32;
  *(undefined4 *)(this + 0x2e8) = 0x32;
  *(undefined4 *)(this + 0x2dc) = 5;
  *(undefined4 *)(this + 0x2d8) = 1;
  *(undefined4 *)(this + 0x2e0) = 5;
  *(undefined4 *)(this + 0x2f4) = 0x3f4ccccd;
  *(undefined4 *)(this + 0x2ec) = 0;
  *(undefined4 *)(this + 0x2f0) = 0;
  PultProjectileProps::PultProjectileProps((PultProjectileProps *)(this + 0x2f8));
  PultProjectileProps::PultProjectileProps((PultProjectileProps *)(this + 800));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TurkeypultProps::StaticNew() */

TurkeypultProps * TurkeypultProps::StaticNew(void)

{
  TurkeypultProps *this;
  
  this = ::operator_new(0x348);
  TurkeypultProps(this);
  return this;
}


/* TurkeypultProps::~TurkeypultProps() */

void __thiscall TurkeypultProps::~TurkeypultProps(TurkeypultProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06729050;
  PultProjectileProps::~PultProjectileProps((PultProjectileProps *)(this + 800));
  PultProjectileProps::~PultProjectileProps((PultProjectileProps *)(this + 0x2f8));
  std::string::~string((string *)(this + 0x2d0));
  std::string::~string((string *)(this + 0x2c8));
  std::string::~string((string *)(this + 0x2c0));
  std::string::~string((string *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* TurkeypultProps::~TurkeypultProps() */

void __thiscall TurkeypultProps::~TurkeypultProps(TurkeypultProps *this)

{
  ~TurkeypultProps(this);
  AK::FreeHook(this);
  return;
}

