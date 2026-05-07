// Class: DartichokeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DartichokeProps::StaticClassInit() */

void DartichokeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DartichokeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_042e2cc8,0x338,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DartichokeProps::StaticGetClass() */

long * DartichokeProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DartichokeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DartichokeProps::GetClass() const */

long * DartichokeProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DartichokeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DartichokeProps::DartichokeProps() */

void __thiscall DartichokeProps::DartichokeProps(DartichokeProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06830420;
  ClassBucketFilter::ClassBucketFilter((ClassBucketFilter *)(this + 0x2e8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x308));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 800));
  *(undefined4 *)(this + 0x2b8) = 5;
  *(undefined4 *)(this + 0x2d0) = 0x40c00000;
  *(undefined4 *)(this + 700) = 0xfffffff8;
  *(undefined4 *)(this + 0x2c0) = 0xfffffffc;
  *(undefined4 *)(this + 0x2d4) = 0x3f400000;
  *(undefined4 *)(this + 0x2c4) = 0xf;
  *(undefined4 *)(this + 0x2cc) = 2;
  *(undefined4 *)(this + 0x2d8) = 0x3f000000;
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2dc) = 0x41200000;
  *(undefined4 *)(this + 0x2e0) = 0;
  return;
}


/* DartichokeProps::StaticNew() */

DartichokeProps * DartichokeProps::StaticNew(void)

{
  DartichokeProps *this;
  
  this = ::operator_new(0x338);
  DartichokeProps(this);
  return this;
}


/* DartichokeProps::~DartichokeProps() */

void __thiscall DartichokeProps::~DartichokeProps(DartichokeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06830420;
  std::vector<ValueRange,std::allocator<ValueRange>>::~vector
            ((vector<ValueRange,std::allocator<ValueRange>> *)(this + 800));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x308));
  ClassBucketFilter::~ClassBucketFilter((ClassBucketFilter *)(this + 0x2e8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* DartichokeProps::~DartichokeProps() */

void __thiscall DartichokeProps::~DartichokeProps(DartichokeProps *this)

{
  ~DartichokeProps(this);
  AK::FreeHook(this);
  return;
}

