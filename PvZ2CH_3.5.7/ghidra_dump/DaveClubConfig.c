// Class: DaveClubConfig


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveClubConfig::StaticClassInit() */

void DaveClubConfig::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveClubConfig");
    (*pcVar2)(plVar1,asStack_10,FUN_0396172c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveClubConfig::StaticGetClass() */

long * DaveClubConfig::StaticGetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DaveClubConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveClubConfig::GetClass() const */

long * DaveClubConfig::GetClass(void)

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
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"DaveClubConfig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveClubConfig::DaveClubConfig() */

void __thiscall DaveClubConfig::DaveClubConfig(DaveClubConfig *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066d4390;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* DaveClubConfig::StaticNew() */

DaveClubConfig * DaveClubConfig::StaticNew(void)

{
  DaveClubConfig *this;
  
  this = ::operator_new(0x20);
  DaveClubConfig(this);
  return this;
}


/* DaveClubConfig::~DaveClubConfig() */

void __thiscall DaveClubConfig::~DaveClubConfig(DaveClubConfig *this)

{
  *(undefined ***)this = &PTR_GetClass_066d4390;
  std::vector<DaveClubBonus,std::allocator<DaveClubBonus>>::~vector
            ((vector<DaveClubBonus,std::allocator<DaveClubBonus>> *)(this + 8));
  nop();
  return;
}


/* DaveClubConfig::~DaveClubConfig() */

void __thiscall DaveClubConfig::~DaveClubConfig(DaveClubConfig *this)

{
  ~DaveClubConfig(this);
  AK::FreeHook(this);
  return;
}

