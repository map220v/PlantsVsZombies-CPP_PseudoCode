// Class: RiftThemeJunggledProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeJunggledProperties::StaticClassInit() */

void RiftThemeJunggledProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeJunggledProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03705af0,0x98,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeJunggledProperties::StaticGetClass() */

long * RiftThemeJunggledProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeJunggledProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeJunggledProperties::GetClass() const */

long * RiftThemeJunggledProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeJunggledProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeJunggledProperties::RiftThemeJunggledProperties() */

void __thiscall
RiftThemeJunggledProperties::RiftThemeJunggledProperties(RiftThemeJunggledProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06686a10;
  DVec3::DVec3((DVec3 *)(this + 0x20));
  DVec3::DVec3((DVec3 *)(this + 0x2c));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x38));
  *(undefined4 *)(this + 0x40) = 3;
  *(undefined4 *)(this + 0x44) = 0x40000000;
  *(undefined4 *)(this + 0x48) = 0x3f4ccccd;
  *(undefined4 *)(this + 0x4c) = 0x42f00000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  return;
}


/* RiftThemeJunggledProperties::StaticNew() */

RiftThemeJunggledProperties * RiftThemeJunggledProperties::StaticNew(void)

{
  RiftThemeJunggledProperties *this;
  
  this = ::operator_new(0x98);
  RiftThemeJunggledProperties(this);
  return this;
}


/* RiftThemeJunggledProperties::~RiftThemeJunggledProperties() */

void __thiscall
RiftThemeJunggledProperties::~RiftThemeJunggledProperties(RiftThemeJunggledProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06686a10;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x80));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x68));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x50));
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeJunggledProperties::~RiftThemeJunggledProperties() */

void __thiscall
RiftThemeJunggledProperties::~RiftThemeJunggledProperties(RiftThemeJunggledProperties *this)

{
  ~RiftThemeJunggledProperties(this);
  AK::FreeHook(this);
  return;
}

