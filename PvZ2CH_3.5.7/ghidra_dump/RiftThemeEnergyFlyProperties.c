// Class: RiftThemeEnergyFlyProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeEnergyFlyProperties::StaticClassInit() */

void RiftThemeEnergyFlyProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeEnergyFlyProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_037058e0,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeEnergyFlyProperties::StaticGetClass() */

long * RiftThemeEnergyFlyProperties::StaticGetClass(void)

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
  uVar2 = RiftThemeProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeEnergyFlyProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeEnergyFlyProperties::GetClass() const */

long * RiftThemeEnergyFlyProperties::GetClass(void)

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
  uVar2 = RiftThemeProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeEnergyFlyProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeEnergyFlyProperties::RiftThemeEnergyFlyProperties() */

void __thiscall
RiftThemeEnergyFlyProperties::RiftThemeEnergyFlyProperties(RiftThemeEnergyFlyProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06688770;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* RiftThemeEnergyFlyProperties::StaticNew() */

RiftThemeEnergyFlyProperties * RiftThemeEnergyFlyProperties::StaticNew(void)

{
  RiftThemeEnergyFlyProperties *this;
  
  this = ::operator_new(0x40);
  RiftThemeEnergyFlyProperties(this);
  return this;
}


/* RiftThemeEnergyFlyProperties::~RiftThemeEnergyFlyProperties() */

void __thiscall
RiftThemeEnergyFlyProperties::~RiftThemeEnergyFlyProperties(RiftThemeEnergyFlyProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06688770;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20));
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeEnergyFlyProperties::~RiftThemeEnergyFlyProperties() */

void __thiscall
RiftThemeEnergyFlyProperties::~RiftThemeEnergyFlyProperties(RiftThemeEnergyFlyProperties *this)

{
  ~RiftThemeEnergyFlyProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeEnergyFlyProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
RiftThemeEnergyFlyProperties::GatherResourceRequirements
          (RiftThemeEnergyFlyProperties *this,set *param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UI_ModifyParts");
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)param_1,
             asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

