// Class: HowToPlayScreenData


/* HowToPlayScreenData::HowToPlayScreenData() */

void __thiscall HowToPlayScreenData::HowToPlayScreenData(HowToPlayScreenData *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_06682cb0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* HowToPlayScreenData::TEMPNAMEPLACEHOLDERVALUE(HowToPlayScreenData const&) */

HowToPlayScreenData * __thiscall
HowToPlayScreenData::operator=(HowToPlayScreenData *this,HowToPlayScreenData *param_1)

{
  DIniItem::operator=((DIniItem *)this,(DIniItem *)param_1);
  std::vector<HowToPlayScreenEntry,std::allocator<HowToPlayScreenEntry>>::operator=
            ((vector<HowToPlayScreenEntry,std::allocator<HowToPlayScreenEntry>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return this;
}


/* HowToPlayScreenData::~HowToPlayScreenData() */

void __thiscall HowToPlayScreenData::~HowToPlayScreenData(HowToPlayScreenData *this)

{
  *(undefined ***)this = &PTR_GetClass_06682cb0;
  std::vector<HowToPlayScreenEntry,std::allocator<HowToPlayScreenEntry>>::~vector
            ((vector<HowToPlayScreenEntry,std::allocator<HowToPlayScreenEntry>> *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* HowToPlayScreenData::~HowToPlayScreenData() */

void __thiscall HowToPlayScreenData::~HowToPlayScreenData(HowToPlayScreenData *this)

{
  ~HowToPlayScreenData(this);
  AK::FreeHook(this);
  return;
}


/* HowToPlayScreenData::HowToPlayScreenData(HowToPlayScreenData const&) */

void __thiscall
HowToPlayScreenData::HowToPlayScreenData(HowToPlayScreenData *this,HowToPlayScreenData *param_1)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined ***)this = &PTR_GetClass_06682cb0;
  std::vector<HowToPlayScreenEntry,std::allocator<HowToPlayScreenEntry>>::vector
            ((vector<HowToPlayScreenEntry,std::allocator<HowToPlayScreenEntry>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HowToPlayScreenData::StaticClassInit() */

void HowToPlayScreenData::StaticClassInit(void)

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
    std::string::string(asStack_10,"HowToPlayScreenEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_036d30f0,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"HowToPlayScreenData");
    (*pcVar3)(plVar2,asStack_10,FUN_036d3e04,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HowToPlayScreenData::StaticGetClass() */

long * HowToPlayScreenData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HowToPlayScreenData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HowToPlayScreenData::GetClass() const */

long * HowToPlayScreenData::GetClass(void)

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
  (*pcVar3)(plVar1,"HowToPlayScreenData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HowToPlayScreenData::StaticNew() */

HowToPlayScreenData * HowToPlayScreenData::StaticNew(void)

{
  HowToPlayScreenData *this;
  
  this = ::operator_new(0x30);
  HowToPlayScreenData(this);
  return this;
}

