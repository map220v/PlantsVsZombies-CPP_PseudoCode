// Class: BowlingBulbProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BowlingBulbProps::StaticClassInit() */

void BowlingBulbProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"BowlingBulbProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03f96874,0x2f0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BowlingBulbProps::BowlingBulbProps() */

void __thiscall BowlingBulbProps::BowlingBulbProps(BowlingBulbProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a5000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d8));
  *(undefined4 *)(this + 0x2b8) = 3;
  *(undefined4 *)(this + 700) = 0x40400000;
  return;
}


/* BowlingBulbProps::StaticNew() */

BowlingBulbProps * BowlingBulbProps::StaticNew(void)

{
  BowlingBulbProps *this;
  
  this = ::operator_new(0x2f0);
  BowlingBulbProps(this);
  return this;
}


/* BowlingBulbProps::~BowlingBulbProps() */

void __thiscall BowlingBulbProps::~BowlingBulbProps(BowlingBulbProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067a5000;
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2d8));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* BowlingBulbProps::~BowlingBulbProps() */

void __thiscall BowlingBulbProps::~BowlingBulbProps(BowlingBulbProps *this)

{
  ~BowlingBulbProps(this);
  AK::FreeHook(this);
  return;
}


/* BowlingBulbProps::StaticGetClass() */

long * BowlingBulbProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BowlingBulbProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BowlingBulbProps::GetClass() const */

long * BowlingBulbProps::GetClass(void)

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
  (*pcVar3)(plVar1,"BowlingBulbProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

