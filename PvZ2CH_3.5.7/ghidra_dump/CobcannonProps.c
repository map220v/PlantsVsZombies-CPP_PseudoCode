// Class: CobcannonProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CobcannonProps::StaticClassInit() */

void CobcannonProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"CobcannonProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04147e60,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CobcannonProps::StaticGetClass() */

long * CobcannonProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CobcannonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CobcannonProps::GetClass() const */

long * CobcannonProps::GetClass(void)

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
  (*pcVar3)(plVar1,"CobcannonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CobcannonProps::CobcannonProps() */

void __thiscall CobcannonProps::CobcannonProps(CobcannonProps *this)

{
  undefined4 uVar1;
  
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 0x2b8) = 0x1e;
  *(undefined ***)this = &PTR_GetClass_067eed70;
  *(undefined4 *)(this + 700) = 5;
  uVar1 = _FUN_04149fb0;
  *(undefined4 *)(this + 0x2c0) = 5;
  *(undefined4 *)(this + 0x2c4) = 0x3f800000;
  *(undefined4 *)(this + 0x2c8) = uVar1;
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0x2cc),0.0,0.0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d8));
  return;
}


/* CobcannonProps::StaticNew() */

CobcannonProps * CobcannonProps::StaticNew(void)

{
  CobcannonProps *this;
  
  this = ::operator_new(0x2f0);
  CobcannonProps(this);
  return this;
}


/* CobcannonProps::~CobcannonProps() */

void __thiscall CobcannonProps::~CobcannonProps(CobcannonProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067eed70;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2d8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* CobcannonProps::~CobcannonProps() */

void __thiscall CobcannonProps::~CobcannonProps(CobcannonProps *this)

{
  ~CobcannonProps(this);
  AK::FreeHook(this);
  return;
}

