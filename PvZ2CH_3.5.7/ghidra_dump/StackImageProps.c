// Class: StackImageProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StackImageProps::StaticClassInit() */

void StackImageProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"StackImageProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0385a8a0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StackImageProps::StaticGetClass() */

long * StackImageProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StackImageProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StackImageProps::GetClass() const */

long * StackImageProps::GetClass(void)

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
  (*pcVar3)(plVar1,"StackImageProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StackImageProps::StackImageProps() */

void __thiscall StackImageProps::StackImageProps(StackImageProps *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_066a8540;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* StackImageProps::StaticNew() */

StackImageProps * StackImageProps::StaticNew(void)

{
  StackImageProps *this;
  
  this = ::operator_new(0x40);
  StackImageProps(this);
  return this;
}


/* StackImageProps::~StackImageProps() */

void __thiscall StackImageProps::~StackImageProps(StackImageProps *this)

{
  *(undefined ***)this = &PTR_GetClass_066a8540;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x28));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* StackImageProps::~StackImageProps() */

void __thiscall StackImageProps::~StackImageProps(StackImageProps *this)

{
  ~StackImageProps(this);
  AK::FreeHook(this);
  return;
}

