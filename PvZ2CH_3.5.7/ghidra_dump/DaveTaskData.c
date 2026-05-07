// Class: DaveTaskData


/* DaveTaskData::GetWidgetClass() const */

long * DaveTaskData::GetWidgetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (DaveTreasureTaskWidget::sClass != (long *)0x0) {
    return DaveTreasureTaskWidget::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  DaveTreasureTaskWidget::sClass = plVar1;
  uVar2 = Sexy::Widget::StaticGetClass();
  (*pcVar3)(plVar1,"DaveTreasureTaskWidget",uVar2,DaveTreasureTaskWidget::StaticNew);
  DaveTreasureTaskWidget::StaticClassInit();
  return DaveTreasureTaskWidget::sClass;
}


/* DaveTaskData::StaticNew() */

undefined8 DaveTaskData::StaticNew(void)

{
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DaveTaskData::StaticClassInit() */

void DaveTaskData::StaticClassInit(void)

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
    std::string::string(asStack_10,"DaveTaskAward");
    (*pcVar3)(plVar2,asStack_10,FUN_039fdb9c,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DaveTaskData");
    (*pcVar3)(plVar2,asStack_10,FUN_03a02770,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DaveTaskData::StaticGetClass() */

long * DaveTaskData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskData::GetClass() const */

long * DaveTaskData::GetClass(void)

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
  (*pcVar3)(plVar1,"DaveTaskData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DaveTaskData::DaveTaskData() */

void __thiscall DaveTaskData::DaveTaskData(DaveTaskData *this)

{
  size_t __n;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  __n = 0xffffffff;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_GetClass_066f8f80;
  Set8BytesTo0(this + 0x10);
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  *(undefined4 *)(this + 0x40) = 0;
  this[0x44] = (DaveTaskData)0x0;
  Set8BytesTo0((string *)(this + 0x48));
  std::string::append((string *)(this + 0x48),"DAVE",__n);
  return;
}


/* DaveTaskData::~DaveTaskData() */

void __thiscall DaveTaskData::~DaveTaskData(DaveTaskData *this)

{
  *(undefined ***)this = &PTR_GetClass_066f8f80;
  std::string::~string((string *)(this + 0x48));
  std::vector<DaveTaskAward,std::allocator<DaveTaskAward>>::~vector
            ((vector<DaveTaskAward,std::allocator<DaveTaskAward>> *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  std::string::~string((string *)(this + 0x10));
  nop();
  return;
}


/* DaveTaskData::~DaveTaskData() */

void __thiscall DaveTaskData::~DaveTaskData(DaveTaskData *this)

{
  ~DaveTaskData(this);
  AK::FreeHook(this);
  return;
}

