// Class: RiftThemeSeedRain


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeSeedRain::StaticClassInit() */

void RiftThemeSeedRain::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeSeedRain");
    (*pcVar2)(plVar1,asStack_10,FUN_036ff7dc,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeSeedRain::StaticGetClass() */

long * RiftThemeSeedRain::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeSeedRain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeSeedRain::GetClass() const */

long * RiftThemeSeedRain::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeSeedRain",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeSeedRain::~RiftThemeSeedRain() */

void __thiscall RiftThemeSeedRain::~RiftThemeSeedRain(RiftThemeSeedRain *this)

{
  *(undefined ***)this = &PTR_GetClass_06688930;
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeSeedRain::~RiftThemeSeedRain() */

void __thiscall RiftThemeSeedRain::~RiftThemeSeedRain(RiftThemeSeedRain *this)

{
  ~RiftThemeSeedRain(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeSeedRain::RiftThemeSeedRain() */

void __thiscall RiftThemeSeedRain::RiftThemeSeedRain(RiftThemeSeedRain *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06688930;
  return;
}


/* RiftThemeSeedRain::StaticNew() */

RiftThemeSeedRain * RiftThemeSeedRain::StaticNew(void)

{
  RiftThemeSeedRain *this;
  
  this = ::operator_new(0x20);
  RiftThemeSeedRain(this);
  return this;
}

