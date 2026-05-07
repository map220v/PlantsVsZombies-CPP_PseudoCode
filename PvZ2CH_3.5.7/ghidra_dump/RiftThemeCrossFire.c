// Class: RiftThemeCrossFire


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RiftThemeCrossFire::StaticClassInit() */

void RiftThemeCrossFire::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiftThemeCrossFire");
    (*pcVar2)(plVar1,asStack_10,FUN_037014f4,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RiftThemeCrossFire::StaticGetClass() */

long * RiftThemeCrossFire::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeCrossFire",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeCrossFire::GetClass() const */

long * RiftThemeCrossFire::GetClass(void)

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
  (*pcVar3)(plVar1,"RiftThemeCrossFire",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RiftThemeCrossFire::~RiftThemeCrossFire() */

void __thiscall RiftThemeCrossFire::~RiftThemeCrossFire(RiftThemeCrossFire *this)

{
  *(undefined ***)this = &PTR_GetClass_06689180;
  RiftTheme::~RiftTheme((RiftTheme *)this);
  return;
}


/* RiftThemeCrossFire::~RiftThemeCrossFire() */

void __thiscall RiftThemeCrossFire::~RiftThemeCrossFire(RiftThemeCrossFire *this)

{
  ~RiftThemeCrossFire(this);
  AK::FreeHook(this);
  return;
}


/* RiftThemeCrossFire::RiftThemeCrossFire() */

void __thiscall RiftThemeCrossFire::RiftThemeCrossFire(RiftThemeCrossFire *this)

{
  RiftTheme::RiftTheme((RiftTheme *)this);
  *(undefined ***)this = &PTR_GetClass_06689180;
  return;
}


/* RiftThemeCrossFire::StaticNew() */

RiftThemeCrossFire * RiftThemeCrossFire::StaticNew(void)

{
  RiftThemeCrossFire *this;
  
  this = ::operator_new(0x20);
  RiftThemeCrossFire(this);
  return this;
}

