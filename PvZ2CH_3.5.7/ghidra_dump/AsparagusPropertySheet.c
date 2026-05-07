// Class: AsparagusPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AsparagusPropertySheet::StaticClassInit() */

void AsparagusPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"AsparagusPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_0410396c,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AsparagusPropertySheet::StaticGetClass() */

long * AsparagusPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AsparagusPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AsparagusPropertySheet::GetClass() const */

long * AsparagusPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"AsparagusPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AsparagusPropertySheet::AsparagusPropertySheet() */

void __thiscall AsparagusPropertySheet::AsparagusPropertySheet(AsparagusPropertySheet *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067e3860;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2b8));
  return;
}


/* AsparagusPropertySheet::StaticNew() */

AsparagusPropertySheet * AsparagusPropertySheet::StaticNew(void)

{
  AsparagusPropertySheet *this;
  
  this = ::operator_new(0x2d8);
  AsparagusPropertySheet(this);
  return this;
}


/* AsparagusPropertySheet::~AsparagusPropertySheet() */

void __thiscall AsparagusPropertySheet::~AsparagusPropertySheet(AsparagusPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_067e3860;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* AsparagusPropertySheet::~AsparagusPropertySheet() */

void __thiscall AsparagusPropertySheet::~AsparagusPropertySheet(AsparagusPropertySheet *this)

{
  ~AsparagusPropertySheet(this);
  AK::FreeHook(this);
  return;
}

