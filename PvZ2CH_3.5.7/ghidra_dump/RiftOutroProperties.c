// Class: RiftOutroProperties


/* RiftOutroProperties::GetModuleClass() const */

long * RiftOutroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (RiftOutro::sClass != (long *)0x0) {
    return RiftOutro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  RiftOutro::sClass = plVar1;
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"RiftOutro",uVar2,RiftOutro::StaticNew);
  RiftOutro::StaticClassInit();
  return RiftOutro::sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftOutroProperties::StaticClassInit() */

void RiftOutroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftOutroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_0368d780,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftOutroProperties::StaticGetClass() */

long * RiftOutroProperties::StaticGetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RiftOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftOutroProperties::GetClass() const */

long * RiftOutroProperties::GetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"RiftOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftOutroProperties::RiftOutroProperties() */

void __thiscall RiftOutroProperties::RiftOutroProperties(RiftOutroProperties *this)

{
  OutroModuleProperties::OutroModuleProperties((OutroModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0667cee0;
  return;
}


/* RiftOutroProperties::StaticNew() */

RiftOutroProperties * RiftOutroProperties::StaticNew(void)

{
  RiftOutroProperties *this;
  
  this = ::operator_new(0x40);
  RiftOutroProperties(this);
  return this;
}


/* RiftOutroProperties::~RiftOutroProperties() */

void __thiscall RiftOutroProperties::~RiftOutroProperties(RiftOutroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0667cee0;
  OutroModuleProperties::~OutroModuleProperties((OutroModuleProperties *)this);
  return;
}


/* RiftOutroProperties::~RiftOutroProperties() */

void __thiscall RiftOutroProperties::~RiftOutroProperties(RiftOutroProperties *this)

{
  ~RiftOutroProperties(this);
  AK::FreeHook(this);
  return;
}

