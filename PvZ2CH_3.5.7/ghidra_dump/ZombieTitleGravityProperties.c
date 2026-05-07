// Class: ZombieTitleGravityProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieTitleGravityProperties::StaticClassInit() */

void ZombieTitleGravityProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieTitleGravityProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_034173ec,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieTitleGravityProperties::ZombieTitleGravityProperties() */

void __thiscall
ZombieTitleGravityProperties::ZombieTitleGravityProperties(ZombieTitleGravityProperties *this)

{
  ZombieTitleProperties::ZombieTitleProperties((ZombieTitleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06620b80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* ZombieTitleGravityProperties::StaticNew() */

ZombieTitleGravityProperties * ZombieTitleGravityProperties::StaticNew(void)

{
  ZombieTitleGravityProperties *this;
  
  this = ::operator_new(0x48);
  ZombieTitleGravityProperties(this);
  return this;
}


/* ZombieTitleGravityProperties::~ZombieTitleGravityProperties() */

void __thiscall
ZombieTitleGravityProperties::~ZombieTitleGravityProperties(ZombieTitleGravityProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06620b80;
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector
            ((vector<ZombieConditions,std::allocator<ZombieConditions>> *)(this + 0x30));
  ZombieTitleProperties::~ZombieTitleProperties((ZombieTitleProperties *)this);
  return;
}


/* ZombieTitleGravityProperties::~ZombieTitleGravityProperties() */

void __thiscall
ZombieTitleGravityProperties::~ZombieTitleGravityProperties(ZombieTitleGravityProperties *this)

{
  ~ZombieTitleGravityProperties(this);
  AK::FreeHook(this);
  return;
}


/* ZombieTitleGravityProperties::StaticGetClass() */

long * ZombieTitleGravityProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTitleGravityProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieTitleGravityProperties::GetClass() const */

long * ZombieTitleGravityProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"ZombieTitleGravityProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

