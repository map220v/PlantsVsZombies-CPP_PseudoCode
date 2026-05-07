// Class: MiniGamePerkCoinIncreasedProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGamePerkCoinIncreasedProperties::StaticClassInit() */

void MiniGamePerkCoinIncreasedProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGamePerkCoinIncreasedProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_038a0048,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGamePerkCoinIncreasedProperties::MiniGamePerkCoinIncreasedProperties() */

void __thiscall
MiniGamePerkCoinIncreasedProperties::MiniGamePerkCoinIncreasedProperties
          (MiniGamePerkCoinIncreasedProperties *this)

{
  MiniGamePerkProperties::MiniGamePerkProperties((MiniGamePerkProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066b0370;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* MiniGamePerkCoinIncreasedProperties::StaticNew() */

MiniGamePerkCoinIncreasedProperties * MiniGamePerkCoinIncreasedProperties::StaticNew(void)

{
  MiniGamePerkCoinIncreasedProperties *this;
  
  this = ::operator_new(0x60);
  MiniGamePerkCoinIncreasedProperties(this);
  return this;
}


/* MiniGamePerkCoinIncreasedProperties::~MiniGamePerkCoinIncreasedProperties() */

void __thiscall
MiniGamePerkCoinIncreasedProperties::~MiniGamePerkCoinIncreasedProperties
          (MiniGamePerkCoinIncreasedProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066b0370;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x48));
  MiniGamePerkProperties::~MiniGamePerkProperties((MiniGamePerkProperties *)this);
  return;
}


/* MiniGamePerkCoinIncreasedProperties::~MiniGamePerkCoinIncreasedProperties() */

void __thiscall
MiniGamePerkCoinIncreasedProperties::~MiniGamePerkCoinIncreasedProperties
          (MiniGamePerkCoinIncreasedProperties *this)

{
  ~MiniGamePerkCoinIncreasedProperties(this);
  AK::FreeHook(this);
  return;
}


/* MiniGamePerkCoinIncreasedProperties::StaticGetClass() */

long * MiniGamePerkCoinIncreasedProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MiniGamePerkCoinIncreasedProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGamePerkCoinIncreasedProperties::GetClass() const */

long * MiniGamePerkCoinIncreasedProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"MiniGamePerkCoinIncreasedProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

