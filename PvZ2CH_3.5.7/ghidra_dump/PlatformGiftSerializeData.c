// Class: PlatformGiftSerializeData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlatformGiftSerializeData::StaticClassInit() */

void PlatformGiftSerializeData::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GiftItem");
    (*pcVar3)(plVar2,asStack_10,FUN_04c40610,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PlatformGiftSerializeData");
    (*pcVar3)(plVar2,asStack_10,FUN_04c42f9c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlatformGiftSerializeData::StaticGetClass() */

long * PlatformGiftSerializeData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlatformGiftSerializeData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlatformGiftSerializeData::GetClass() const */

long * PlatformGiftSerializeData::GetClass(void)

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
  (*pcVar3)(plVar1,"PlatformGiftSerializeData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlatformGiftSerializeData::PlatformGiftSerializeData() */

void __thiscall
PlatformGiftSerializeData::PlatformGiftSerializeData(PlatformGiftSerializeData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_069862d0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* PlatformGiftSerializeData::StaticNew() */

PlatformGiftSerializeData * PlatformGiftSerializeData::StaticNew(void)

{
  PlatformGiftSerializeData *this;
  
  this = ::operator_new(0x28);
  PlatformGiftSerializeData(this);
  return this;
}


/* PlatformGiftSerializeData::~PlatformGiftSerializeData() */

void __thiscall
PlatformGiftSerializeData::~PlatformGiftSerializeData(PlatformGiftSerializeData *this)

{
  *(undefined ***)this = &PTR_GetClass_069862d0;
  std::vector<GiftItem,std::allocator<GiftItem>>::~vector
            ((vector<GiftItem,std::allocator<GiftItem>> *)(this + 0x10));
  nop();
  return;
}


/* PlatformGiftSerializeData::~PlatformGiftSerializeData() */

void __thiscall
PlatformGiftSerializeData::~PlatformGiftSerializeData(PlatformGiftSerializeData *this)

{
  ~PlatformGiftSerializeData(this);
  AK::FreeHook(this);
  return;
}

