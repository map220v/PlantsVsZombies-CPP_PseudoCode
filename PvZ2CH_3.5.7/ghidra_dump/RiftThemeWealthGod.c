// Class: RiftThemeWealthGod


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeWealthGod::StaticClassInit() */

void RiftThemeWealthGod::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeWealthGod");
    (*pcVar2)(plVar1,asStack_10,FUN_036ffc04,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeWealthGod::StaticGetClass() */

long * RiftThemeWealthGod::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeWealthGod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeWealthGod::GetClass() const */

long * RiftThemeWealthGod::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeWealthGod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeWealthGod::~RiftThemeWealthGod() */

void __thiscall RiftThemeWealthGod::~RiftThemeWealthGod(RiftThemeWealthGod *this)

{
  *(undefined ***)this = &PTR_GetClass_06688a60;
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeWealthGod::~RiftThemeWealthGod() */

void __thiscall RiftThemeWealthGod::~RiftThemeWealthGod(RiftThemeWealthGod *this)

{
  ~RiftThemeWealthGod(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeWealthGod::RiftThemeWealthGod() */

void __thiscall RiftThemeWealthGod::RiftThemeWealthGod(RiftThemeWealthGod *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06688a60;
  return;
}


/* RiftThemeWealthGod::StaticNew() */

RiftThemeWealthGod * RiftThemeWealthGod::StaticNew(void)

{
  RiftThemeWealthGod *this;
  
  this = ::operator_new(0x20);
  RiftThemeWealthGod(this);
  return this;
}

