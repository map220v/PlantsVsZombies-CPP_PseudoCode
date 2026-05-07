// Class: ZombieSwapListData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieSwapListData::StaticClassInit() */

void ZombieSwapListData::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieSwapData");
    (*pcVar3)(plVar2,asStack_10,FUN_049aefcc,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieSwapListData");
    (*pcVar3)(plVar2,asStack_10,FUN_049b0644,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieSwapListData::StaticGetClass() */

long * ZombieSwapListData::StaticGetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSwapListData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSwapListData::GetClass() const */

long * ZombieSwapListData::GetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieSwapListData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieSwapListData::ZombieSwapListData() */

void __thiscall ZombieSwapListData::ZombieSwapListData(ZombieSwapListData *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_06925130;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* ZombieSwapListData::StaticNew() */

ZombieSwapListData * ZombieSwapListData::StaticNew(void)

{
  ZombieSwapListData *this;
  
  this = ::operator_new(0x28);
  ZombieSwapListData(this);
  return this;
}


/* ZombieSwapListData::~ZombieSwapListData() */

void __thiscall ZombieSwapListData::~ZombieSwapListData(ZombieSwapListData *this)

{
  *(undefined ***)this = &PTR_GetClass_06925130;
  std::vector<ZombieSwapData,std::allocator<ZombieSwapData>>::~vector
            ((vector<ZombieSwapData,std::allocator<ZombieSwapData>> *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* ZombieSwapListData::~ZombieSwapListData() */

void __thiscall ZombieSwapListData::~ZombieSwapListData(ZombieSwapListData *this)

{
  ~ZombieSwapListData(this);
  AK::FreeHook(this);
  return;
}

