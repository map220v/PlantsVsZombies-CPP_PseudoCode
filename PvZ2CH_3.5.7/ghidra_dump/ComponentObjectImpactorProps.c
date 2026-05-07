// Class: ComponentObjectImpactorProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentObjectImpactorProps::StaticClassInit() */

void ComponentObjectImpactorProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ComponentObjectImpactorProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b97714,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentObjectImpactorProps::StaticGetClass() */

long * ComponentObjectImpactorProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ComponentObjectImpactorProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentObjectImpactorProps::GetClass() const */

long * ComponentObjectImpactorProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ComponentObjectImpactorProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentObjectImpactorProps::ComponentObjectImpactorProps() */

void __thiscall
ComponentObjectImpactorProps::ComponentObjectImpactorProps(ComponentObjectImpactorProps *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_067364b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x28));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  return;
}


/* ComponentObjectImpactorProps::StaticNew() */

ComponentObjectImpactorProps * ComponentObjectImpactorProps::StaticNew(void)

{
  ComponentObjectImpactorProps *this;
  
  this = ::operator_new(0x58);
  ComponentObjectImpactorProps(this);
  return this;
}


/* ComponentObjectImpactorProps::~ComponentObjectImpactorProps() */

void __thiscall
ComponentObjectImpactorProps::~ComponentObjectImpactorProps(ComponentObjectImpactorProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067364b0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x28));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* ComponentObjectImpactorProps::~ComponentObjectImpactorProps() */

void __thiscall
ComponentObjectImpactorProps::~ComponentObjectImpactorProps(ComponentObjectImpactorProps *this)

{
  ~ComponentObjectImpactorProps(this);
  AK::FreeHook(this);
  return;
}


/* ComponentObjectImpactorProps::TEMPNAMEPLACEHOLDERVALUE(ComponentObjectImpactorProps const&) */

ComponentObjectImpactorProps * __thiscall
ComponentObjectImpactorProps::operator=
          (ComponentObjectImpactorProps *this,ComponentObjectImpactorProps *param_1)

{
  PropertySheetBase::operator=((PropertySheetBase *)this,(PropertySheetBase *)param_1);
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x28),
             (vector *)(param_1 + 0x28));
  std::vector<std::string,std::allocator<std::string>>::operator=
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40),
             (vector *)(param_1 + 0x40));
  return this;
}

