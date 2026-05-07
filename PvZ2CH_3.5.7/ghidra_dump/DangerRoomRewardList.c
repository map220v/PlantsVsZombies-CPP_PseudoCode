// Class: DangerRoomRewardList


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DangerRoomRewardList::StaticClassInit() */

void DangerRoomRewardList::StaticClassInit(void)

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
    std::string::string(asStack_10,"DangerRoomRewardItems");
    (*pcVar3)(plVar2,asStack_10,FUN_0483a754,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DangerRoomRewardList");
    (*pcVar3)(plVar2,asStack_10,FUN_0483a9f4,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DangerRoomRewardList::StaticGetClass() */

long * DangerRoomRewardList::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DangerRoomRewardList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomRewardList::GetClass() const */

long * DangerRoomRewardList::GetClass(void)

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
  (*pcVar3)(plVar1,"DangerRoomRewardList",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DangerRoomRewardList::DangerRoomRewardList() */

void __thiscall DangerRoomRewardList::DangerRoomRewardList(DangerRoomRewardList *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06908e30;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)(this + 0x20));
  return;
}


/* DangerRoomRewardList::StaticNew() */

DangerRoomRewardList * DangerRoomRewardList::StaticNew(void)

{
  DangerRoomRewardList *this;
  
  this = ::operator_new(0x40);
  DangerRoomRewardList(this);
  return this;
}


/* DangerRoomRewardList::~DangerRoomRewardList() */

void __thiscall DangerRoomRewardList::~DangerRoomRewardList(DangerRoomRewardList *this)

{
  *(undefined ***)this = &PTR_GetClass_06908e30;
  BundleItem::~BundleItem((BundleItem *)(this + 0x20));
  std::vector<DangerRoomRewardItems,std::allocator<DangerRoomRewardItems>>::~vector
            ((vector<DangerRoomRewardItems,std::allocator<DangerRoomRewardItems>> *)(this + 8));
  nop();
  return;
}


/* DangerRoomRewardList::~DangerRoomRewardList() */

void __thiscall DangerRoomRewardList::~DangerRoomRewardList(DangerRoomRewardList *this)

{
  ~DangerRoomRewardList(this);
  AK::FreeHook(this);
  return;
}

