// Class: DinosaurStegosaurusPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurStegosaurusPropertySheet::StaticClassInit() */

void DinosaurStegosaurusPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurStegosaurusPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_048257f4,0xe0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurStegosaurusPropertySheet::StaticGetClass() */

long * DinosaurStegosaurusPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurStegosaurusPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurStegosaurusPropertySheet::GetClass() const */

long * DinosaurStegosaurusPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurStegosaurusPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurStegosaurusPropertySheet::DinosaurStegosaurusPropertySheet() */

void __thiscall
DinosaurStegosaurusPropertySheet::DinosaurStegosaurusPropertySheet
          (DinosaurStegosaurusPropertySheet *this)

{
  int iVar1;
  
  DinosaurPropertySheet::DinosaurPropertySheet((DinosaurPropertySheet *)this);
  *(undefined4 *)(this + 0xa8) = 3;
  *(undefined4 *)(this + 0xac) = 3;
  *(undefined ***)this = &PTR_GetClass_06905150;
  iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
  *(int *)(this + 0xb0) = iVar1 + -1;
  *(undefined4 *)(this + 0xd4) = 1000;
  *(undefined4 *)(this + 0xd8) = 200;
  *(undefined4 *)(this + 0xb4) = 0x40e00000;
  *(undefined4 *)(this + 0xb8) = 0x3f400000;
  *(undefined4 *)(this + 0xc0) = 0x3f800000;
  *(undefined4 *)(this + 0xd0) = 0x3f800000;
  *(undefined4 *)(this + 0xbc) = 0x3fc00000;
  *(undefined4 *)(this + 0xc4) = 0x42c80000;
  *(undefined4 *)(this + 200) = 0x42c80000;
  *(undefined4 *)(this + 0xcc) = 0x43960000;
  *(undefined4 *)(this + 0xdc) = 0x41700000;
  return;
}


/* DinosaurStegosaurusPropertySheet::StaticNew() */

DinosaurStegosaurusPropertySheet * DinosaurStegosaurusPropertySheet::StaticNew(void)

{
  DinosaurStegosaurusPropertySheet *this;
  
  this = ::operator_new(0xe0);
  DinosaurStegosaurusPropertySheet(this);
  return this;
}


/* DinosaurStegosaurusPropertySheet::~DinosaurStegosaurusPropertySheet() */

void __thiscall
DinosaurStegosaurusPropertySheet::~DinosaurStegosaurusPropertySheet
          (DinosaurStegosaurusPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06905150;
  DinosaurPropertySheet::~DinosaurPropertySheet((DinosaurPropertySheet *)this);
  return;
}


/* DinosaurStegosaurusPropertySheet::~DinosaurStegosaurusPropertySheet() */

void __thiscall
DinosaurStegosaurusPropertySheet::~DinosaurStegosaurusPropertySheet
          (DinosaurStegosaurusPropertySheet *this)

{
  ~DinosaurStegosaurusPropertySheet(this);
  AK::FreeHook(this);
  return;
}

