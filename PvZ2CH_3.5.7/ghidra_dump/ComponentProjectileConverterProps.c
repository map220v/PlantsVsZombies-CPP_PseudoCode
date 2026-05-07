// Class: ComponentProjectileConverterProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentProjectileConverterProps::StaticClassInit() */

void ComponentProjectileConverterProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ConvertProjectileNameNode");
    (*pcVar3)(plVar2,asStack_10,FUN_03b94504,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ComponentProjectileConverterProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03b94f4c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentProjectileConverterProps::StaticGetClass() */

long * ComponentProjectileConverterProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ComponentProjectileConverterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentProjectileConverterProps::GetClass() const */

long * ComponentProjectileConverterProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ComponentProjectileConverterProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentProjectileConverterProps::ComponentProjectileConverterProps() */

void __thiscall
ComponentProjectileConverterProps::ComponentProjectileConverterProps
          (ComponentProjectileConverterProps *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06736310;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  std::vector<ConvertProjectileNameNode,std::allocator<ConvertProjectileNameNode>>::clear
            ((vector<ConvertProjectileNameNode,std::allocator<ConvertProjectileNameNode>> *)
             (this + 0x10));
  return;
}


/* ComponentProjectileConverterProps::StaticNew() */

ComponentProjectileConverterProps * ComponentProjectileConverterProps::StaticNew(void)

{
  ComponentProjectileConverterProps *this;
  
  this = ::operator_new(0x28);
  ComponentProjectileConverterProps(this);
  return this;
}


/* ComponentProjectileConverterProps::~ComponentProjectileConverterProps() */

void __thiscall
ComponentProjectileConverterProps::~ComponentProjectileConverterProps
          (ComponentProjectileConverterProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06736310;
  std::vector<ConvertProjectileNameNode,std::allocator<ConvertProjectileNameNode>>::~vector
            ((vector<ConvertProjectileNameNode,std::allocator<ConvertProjectileNameNode>> *)
             (this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* ComponentProjectileConverterProps::~ComponentProjectileConverterProps() */

void __thiscall
ComponentProjectileConverterProps::~ComponentProjectileConverterProps
          (ComponentProjectileConverterProps *this)

{
  ~ComponentProjectileConverterProps(this);
  AK::FreeHook(this);
  return;
}


/* ComponentProjectileConverterProps::TEMPNAMEPLACEHOLDERVALUE(ComponentProjectileConverterProps
   const&) */

ComponentProjectileConverterProps * __thiscall
ComponentProjectileConverterProps::operator=
          (ComponentProjectileConverterProps *this,ComponentProjectileConverterProps *param_1)

{
  PropertySheetBase::operator=((PropertySheetBase *)this,(PropertySheetBase *)param_1);
  std::vector<ConvertProjectileNameNode,std::allocator<ConvertProjectileNameNode>>::operator=
            ((vector<ConvertProjectileNameNode,std::allocator<ConvertProjectileNameNode>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return this;
}

