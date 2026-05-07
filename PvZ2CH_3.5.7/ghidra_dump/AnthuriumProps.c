// Class: AnthuriumProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnthuriumProps::StaticClassInit() */

void AnthuriumProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"AnthuriumProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0421ea34,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AnthuriumProps::StaticGetClass() */

long * AnthuriumProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"AnthuriumProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnthuriumProps::GetClass() const */

long * AnthuriumProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"AnthuriumProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AnthuriumProps::AnthuriumProps() */

void __thiscall AnthuriumProps::AnthuriumProps(AnthuriumProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0680e540;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c0));
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 700) = 0;
  return;
}


/* AnthuriumProps::StaticNew() */

AnthuriumProps * AnthuriumProps::StaticNew(void)

{
  AnthuriumProps *this;
  
  this = ::operator_new(0x2d8);
  AnthuriumProps(this);
  return this;
}


/* AnthuriumProps::~AnthuriumProps() */

void __thiscall AnthuriumProps::~AnthuriumProps(AnthuriumProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0680e540;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* AnthuriumProps::~AnthuriumProps() */

void __thiscall AnthuriumProps::~AnthuriumProps(AnthuriumProps *this)

{
  ~AnthuriumProps(this);
  AK::FreeHook(this);
  return;
}

