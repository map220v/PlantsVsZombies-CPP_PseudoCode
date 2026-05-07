// Class: MomotaroRiderNinjaPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MomotaroRiderNinjaPropertySheet::StaticClassInit() */

void MomotaroRiderNinjaPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"MomotaroRiderNinjaPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_04a29d38,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MomotaroRiderNinjaPropertySheet::StaticGetClass() */

long * MomotaroRiderNinjaPropertySheet::StaticGetClass(void)

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
  uVar2 = EggplantNinjaPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"MomotaroRiderNinjaPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MomotaroRiderNinjaPropertySheet::GetClass() const */

long * MomotaroRiderNinjaPropertySheet::GetClass(void)

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
  uVar2 = EggplantNinjaPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"MomotaroRiderNinjaPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MomotaroRiderNinjaPropertySheet::MomotaroRiderNinjaPropertySheet() */

void __thiscall
MomotaroRiderNinjaPropertySheet::MomotaroRiderNinjaPropertySheet
          (MomotaroRiderNinjaPropertySheet *this)

{
  EggplantNinjaPropertySheet::EggplantNinjaPropertySheet((EggplantNinjaPropertySheet *)this);
  *(undefined4 *)(this + 0x2cc) = 1;
  *(undefined ***)this = &PTR_GetClass_069302f0;
  return;
}


/* MomotaroRiderNinjaPropertySheet::StaticNew() */

MomotaroRiderNinjaPropertySheet * MomotaroRiderNinjaPropertySheet::StaticNew(void)

{
  MomotaroRiderNinjaPropertySheet *this;
  
  this = ::operator_new(0x2d0);
  MomotaroRiderNinjaPropertySheet(this);
  return this;
}


/* MomotaroRiderNinjaPropertySheet::~MomotaroRiderNinjaPropertySheet() */

void __thiscall
MomotaroRiderNinjaPropertySheet::~MomotaroRiderNinjaPropertySheet
          (MomotaroRiderNinjaPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_069302f0;
  EggplantNinjaPropertySheet::~EggplantNinjaPropertySheet((EggplantNinjaPropertySheet *)this);
  return;
}


/* MomotaroRiderNinjaPropertySheet::~MomotaroRiderNinjaPropertySheet() */

void __thiscall
MomotaroRiderNinjaPropertySheet::~MomotaroRiderNinjaPropertySheet
          (MomotaroRiderNinjaPropertySheet *this)

{
  ~MomotaroRiderNinjaPropertySheet(this);
  AK::FreeHook(this);
  return;
}

