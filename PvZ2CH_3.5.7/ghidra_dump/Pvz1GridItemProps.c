// Class: Pvz1GridItemProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Pvz1GridItemProps::StaticClassInit() */

void Pvz1GridItemProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"Pvz1GridItemProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03fce76c,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Pvz1GridItemProps::StaticGetClass() */

long * Pvz1GridItemProps::StaticGetClass(void)

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
  uVar2 = GridItemGravestonePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"Pvz1GridItemProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Pvz1GridItemProps::GetClass() const */

long * Pvz1GridItemProps::GetClass(void)

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
  uVar2 = GridItemGravestonePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"Pvz1GridItemProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Pvz1GridItemProps::Pvz1GridItemProps() */

void __thiscall Pvz1GridItemProps::Pvz1GridItemProps(Pvz1GridItemProps *this)

{
  GridItemGravestonePropertySheet::GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067ad0d0;
  return;
}


/* Pvz1GridItemProps::StaticNew() */

Pvz1GridItemProps * Pvz1GridItemProps::StaticNew(void)

{
  Pvz1GridItemProps *this;
  
  this = ::operator_new(0x110);
  Pvz1GridItemProps(this);
  return this;
}


/* Pvz1GridItemProps::~Pvz1GridItemProps() */

void __thiscall Pvz1GridItemProps::~Pvz1GridItemProps(Pvz1GridItemProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067ad0d0;
  GridItemGravestonePropertySheet::~GridItemGravestonePropertySheet
            ((GridItemGravestonePropertySheet *)this);
  return;
}


/* Pvz1GridItemProps::~Pvz1GridItemProps() */

void __thiscall Pvz1GridItemProps::~Pvz1GridItemProps(Pvz1GridItemProps *this)

{
  ~Pvz1GridItemProps(this);
  AK::FreeHook(this);
  return;
}

