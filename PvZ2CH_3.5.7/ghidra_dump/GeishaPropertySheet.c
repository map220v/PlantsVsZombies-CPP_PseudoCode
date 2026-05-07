// Class: GeishaPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GeishaPropertySheet::StaticClassInit() */

void GeishaPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"GeishaPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_03c2e484,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GeishaPropertySheet::StaticGetClass() */

long * GeishaPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GeishaPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeishaPropertySheet::GetClass() const */

long * GeishaPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"GeishaPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GeishaPropertySheet::GeishaPropertySheet() */

void __thiscall GeishaPropertySheet::GeishaPropertySheet(GeishaPropertySheet *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 700) = 0x3e4ccccd;
  *(undefined ***)this = &PTR_GetClass_0674c300;
  *(undefined4 *)(this + 0x2c0) = 0x3ecccccd;
  *(undefined4 *)(this + 0x2c4) = 0x3dcccccd;
  return;
}


/* GeishaPropertySheet::StaticNew() */

GeishaPropertySheet * GeishaPropertySheet::StaticNew(void)

{
  GeishaPropertySheet *this;
  
  this = ::operator_new(0x2d0);
  GeishaPropertySheet(this);
  return this;
}


/* GeishaPropertySheet::~GeishaPropertySheet() */

void __thiscall GeishaPropertySheet::~GeishaPropertySheet(GeishaPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_0674c300;
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* GeishaPropertySheet::~GeishaPropertySheet() */

void __thiscall GeishaPropertySheet::~GeishaPropertySheet(GeishaPropertySheet *this)

{
  ~GeishaPropertySheet(this);
  AK::FreeHook(this);
  return;
}

