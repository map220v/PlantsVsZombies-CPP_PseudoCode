// Class: ZombieTitleAntiControlProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTitleAntiControlProperties::StaticClassInit() */

void ZombieTitleAntiControlProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTitleAntiControlProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_03417a04,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTitleAntiControlProperties::ZombieTitleAntiControlProperties() */

void __thiscall
ZombieTitleAntiControlProperties::ZombieTitleAntiControlProperties
          (ZombieTitleAntiControlProperties *this)

{
  ZombieTitleProperties::ZombieTitleProperties((ZombieTitleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06620d60;
  *(undefined4 *)(this + 0x30) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* ZombieTitleAntiControlProperties::StaticNew() */

ZombieTitleAntiControlProperties * ZombieTitleAntiControlProperties::StaticNew(void)

{
  ZombieTitleAntiControlProperties *this;
  
  this = ::operator_new(0x50);
  ZombieTitleAntiControlProperties(this);
  return this;
}


/* ZombieTitleAntiControlProperties::~ZombieTitleAntiControlProperties() */

void __thiscall
ZombieTitleAntiControlProperties::~ZombieTitleAntiControlProperties
          (ZombieTitleAntiControlProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06620d60;
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)(this + 0x38));
  ZombieTitleProperties::~ZombieTitleProperties((ZombieTitleProperties *)this);
  return;
}


/* ZombieTitleAntiControlProperties::~ZombieTitleAntiControlProperties() */

void __thiscall
ZombieTitleAntiControlProperties::~ZombieTitleAntiControlProperties
          (ZombieTitleAntiControlProperties *this)

{
  ~ZombieTitleAntiControlProperties(this);
  AK::FreeHook(this);
  return;
}


/* ZombieTitleAntiControlProperties::StaticGetClass() */

long * ZombieTitleAntiControlProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTitleAntiControlProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTitleAntiControlProperties::GetClass() const */

long * ZombieTitleAntiControlProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTitleAntiControlProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

