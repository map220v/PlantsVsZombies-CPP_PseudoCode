// Class: ProbabilityTypeContainer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilityTypeContainer::StaticClassInit() */

void ProbabilityTypeContainer::StaticClassInit(void)

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
    std::string::string(asStack_10,"ProbabilityTypeContainer");
    (*pcVar2)(plVar1,asStack_10,FUN_03b84ec4,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProbabilityTypeContainer::StaticGetClass() */

long * ProbabilityTypeContainer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ProbabilityTypeContainer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProbabilityTypeContainer::GetClass() const */

long * ProbabilityTypeContainer::GetClass(void)

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
  (*pcVar3)(plVar1,"ProbabilityTypeContainer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProbabilityTypeContainer::ProbabilityTypeContainer() */

void __thiscall ProbabilityTypeContainer::ProbabilityTypeContainer(ProbabilityTypeContainer *this)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_06735520;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* ProbabilityTypeContainer::StaticNew() */

ProbabilityTypeContainer * ProbabilityTypeContainer::StaticNew(void)

{
  ProbabilityTypeContainer *this;
  
  this = ::operator_new(0x28);
  ProbabilityTypeContainer(this);
  return this;
}


/* ProbabilityTypeContainer::~ProbabilityTypeContainer() */

void __thiscall ProbabilityTypeContainer::~ProbabilityTypeContainer(ProbabilityTypeContainer *this)

{
  *(undefined ***)this = &PTR_GetClass_06735520;
  std::vector<ProbabilityTypeRecord,std::allocator<ProbabilityTypeRecord>>::~vector
            ((vector<ProbabilityTypeRecord,std::allocator<ProbabilityTypeRecord>> *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* ProbabilityTypeContainer::~ProbabilityTypeContainer() */

void __thiscall ProbabilityTypeContainer::~ProbabilityTypeContainer(ProbabilityTypeContainer *this)

{
  ~ProbabilityTypeContainer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProbabilityTypeContainer::calculateTotalWeight() const */

void __thiscall ProbabilityTypeContainer::calculateTotalWeight(ProbabilityTypeContainer *this)

{
  bool bVar1;
  ProbabilityTypeRecord *pPVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30;
  ProbabilityTypeRecord aPStack_28 [24];
  int local_10;
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_38 = FUN_0465af7c(*(undefined8 *)(this + 0x10));
  local_30 = FUN_0465afcc(*(undefined8 *)(this + 0x18));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    pPVar2 = (ProbabilityTypeRecord *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    ProbabilityTypeRecord::ProbabilityTypeRecord(aPStack_28,pPVar2);
    iVar3 = iVar3 + local_10;
    ProbabilityTypeRecord::~ProbabilityTypeRecord(aPStack_28);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


/* ProbabilityTypeContainer::PickItem(Sexy::MTRand*) const */

void __thiscall ProbabilityTypeContainer::PickItem(ProbabilityTypeContainer *this,MTRand *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = calculateTotalWeight(this);
  iVar5 = 0;
  iVar1 = RandRangeInt(0,iVar1 + -1,param_1);
  uVar6 = *(undefined8 *)(this + 0x10);
  lVar2 = FUN_0465a858(uVar6,*(undefined8 *)(this + 0x18));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      FUN_0465a864(uVar6,0);
      return;
    }
    lVar3 = FUN_0465a864(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(lVar3 + 0x18);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  return;
}


/* ProbabilityTypeContainer::PickItem() const */

void __thiscall ProbabilityTypeContainer::PickItem(ProbabilityTypeContainer *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = calculateTotalWeight(this);
  iVar5 = 0;
  iVar1 = RandRangeInt(0,iVar1 + -1);
  uVar6 = *(undefined8 *)(this + 0x10);
  lVar2 = FUN_0465a858(uVar6,*(undefined8 *)(this + 0x18));
  lVar4 = 0;
  do {
    if (lVar4 == lVar2) {
      FUN_0465a864(uVar6,0);
      return;
    }
    lVar3 = FUN_0465a864(uVar6,lVar4);
    iVar5 = iVar5 + *(int *)(lVar3 + 0x18);
    lVar4 = lVar4 + 1;
  } while (iVar5 <= iVar1);
  return;
}


/* ProbabilityTypeContainer::ProbabilityTypeContainer(ProbabilityTypeContainer const&) */

void __thiscall
ProbabilityTypeContainer::ProbabilityTypeContainer
          (ProbabilityTypeContainer *this,ProbabilityTypeContainer *param_1)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined ***)this = &PTR_GetClass_06735520;
  std::vector<ProbabilityTypeRecord,std::allocator<ProbabilityTypeRecord>>::vector
            ((vector<ProbabilityTypeRecord,std::allocator<ProbabilityTypeRecord>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}


/* ProbabilityTypeContainer::ProbabilityTypeContainer(ProbabilityTypeContainer&&) */

void __thiscall
ProbabilityTypeContainer::ProbabilityTypeContainer
          (ProbabilityTypeContainer *this,ProbabilityTypeContainer *param_1)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined ***)this = &PTR_GetClass_06735520;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}

