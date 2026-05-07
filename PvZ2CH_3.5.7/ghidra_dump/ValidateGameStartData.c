// Class: ValidateGameStartData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ValidateGameStartData::StaticClassInit() */

void ValidateGameStartData::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ValidatePlantAttackCD");
    (*pcVar3)(plVar2,asStack_10,FUN_037195c4,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ValidatePlantData");
    (*pcVar3)(plVar2,asStack_10,FUN_0371ba78,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ValidateGameStartData");
    (*pcVar3)(plVar2,asStack_10,FUN_0371d88c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ValidateGameStartData::StaticGetClass() */

long * ValidateGameStartData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ValidateGameStartData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ValidateGameStartData::GetClass() const */

long * ValidateGameStartData::GetClass(void)

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
  (*pcVar3)(plVar1,"ValidateGameStartData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ValidateGameStartData::ValidateGameStartData() */

void __thiscall ValidateGameStartData::ValidateGameStartData(ValidateGameStartData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0668a500;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<ValidatePlantData,std::allocator<ValidatePlantData>>::clear
            ((vector<ValidatePlantData,std::allocator<ValidatePlantData>> *)(this + 8));
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}


/* ValidateGameStartData::StaticNew() */

ValidateGameStartData * ValidateGameStartData::StaticNew(void)

{
  ValidateGameStartData *this;
  
  this = ::operator_new(0x30);
  ValidateGameStartData(this);
  return this;
}


/* ValidateGameStartData::~ValidateGameStartData() */

void __thiscall ValidateGameStartData::~ValidateGameStartData(ValidateGameStartData *this)

{
  *(undefined ***)this = &PTR_GetClass_0668a500;
  std::vector<ValidatePlantData,std::allocator<ValidatePlantData>>::~vector
            ((vector<ValidatePlantData,std::allocator<ValidatePlantData>> *)(this + 8));
  nop();
  return;
}


/* ValidateGameStartData::~ValidateGameStartData() */

void __thiscall ValidateGameStartData::~ValidateGameStartData(ValidateGameStartData *this)

{
  ~ValidateGameStartData(this);
  AK::FreeHook(this);
  return;
}

