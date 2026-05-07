// Class: RiftThemeCharging


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeCharging::StaticClassInit() */

void RiftThemeCharging::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeCharging");
    (*pcVar2)(plVar1,asStack_10,FUN_0370191c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeCharging::StaticGetClass() */

long * RiftThemeCharging::StaticGetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeCharging",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeCharging::GetClass() const */

long * RiftThemeCharging::GetClass(void)

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
  uVar2 = RiftTheme::StaticGetClass();
  (*pcVar3)(plVar1,"RiftThemeCharging",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeCharging::~RiftThemeCharging() */

void __thiscall RiftThemeCharging::~RiftThemeCharging(RiftThemeCharging *this)

{
  *(undefined ***)this = &PTR_GetClass_066892b0;
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeCharging::~RiftThemeCharging() */

void __thiscall RiftThemeCharging::~RiftThemeCharging(RiftThemeCharging *this)

{
  ~RiftThemeCharging(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeCharging::RiftThemeCharging() */

void __thiscall RiftThemeCharging::RiftThemeCharging(RiftThemeCharging *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_066892b0;
  return;
}


/* RiftThemeCharging::StaticNew() */

RiftThemeCharging * RiftThemeCharging::StaticNew(void)

{
  RiftThemeCharging *this;
  
  this = ::operator_new(0x20);
  RiftThemeCharging(this);
  return this;
}

