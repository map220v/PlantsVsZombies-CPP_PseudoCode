// Class: MiniGameCollectionOutroProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameCollectionOutroProperties::StaticClassInit() */

void MiniGameCollectionOutroProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGameCollectionOutroProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_038b60fc,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameCollectionOutroProperties::StaticGetClass() */

long * MiniGameCollectionOutroProperties::StaticGetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGameCollectionOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameCollectionOutroProperties::GetClass() const */

long * MiniGameCollectionOutroProperties::GetClass(void)

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
  uVar2 = OutroModuleProperties::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGameCollectionOutroProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameCollectionOutroProperties::GetModuleClass() const */

long * MiniGameCollectionOutroProperties::GetModuleClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (MiniGameCollectionOutro::sClass != (long *)0x0) {
    return MiniGameCollectionOutro::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  MiniGameCollectionOutro::sClass = plVar1;
  uVar2 = OutroModule::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGameCollectionOutro",uVar2,MiniGameCollectionOutro::StaticNew);
  MiniGameCollectionOutro::StaticClassInit();
  return MiniGameCollectionOutro::sClass;
}


/* MiniGameCollectionOutroProperties::MiniGameCollectionOutroProperties() */

void __thiscall
MiniGameCollectionOutroProperties::MiniGameCollectionOutroProperties
          (MiniGameCollectionOutroProperties *this)

{
  OutroModuleProperties::OutroModuleProperties((OutroModuleProperties *)this);
  *(undefined ***)this = &PTR_GetClass_066b5690;
  return;
}


/* MiniGameCollectionOutroProperties::StaticNew() */

MiniGameCollectionOutroProperties * MiniGameCollectionOutroProperties::StaticNew(void)

{
  MiniGameCollectionOutroProperties *this;
  
  this = ::operator_new(0x40);
  MiniGameCollectionOutroProperties(this);
  return this;
}


/* MiniGameCollectionOutroProperties::~MiniGameCollectionOutroProperties() */

void __thiscall
MiniGameCollectionOutroProperties::~MiniGameCollectionOutroProperties
          (MiniGameCollectionOutroProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_066b5690;
  OutroModuleProperties::~OutroModuleProperties((OutroModuleProperties *)this);
  return;
}


/* MiniGameCollectionOutroProperties::~MiniGameCollectionOutroProperties() */

void __thiscall
MiniGameCollectionOutroProperties::~MiniGameCollectionOutroProperties
          (MiniGameCollectionOutroProperties *this)

{
  ~MiniGameCollectionOutroProperties(this);
  AK::FreeHook(this);
  return;
}

