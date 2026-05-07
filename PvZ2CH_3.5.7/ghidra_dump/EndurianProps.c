// Class: EndurianProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EndurianProps::StaticClassInit() */

void EndurianProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"EndurianProps");
    (*pcVar2)(plVar1,asStack_10,FUN_040e5c54,0x300,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EndurianProps::StaticGetClass() */

long * EndurianProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EndurianProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EndurianProps::GetClass() const */

long * EndurianProps::GetClass(void)

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
  (*pcVar3)(plVar1,"EndurianProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EndurianProps::EndurianProps() */

void __thiscall EndurianProps::EndurianProps(EndurianProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067de6b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2c0));
  ZombieRestrictionSet::ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2d8));
  *(undefined4 *)(this + 0x2b8) = 0x45fa0000;
  *(undefined4 *)(this + 700) = 0;
  return;
}


/* EndurianProps::StaticNew() */

EndurianProps * EndurianProps::StaticNew(void)

{
  EndurianProps *this;
  
  this = ::operator_new(0x300);
  EndurianProps(this);
  return this;
}


/* EndurianProps::~EndurianProps() */

void __thiscall EndurianProps::~EndurianProps(EndurianProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067de6b0;
  ZombieRestrictionSet::~ZombieRestrictionSet((ZombieRestrictionSet *)(this + 0x2d8));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* EndurianProps::~EndurianProps() */

void __thiscall EndurianProps::~EndurianProps(EndurianProps *this)

{
  ~EndurianProps(this);
  AK::FreeHook(this);
  return;
}

