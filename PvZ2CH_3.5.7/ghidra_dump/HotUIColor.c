// Class: HotUIColor


/* HotUIColor::~HotUIColor() */

void __thiscall HotUIColor::~HotUIColor(HotUIColor *this)

{
  *(undefined ***)this = &PTR_GetClass_0666bcd0;
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* HotUIColor::~HotUIColor() */

void __thiscall HotUIColor::~HotUIColor(HotUIColor *this)

{
  ~HotUIColor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIColor::HotUIColor() */

void __thiscall HotUIColor::HotUIColor(HotUIColor *this)

{
  bool bVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_0666bcd0;
  Sexy::Color::Color((Color *)(this + 0x10));
  Sexy::Color::Color((Color *)&local_18,1);
  bVar1 = local_8 == ___stack_chk_guard;
  *(undefined8 *)(this + 0x10) = local_18;
  *(undefined8 *)(this + 0x18) = uStack_10;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIColor::StaticNew() */

HotUIColor * HotUIColor::StaticNew(void)

{
  HotUIColor *this;
  
  this = ::operator_new(0x20);
  HotUIColor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIColor::StaticClassInit() */

void HotUIColor::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIColor");
    (*pcVar2)(plVar1,asStack_10,FUN_03623858,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIColor::StaticGetClass() */

long * HotUIColor::StaticGetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIColor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIColor::GetClass() const */

long * HotUIColor::GetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIColor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

