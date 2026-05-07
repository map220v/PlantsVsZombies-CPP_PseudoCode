// Class: MulberryPlasmaGrenadeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MulberryPlasmaGrenadeProps::StaticClassInit() */

void MulberryPlasmaGrenadeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"MulberryPlasmaGrenadeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03c0c88c,0x1f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MulberryPlasmaGrenadeProps::StaticGetClass() */

long * MulberryPlasmaGrenadeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MulberryPlasmaGrenadeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MulberryPlasmaGrenadeProps::GetClass() const */

long * MulberryPlasmaGrenadeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"MulberryPlasmaGrenadeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MulberryPlasmaGrenadeProps::~MulberryPlasmaGrenadeProps() */

void __thiscall
MulberryPlasmaGrenadeProps::~MulberryPlasmaGrenadeProps(MulberryPlasmaGrenadeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067468c0;
  ProjectilePropertySheet::~ProjectilePropertySheet((ProjectilePropertySheet *)this);
  return;
}


/* MulberryPlasmaGrenadeProps::~MulberryPlasmaGrenadeProps() */

void __thiscall
MulberryPlasmaGrenadeProps::~MulberryPlasmaGrenadeProps(MulberryPlasmaGrenadeProps *this)

{
  ~MulberryPlasmaGrenadeProps(this);
  AK::FreeHook(this);
  return;
}


/* MulberryPlasmaGrenadeProps::MulberryPlasmaGrenadeProps() */

void __thiscall
MulberryPlasmaGrenadeProps::MulberryPlasmaGrenadeProps(MulberryPlasmaGrenadeProps *this)

{
  ProjectilePropertySheet::ProjectilePropertySheet((ProjectilePropertySheet *)this);
  *(undefined4 *)(this + 0x1e0) = 0x41c80000;
  *(undefined ***)this = &PTR_GetClass_067468c0;
  *(undefined4 *)(this + 0x1e4) = 0x425c0000;
  *(undefined4 *)(this + 0x1e8) = 0x44160000;
  *(undefined4 *)(this + 0x1ec) = 0xc3fa0000;
  *(undefined4 *)(this + 0x1f0) = 0x3f4ccccd;
  return;
}


/* MulberryPlasmaGrenadeProps::StaticNew() */

MulberryPlasmaGrenadeProps * MulberryPlasmaGrenadeProps::StaticNew(void)

{
  MulberryPlasmaGrenadeProps *this;
  
  this = ::operator_new(0x1f8);
  MulberryPlasmaGrenadeProps(this);
  return this;
}

