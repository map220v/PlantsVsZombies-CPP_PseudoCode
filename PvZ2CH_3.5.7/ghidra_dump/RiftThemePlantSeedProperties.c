// Class: RiftThemePlantSeedProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemePlantSeedProperties::StaticClassInit() */

void RiftThemePlantSeedProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemePlantSeedProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0370577c,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemePlantSeedProperties::StaticGetClass() */

long * RiftThemePlantSeedProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemePlantSeedProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemePlantSeedProperties::GetClass() const */

long * RiftThemePlantSeedProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemePlantSeedProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemePlantSeedProperties::RiftThemePlantSeedProperties() */

void __thiscall
RiftThemePlantSeedProperties::RiftThemePlantSeedProperties(RiftThemePlantSeedProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06688640;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* RiftThemePlantSeedProperties::StaticNew() */

RiftThemePlantSeedProperties * RiftThemePlantSeedProperties::StaticNew(void)

{
  RiftThemePlantSeedProperties *this;
  
  this = ::operator_new(0x38);
  RiftThemePlantSeedProperties(this);
  return this;
}


/* RiftThemePlantSeedProperties::~RiftThemePlantSeedProperties() */

void __thiscall
RiftThemePlantSeedProperties::~RiftThemePlantSeedProperties(RiftThemePlantSeedProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06688640;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x20));
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemePlantSeedProperties::~RiftThemePlantSeedProperties() */

void __thiscall
RiftThemePlantSeedProperties::~RiftThemePlantSeedProperties(RiftThemePlantSeedProperties *this)

{
  ~RiftThemePlantSeedProperties(this);
  AK::FreeHook(this);
  return;
}

