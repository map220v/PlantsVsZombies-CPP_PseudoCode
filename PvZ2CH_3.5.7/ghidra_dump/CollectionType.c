// Class: CollectionType


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CollectionType::StaticClassInit() */

void CollectionType::StaticClassInit(void)

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
    std::string::string(asStack_10,"CollectionType");
    (*pcVar2)(plVar1,asStack_10,FUN_03830d28,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CollectionType::StaticGetClass() */

long * CollectionType::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CollectionType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectionType::GetClass() const */

long * CollectionType::GetClass(void)

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
  (*pcVar3)(plVar1,"CollectionType",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CollectionType::CollectionType() */

void __thiscall CollectionType::CollectionType(CollectionType *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_066a6460;
  Set8BytesTo0(this + 0x10);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  Set8BytesTo0(this + 0x30);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  return;
}


/* CollectionType::StaticNew() */

CollectionType * CollectionType::StaticNew(void)

{
  CollectionType *this;
  
  this = ::operator_new(0x88);
  CollectionType(this);
  return this;
}


/* CollectionType::~CollectionType() */

void __thiscall CollectionType::~CollectionType(CollectionType *this)

{
  *(undefined ***)this = &PTR_GetClass_066a6460;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x70));
  std::
  vector<std::vector<PlantBoost,std::allocator<PlantBoost>>,std::allocator<std::vector<PlantBoost,std::allocator<PlantBoost>>>>
  ::~vector((vector<std::vector<PlantBoost,std::allocator<PlantBoost>>,std::allocator<std::vector<PlantBoost,std::allocator<PlantBoost>>>>
             *)(this + 0x58));
  std::
  vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
  ::~vector((vector<std::vector<std::string,std::allocator<std::string>>,std::allocator<std::vector<std::string,std::allocator<std::string>>>>
             *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* CollectionType::~CollectionType() */

void __thiscall CollectionType::~CollectionType(CollectionType *this)

{
  ~CollectionType(this);
  AK::FreeHook(this);
  return;
}

