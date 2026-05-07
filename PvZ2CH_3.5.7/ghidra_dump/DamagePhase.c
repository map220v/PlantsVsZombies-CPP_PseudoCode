// Class: DamagePhase


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DamagePhase::StaticClassInit() */

void DamagePhase::StaticClassInit(void)

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
    std::string::string(asStack_10,"DamagePhase");
    (*pcVar2)(plVar1,asStack_10,FUN_03c904c0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DamagePhase::StaticGetClass() */

long * DamagePhase::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DamagePhase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DamagePhase::GetClass() const */

long * DamagePhase::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DamagePhase",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DamagePhase::DamagePhase() */

void __thiscall DamagePhase::DamagePhase(DamagePhase *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0675b270;
  Set8BytesTo0(this + 0x10);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* DamagePhase::StaticNew() */

DamagePhase * DamagePhase::StaticNew(void)

{
  DamagePhase *this;
  
  this = ::operator_new(0x30);
  DamagePhase(this);
  return this;
}


/* DamagePhase::~DamagePhase() */

void __thiscall DamagePhase::~DamagePhase(DamagePhase *this)

{
  *(undefined ***)this = &PTR_GetClass_0675b270;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  nop();
  return;
}


/* DamagePhase::~DamagePhase() */

void __thiscall DamagePhase::~DamagePhase(DamagePhase *this)

{
  ~DamagePhase(this);
  AK::FreeHook(this);
  return;
}


/* DamagePhase::DamagePhase(DamagePhase const&) */

void __thiscall DamagePhase::DamagePhase(DamagePhase *this,DamagePhase *param_1)

{
  undefined4 uVar1;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined ***)this = &PTR_GetClass_0675b270;
  *(undefined4 *)(this + 8) = uVar1;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18),
             (vector *)(param_1 + 0x18));
  return;
}

