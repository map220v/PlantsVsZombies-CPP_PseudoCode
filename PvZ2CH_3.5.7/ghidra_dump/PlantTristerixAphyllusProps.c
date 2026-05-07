// Class: PlantTristerixAphyllusProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTristerixAphyllusProps::StaticClassInit() */

void PlantTristerixAphyllusProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTristerixAphyllusProps");
    (*pcVar2)(plVar1,asStack_10,FUN_042a6d00,0x330,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTristerixAphyllusProps::StaticGetClass() */

long * PlantTristerixAphyllusProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTristerixAphyllusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTristerixAphyllusProps::GetClass() const */

long * PlantTristerixAphyllusProps::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTristerixAphyllusProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTristerixAphyllusProps::~PlantTristerixAphyllusProps() */

void __thiscall
PlantTristerixAphyllusProps::~PlantTristerixAphyllusProps(PlantTristerixAphyllusProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06829ea0;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x318));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x300));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x2e8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* PlantTristerixAphyllusProps::~PlantTristerixAphyllusProps() */

void __thiscall
PlantTristerixAphyllusProps::~PlantTristerixAphyllusProps(PlantTristerixAphyllusProps *this)

{
  ~PlantTristerixAphyllusProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTristerixAphyllusProps::PlantTristerixAphyllusProps() */

void __thiscall
PlantTristerixAphyllusProps::PlantTristerixAphyllusProps(PlantTristerixAphyllusProps *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *this_00;
  int local_c;
  long local_8;
  
  this_00 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2e8);
  local_8 = ___stack_chk_guard;
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06829ea0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(this_00);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x300));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x318));
  *(undefined4 *)(this + 0x2dc) = 5;
  *(undefined4 *)(this + 0x2e0) = 6;
  local_c = 1;
  *(undefined4 *)(this + 0x2c0) = 0x40200000;
  *(undefined4 *)(this + 0x2c4) = 0x40a00000;
  *(undefined4 *)(this + 0x2d4) = 0x43fa0000;
  *(undefined4 *)(this + 0x2c8) = 0x40400000;
  *(undefined4 *)(this + 0x2cc) = 0x3f800000;
  *(undefined4 *)(this + 0x2d8) = 0x3f800000;
  *(undefined4 *)(this + 0x2d0) = 0x40000000;
  *(undefined4 *)(this + 700) = 0x40800000;
  *(undefined4 *)(this + 0x2b8) = 0x43c80000;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)this_00,&local_c);
  local_c = 3;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)this_00,&local_c);
  local_c = 5;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)this_00,&local_c);
  local_c = 7;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)this_00,&local_c);
  local_c = 10;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)this_00,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTristerixAphyllusProps::StaticNew() */

PlantTristerixAphyllusProps * PlantTristerixAphyllusProps::StaticNew(void)

{
  PlantTristerixAphyllusProps *this;
  
  this = ::operator_new(0x330);
  PlantTristerixAphyllusProps(this);
  return this;
}

