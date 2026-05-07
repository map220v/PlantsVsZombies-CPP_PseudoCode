// Class: SaucerPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SaucerPropertySheet::StaticClassInit() */

void SaucerPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"SaucerPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_0410666c,0x2d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SaucerPropertySheet::StaticGetClass() */

long * SaucerPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SaucerPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SaucerPropertySheet::GetClass() const */

long * SaucerPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"SaucerPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SaucerPropertySheet::SaucerPropertySheet() */

void __thiscall SaucerPropertySheet::SaucerPropertySheet(SaucerPropertySheet *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x41200000;
  *(undefined ***)this = &PTR_GetClass_067e40f0;
  *(undefined4 *)(this + 700) = 0x41a00000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c0));
  return;
}


/* SaucerPropertySheet::StaticNew() */

SaucerPropertySheet * SaucerPropertySheet::StaticNew(void)

{
  SaucerPropertySheet *this;
  
  this = ::operator_new(0x2d8);
  SaucerPropertySheet(this);
  return this;
}


/* SaucerPropertySheet::~SaucerPropertySheet() */

void __thiscall SaucerPropertySheet::~SaucerPropertySheet(SaucerPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_067e40f0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* SaucerPropertySheet::~SaucerPropertySheet() */

void __thiscall SaucerPropertySheet::~SaucerPropertySheet(SaucerPropertySheet *this)

{
  ~SaucerPropertySheet(this);
  AK::FreeHook(this);
  return;
}

