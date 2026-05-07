// Class: RiftThemeTextOnly


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeTextOnly::StaticClassInit() */

void RiftThemeTextOnly::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeTextOnly");
    (*pcVar2)(plVar1,asStack_10,FUN_037021ec,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeTextOnly::StaticGetClass() */

long * RiftThemeTextOnly::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeTextOnly",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeTextOnly::GetClass() const */

long * RiftThemeTextOnly::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeTextOnly",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeTextOnly::~RiftThemeTextOnly() */

void __thiscall RiftThemeTextOnly::~RiftThemeTextOnly(RiftThemeTextOnly *this)

{
  *(undefined ***)this = &PTR_GetClass_06689510;
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeTextOnly::~RiftThemeTextOnly() */

void __thiscall RiftThemeTextOnly::~RiftThemeTextOnly(RiftThemeTextOnly *this)

{
  ~RiftThemeTextOnly(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeTextOnly::RiftThemeTextOnly() */

void __thiscall RiftThemeTextOnly::RiftThemeTextOnly(RiftThemeTextOnly *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06689510;
  return;
}


/* RiftThemeTextOnly::StaticNew() */

RiftThemeTextOnly * RiftThemeTextOnly::StaticNew(void)

{
  RiftThemeTextOnly *this;
  
  this = ::operator_new(0x20);
  RiftThemeTextOnly(this);
  return this;
}

