// Class: JoustHowToPlayScreenData


/* JoustHowToPlayScreenData::JoustHowToPlayScreenData() */

void __thiscall JoustHowToPlayScreenData::JoustHowToPlayScreenData(JoustHowToPlayScreenData *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_066a9470;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* JoustHowToPlayScreenData::TEMPNAMEPLACEHOLDERVALUE(JoustHowToPlayScreenData const&) */

JoustHowToPlayScreenData * __thiscall
JoustHowToPlayScreenData::operator=
          (JoustHowToPlayScreenData *this,JoustHowToPlayScreenData *param_1)

{
  DIniItem::operator=((DIniItem *)this,(DIniItem *)param_1);
  std::vector<JoustHowToPlayScreenEntry,std::allocator<JoustHowToPlayScreenEntry>>::operator=
            ((vector<JoustHowToPlayScreenEntry,std::allocator<JoustHowToPlayScreenEntry>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return this;
}


/* JoustHowToPlayScreenData::~JoustHowToPlayScreenData() */

void __thiscall JoustHowToPlayScreenData::~JoustHowToPlayScreenData(JoustHowToPlayScreenData *this)

{
  *(undefined ***)this = &PTR_GetClass_066a9470;
  std::vector<JoustHowToPlayScreenEntry,std::allocator<JoustHowToPlayScreenEntry>>::~vector
            ((vector<JoustHowToPlayScreenEntry,std::allocator<JoustHowToPlayScreenEntry>> *)
             (this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* JoustHowToPlayScreenData::~JoustHowToPlayScreenData() */

void __thiscall JoustHowToPlayScreenData::~JoustHowToPlayScreenData(JoustHowToPlayScreenData *this)

{
  ~JoustHowToPlayScreenData(this);
  AK::FreeHook(this);
  return;
}


/* JoustHowToPlayScreenData::JoustHowToPlayScreenData(JoustHowToPlayScreenData const&) */

void __thiscall
JoustHowToPlayScreenData::JoustHowToPlayScreenData
          (JoustHowToPlayScreenData *this,JoustHowToPlayScreenData *param_1)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined ***)this = &PTR_GetClass_066a9470;
  std::vector<JoustHowToPlayScreenEntry,std::allocator<JoustHowToPlayScreenEntry>>::vector
            ((vector<JoustHowToPlayScreenEntry,std::allocator<JoustHowToPlayScreenEntry>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoustHowToPlayScreenData::StaticClassInit() */

void JoustHowToPlayScreenData::StaticClassInit(void)

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
    std::string::string(asStack_10,"JoustHowToPlayScreenEntry");
    (*pcVar3)(plVar2,asStack_10,FUN_0385d838,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"JoustHowToPlayScreenData");
    (*pcVar3)(plVar2,asStack_10,FUN_0385e3b4,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JoustHowToPlayScreenData::StaticGetClass() */

long * JoustHowToPlayScreenData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"JoustHowToPlayScreenData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustHowToPlayScreenData::GetClass() const */

long * JoustHowToPlayScreenData::GetClass(void)

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
  (*pcVar3)(plVar1,"JoustHowToPlayScreenData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JoustHowToPlayScreenData::StaticNew() */

JoustHowToPlayScreenData * JoustHowToPlayScreenData::StaticNew(void)

{
  JoustHowToPlayScreenData *this;
  
  this = ::operator_new(0x30);
  JoustHowToPlayScreenData(this);
  return this;
}

