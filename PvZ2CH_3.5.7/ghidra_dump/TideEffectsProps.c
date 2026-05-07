// Class: TideEffectsProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TideEffectsProps::StaticClassInit() */

void TideEffectsProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"TideEffectsProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0435f20c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TideEffectsProps::StaticGetClass() */

long * TideEffectsProps::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"TideEffectsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TideEffectsProps::GetClass() const */

long * TideEffectsProps::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"TideEffectsProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TideEffectsProps::TideEffectsProps() */

void __thiscall TideEffectsProps::TideEffectsProps(TideEffectsProps *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06834dd0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* TideEffectsProps::StaticNew() */

TideEffectsProps * TideEffectsProps::StaticNew(void)

{
  TideEffectsProps *this;
  
  this = ::operator_new(0x28);
  TideEffectsProps(this);
  return this;
}


/* TideEffectsProps::~TideEffectsProps() */

void __thiscall TideEffectsProps::~TideEffectsProps(TideEffectsProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06834dd0;
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::~vector
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* TideEffectsProps::~TideEffectsProps() */

void __thiscall TideEffectsProps::~TideEffectsProps(TideEffectsProps *this)

{
  ~TideEffectsProps(this);
  AK::FreeHook(this);
  return;
}

