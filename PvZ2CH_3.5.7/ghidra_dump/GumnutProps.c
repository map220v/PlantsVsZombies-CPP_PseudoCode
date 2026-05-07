// Class: GumnutProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GumnutProps::StaticClassInit() */

void GumnutProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GumnutProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04275814,800,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GumnutProps::StaticGetClass() */

long * GumnutProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GumnutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GumnutProps::GetClass() const */

long * GumnutProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GumnutProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GumnutProps::GumnutProps() */

void __thiscall GumnutProps::GumnutProps(GumnutProps *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06821900;
  std::string::string((string *)(this + 0x2b8),"gum");
  nop();
  std::string::string((string *)(this + 0x2c0),"poison_gum");
  nop();
  *(undefined4 *)(this + 0x2d0) = 5;
  *(undefined4 *)(this + 0x2d4) = 8;
  *(undefined4 *)(this + 0x2dc) = 0x3f000000;
  *(undefined4 *)(this + 0x2c8) = 0x457a0000;
  *(undefined4 *)(this + 0x2cc) = 0x42c80000;
  *(undefined4 *)(this + 0x2d8) = 0x43960000;
  *(undefined4 *)(this + 0x2e0) = 0x47c35000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2e8));
  ClassBucketFilter::ClassBucketFilter((ClassBucketFilter *)(this + 0x300));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GumnutProps::StaticNew() */

GumnutProps * GumnutProps::StaticNew(void)

{
  GumnutProps *this;
  
  this = ::operator_new(800);
  GumnutProps(this);
  return this;
}


/* GumnutProps::~GumnutProps() */

void __thiscall GumnutProps::~GumnutProps(GumnutProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06821900;
  ClassBucketFilter::~ClassBucketFilter((ClassBucketFilter *)(this + 0x300));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2e8));
  std::string::~string((string *)(this + 0x2c0));
  std::string::~string((string *)(this + 0x2b8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* GumnutProps::~GumnutProps() */

void __thiscall GumnutProps::~GumnutProps(GumnutProps *this)

{
  ~GumnutProps(this);
  AK::FreeHook(this);
  return;
}

