// Class: ZombieTitleImmuneControlProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTitleImmuneControlProperties::StaticClassInit() */

void ZombieTitleImmuneControlProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTitleImmuneControlProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_034177b0,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTitleImmuneControlProperties::ZombieTitleImmuneControlProperties() */

void __thiscall
ZombieTitleImmuneControlProperties::ZombieTitleImmuneControlProperties
          (ZombieTitleImmuneControlProperties *this)

{
  ZombieTitleProperties::ZombieTitleProperties((ZombieTitleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06620cc0;
  *(undefined4 *)(this + 0x30) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* ZombieTitleImmuneControlProperties::StaticNew() */

ZombieTitleImmuneControlProperties * ZombieTitleImmuneControlProperties::StaticNew(void)

{
  ZombieTitleImmuneControlProperties *this;
  
  this = ::operator_new(0x50);
  ZombieTitleImmuneControlProperties(this);
  return this;
}


/* ZombieTitleImmuneControlProperties::~ZombieTitleImmuneControlProperties() */

void __thiscall
ZombieTitleImmuneControlProperties::~ZombieTitleImmuneControlProperties
          (ZombieTitleImmuneControlProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06620cc0;
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)(this + 0x38));
  ZombieTitleProperties::~ZombieTitleProperties((ZombieTitleProperties *)this);
  return;
}


/* ZombieTitleImmuneControlProperties::~ZombieTitleImmuneControlProperties() */

void __thiscall
ZombieTitleImmuneControlProperties::~ZombieTitleImmuneControlProperties
          (ZombieTitleImmuneControlProperties *this)

{
  ~ZombieTitleImmuneControlProperties(this);
  AK::FreeHook(this);
  return;
}


/* ZombieTitleImmuneControlProperties::StaticGetClass() */

long * ZombieTitleImmuneControlProperties::StaticGetClass(void)

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
  uVar2 = ZombieTitleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTitleImmuneControlProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTitleImmuneControlProperties::GetClass() const */

long * ZombieTitleImmuneControlProperties::GetClass(void)

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
  uVar2 = ZombieTitleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieTitleImmuneControlProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

