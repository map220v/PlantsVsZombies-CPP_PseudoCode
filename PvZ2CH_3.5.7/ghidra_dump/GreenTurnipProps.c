// Class: GreenTurnipProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GreenTurnipProps::StaticClassInit() */

void GreenTurnipProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"GreenTurnipProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040e1ba8,0x2e0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GreenTurnipProps::StaticGetClass() */

long * GreenTurnipProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GreenTurnipProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GreenTurnipProps::GetClass() const */

long * GreenTurnipProps::GetClass(void)

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
  (*pcVar3)(plVar1,"GreenTurnipProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GreenTurnipProps::GreenTurnipProps() */

void __thiscall GreenTurnipProps::GreenTurnipProps(GreenTurnipProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067dd6a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c8));
  *(undefined4 *)(this + 700) = 0x3f99999a;
  *(undefined4 *)(this + 0x2b8) = 0;
  *(undefined4 *)(this + 0x2c0) = 0x43af0000;
  return;
}


/* GreenTurnipProps::StaticNew() */

GreenTurnipProps * GreenTurnipProps::StaticNew(void)

{
  GreenTurnipProps *this;
  
  this = ::operator_new(0x2e0);
  GreenTurnipProps(this);
  return this;
}


/* GreenTurnipProps::~GreenTurnipProps() */

void __thiscall GreenTurnipProps::~GreenTurnipProps(GreenTurnipProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067dd6a0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x2c8));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* GreenTurnipProps::~GreenTurnipProps() */

void __thiscall GreenTurnipProps::~GreenTurnipProps(GreenTurnipProps *this)

{
  ~GreenTurnipProps(this);
  AK::FreeHook(this);
  return;
}

