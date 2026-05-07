// Class: PlayerProfileProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlayerProfileProperties::StaticClassInit() */

void PlayerProfileProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlayerProfileProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_043290bc,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlayerProfileProperties::StaticGetClass() */

long * PlayerProfileProperties::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"PlayerProfileProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlayerProfileProperties::GetClass() const */

long * PlayerProfileProperties::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"PlayerProfileProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlayerProfileProperties::PlayerProfileProperties() */

void __thiscall PlayerProfileProperties::PlayerProfileProperties(PlayerProfileProperties *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06833a20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* PlayerProfileProperties::StaticNew() */

PlayerProfileProperties * PlayerProfileProperties::StaticNew(void)

{
  PlayerProfileProperties *this;
  
  this = ::operator_new(0x28);
  PlayerProfileProperties(this);
  return this;
}


/* PlayerProfileProperties::~PlayerProfileProperties() */

void __thiscall PlayerProfileProperties::~PlayerProfileProperties(PlayerProfileProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_06833a20;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* PlayerProfileProperties::~PlayerProfileProperties() */

void __thiscall PlayerProfileProperties::~PlayerProfileProperties(PlayerProfileProperties *this)

{
  ~PlayerProfileProperties(this);
  AK::FreeHook(this);
  return;
}

