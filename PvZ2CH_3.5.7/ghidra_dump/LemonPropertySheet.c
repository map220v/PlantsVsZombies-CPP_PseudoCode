// Class: LemonPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LemonPropertySheet::StaticClassInit() */

void LemonPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"LemonPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_040954c0,0x2f8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LemonPropertySheet::StaticGetClass() */

long * LemonPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LemonPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LemonPropertySheet::GetClass() const */

long * LemonPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"LemonPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LemonPropertySheet::LemonPropertySheet() */

void __thiscall LemonPropertySheet::LemonPropertySheet(LemonPropertySheet *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x41a00000;
  *(undefined ***)this = &PTR_GetClass_067ce760;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2e0));
  return;
}


/* LemonPropertySheet::StaticNew() */

LemonPropertySheet * LemonPropertySheet::StaticNew(void)

{
  LemonPropertySheet *this;
  
  this = ::operator_new(0x2f8);
  LemonPropertySheet(this);
  return this;
}


/* LemonPropertySheet::~LemonPropertySheet() */

void __thiscall LemonPropertySheet::~LemonPropertySheet(LemonPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_067ce760;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2e0));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* LemonPropertySheet::~LemonPropertySheet() */

void __thiscall LemonPropertySheet::~LemonPropertySheet(LemonPropertySheet *this)

{
  ~LemonPropertySheet(this);
  AK::FreeHook(this);
  return;
}

