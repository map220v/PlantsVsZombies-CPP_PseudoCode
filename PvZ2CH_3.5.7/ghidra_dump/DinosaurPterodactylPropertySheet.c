// Class: DinosaurPterodactylPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactylPropertySheet::StaticClassInit() */

void DinosaurPterodactylPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurPterodactylPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_04819740,200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurPterodactylPropertySheet::StaticGetClass() */

long * DinosaurPterodactylPropertySheet::StaticGetClass(void)

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
  uVar2 = DinosaurPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurPterodactylPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurPterodactylPropertySheet::GetClass() const */

long * DinosaurPterodactylPropertySheet::GetClass(void)

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
  uVar2 = DinosaurPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"DinosaurPterodactylPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurPterodactylPropertySheet::DinosaurPterodactylPropertySheet() */

void __thiscall
DinosaurPterodactylPropertySheet::DinosaurPterodactylPropertySheet
          (DinosaurPterodactylPropertySheet *this)

{
  bool bVar1;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DinosaurPropertySheet::DinosaurPropertySheet((DinosaurPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06903e80;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,90.0,125.0);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined4 *)(this + 0xb0) = 4;
  *(undefined4 *)(this + 0xb4) = 7;
  *(undefined4 *)(this + 0xc0) = 3;
  *(undefined8 *)(this + 100) = local_10;
  *(undefined4 *)(this + 0xb8) = 0x40a00000;
  *(undefined4 *)(this + 0xbc) = 0x40a00000;
  *(undefined4 *)(this + 0xa8) = 0x43160000;
  *(undefined4 *)(this + 0xac) = 0x42700000;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurPterodactylPropertySheet::StaticNew() */

DinosaurPterodactylPropertySheet * DinosaurPterodactylPropertySheet::StaticNew(void)

{
  DinosaurPterodactylPropertySheet *this;
  
  this = ::operator_new(200);
  DinosaurPterodactylPropertySheet(this);
  return this;
}


/* DinosaurPterodactylPropertySheet::~DinosaurPterodactylPropertySheet() */

void __thiscall
DinosaurPterodactylPropertySheet::~DinosaurPterodactylPropertySheet
          (DinosaurPterodactylPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06903e80;
  DinosaurPropertySheet::~DinosaurPropertySheet((DinosaurPropertySheet *)this);
  return;
}


/* DinosaurPterodactylPropertySheet::~DinosaurPterodactylPropertySheet() */

void __thiscall
DinosaurPterodactylPropertySheet::~DinosaurPterodactylPropertySheet
          (DinosaurPterodactylPropertySheet *this)

{
  ~DinosaurPterodactylPropertySheet(this);
  AK::FreeHook(this);
  return;
}

