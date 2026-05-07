// Class: RiftThemeColdReduceProperties


/* RiftThemeColdReduceProperties::~RiftThemeColdReduceProperties() */

void __thiscall
RiftThemeColdReduceProperties::~RiftThemeColdReduceProperties(RiftThemeColdReduceProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06688e90;
  RiftThemeProperties::~RiftThemeProperties((RiftThemeProperties *)this);
  return;
}


/* RiftThemeColdReduceProperties::~RiftThemeColdReduceProperties() */

void __thiscall
RiftThemeColdReduceProperties::~RiftThemeColdReduceProperties(RiftThemeColdReduceProperties *this)

{
  ~RiftThemeColdReduceProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeColdReduceProperties::StaticClassInit() */

void RiftThemeColdReduceProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeColdReduceProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03700a90,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeColdReduceProperties::StaticGetClass() */

long * RiftThemeColdReduceProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeColdReduceProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeColdReduceProperties::GetClass() const */

long * RiftThemeColdReduceProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeColdReduceProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeColdReduceProperties::RiftThemeColdReduceProperties() */

void __thiscall
RiftThemeColdReduceProperties::RiftThemeColdReduceProperties(RiftThemeColdReduceProperties *this)

{
  RiftThemeProperties::RiftThemeProperties((RiftThemeProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06688e90;
  return;
}


/* RiftThemeColdReduceProperties::StaticNew() */

RiftThemeColdReduceProperties * RiftThemeColdReduceProperties::StaticNew(void)

{
  RiftThemeColdReduceProperties *this;
  
  this = ::operator_new(0x20);
  RiftThemeColdReduceProperties(this);
  return this;
}

