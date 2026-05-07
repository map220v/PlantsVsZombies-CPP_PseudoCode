// Class: DinosaurTyrannosaurusPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurTyrannosaurusPropertySheet::StaticClassInit() */

void DinosaurTyrannosaurusPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinosaurTyrannosaurusPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_0482b430,0xd0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurTyrannosaurusPropertySheet::StaticGetClass() */

long * DinosaurTyrannosaurusPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurTyrannosaurusPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinosaurTyrannosaurusPropertySheet::GetClass() const */

long * DinosaurTyrannosaurusPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"DinosaurTyrannosaurusPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinosaurTyrannosaurusPropertySheet::DinosaurTyrannosaurusPropertySheet() */

void __thiscall
DinosaurTyrannosaurusPropertySheet::DinosaurTyrannosaurusPropertySheet
          (DinosaurTyrannosaurusPropertySheet *this)

{
  long lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DinosaurPropertySheet::DinosaurPropertySheet((DinosaurPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_069057e0;
  Sexy::Insets::Insets((Insets *)(this + 0xb4));
  *(undefined4 *)(this + 0xac) = 5;
  *(undefined4 *)(this + 0xb0) = 4;
  *(undefined4 *)(this + 0xa8) = 0x3f800000;
  Sexy::Insets::Insets((Insets *)&local_18,0,0,0x40,0x40);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0xb4) = local_18;
  *(undefined8 *)(this + 0xbc) = uStack_10;
  *(undefined4 *)(this + 0xc4) = 1;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3f800000;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinosaurTyrannosaurusPropertySheet::StaticNew() */

DinosaurTyrannosaurusPropertySheet * DinosaurTyrannosaurusPropertySheet::StaticNew(void)

{
  DinosaurTyrannosaurusPropertySheet *this;
  
  this = ::operator_new(0xd0);
  DinosaurTyrannosaurusPropertySheet(this);
  return this;
}


/* DinosaurTyrannosaurusPropertySheet::~DinosaurTyrannosaurusPropertySheet() */

void __thiscall
DinosaurTyrannosaurusPropertySheet::~DinosaurTyrannosaurusPropertySheet
          (DinosaurTyrannosaurusPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_069057e0;
  DinosaurPropertySheet::~DinosaurPropertySheet((DinosaurPropertySheet *)this);
  return;
}


/* DinosaurTyrannosaurusPropertySheet::~DinosaurTyrannosaurusPropertySheet() */

void __thiscall
DinosaurTyrannosaurusPropertySheet::~DinosaurTyrannosaurusPropertySheet
          (DinosaurTyrannosaurusPropertySheet *this)

{
  ~DinosaurTyrannosaurusPropertySheet(this);
  AK::FreeHook(this);
  return;
}

