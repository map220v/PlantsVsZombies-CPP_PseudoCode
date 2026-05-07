// Class: CardGameRoundProperties


/* CardGameRoundProperties::StaticNew() */

undefined8 CardGameRoundProperties::StaticNew(void)

{
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameRoundProperties::StaticClassInit() */

void CardGameRoundProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameRoundProperties");
    (*pcVar2)(plVar1,asStack_10,FUN_04e12834,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameRoundProperties::StaticGetClass() */

long * CardGameRoundProperties::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CardGameRoundProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameRoundProperties::GetClass() const */

long * CardGameRoundProperties::GetClass(void)

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
  (*pcVar3)(plVar1,"CardGameRoundProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameRoundProperties::~CardGameRoundProperties() */

void __thiscall CardGameRoundProperties::~CardGameRoundProperties(CardGameRoundProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_069d6100;
  std::
  vector<Sexy::RtWeakPtr<CardGameRoundActionProperties>,std::allocator<Sexy::RtWeakPtr<CardGameRoundActionProperties>>>
  ::~vector((vector<Sexy::RtWeakPtr<CardGameRoundActionProperties>,std::allocator<Sexy::RtWeakPtr<CardGameRoundActionProperties>>>
             *)(this + 0x18));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* CardGameRoundProperties::~CardGameRoundProperties() */

void __thiscall CardGameRoundProperties::~CardGameRoundProperties(CardGameRoundProperties *this)

{
  ~CardGameRoundProperties(this);
  AK::FreeHook(this);
  return;
}

