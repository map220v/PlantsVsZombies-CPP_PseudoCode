// Class: MiniGamePerkItemProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkItemProperties::StaticClassInit() */

void MiniGamePerkItemProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkItemProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_038a022c,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkItemProperties::MiniGamePerkItemProperties() */

void __thiscall
MiniGamePerkItemProperties::MiniGamePerkItemProperties(MiniGamePerkItemProperties *this)

{
  MiniGamePerkProperties::MiniGamePerkProperties((MiniGamePerkProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066b04b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* MiniGamePerkItemProperties::StaticNew() */

MiniGamePerkItemProperties * MiniGamePerkItemProperties::StaticNew(void)

{
  MiniGamePerkItemProperties *this;
  
  this = ::operator_new(0x68);
  MiniGamePerkItemProperties(this);
  return this;
}


/* MiniGamePerkItemProperties::~MiniGamePerkItemProperties() */

void __thiscall
MiniGamePerkItemProperties::~MiniGamePerkItemProperties(MiniGamePerkItemProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066b04b0;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x48));
  MiniGamePerkProperties::~MiniGamePerkProperties((MiniGamePerkProperties *)this);
  return;
}


/* MiniGamePerkItemProperties::~MiniGamePerkItemProperties() */

void __thiscall
MiniGamePerkItemProperties::~MiniGamePerkItemProperties(MiniGamePerkItemProperties *this)

{
  ~MiniGamePerkItemProperties(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkItemProperties::StaticGetClass() */

long * MiniGamePerkItemProperties::StaticGetClass(void)

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
  uVar2 = MiniGamePerkProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItemProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkItemProperties::GetClass() const */

long * MiniGamePerkItemProperties::GetClass(void)

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
  uVar2 = MiniGamePerkProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGamePerkItemProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

