// Class: NewPVPAreaSliderProperties


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaSliderProperties::StaticClassInit() */

void NewPVPAreaSliderProperties::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPGridItemPlacement");
    (*pcVar3)(plVar2,asStack_10,FUN_034b0b50,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"NewPVPAreaSliderProperties");
    (*pcVar3)(plVar2,asStack_10,FUN_034dfdf8,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPAreaSliderProperties::StaticGetClass() */

long * NewPVPAreaSliderProperties::StaticGetClass(void)

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
  uVar2 = NewPVPAreaProperties::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPAreaSliderProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaSliderProperties::GetClass() const */

long * NewPVPAreaSliderProperties::GetClass(void)

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
  uVar2 = NewPVPAreaProperties::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPAreaSliderProperties",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaSliderProperties::NewPVPAreaSliderProperties() */

void __thiscall
NewPVPAreaSliderProperties::NewPVPAreaSliderProperties(NewPVPAreaSliderProperties *this)

{
  NewPVPAreaProperties::NewPVPAreaProperties((NewPVPAreaProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0664cee0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* NewPVPAreaSliderProperties::StaticNew() */

NewPVPAreaSliderProperties * NewPVPAreaSliderProperties::StaticNew(void)

{
  NewPVPAreaSliderProperties *this;
  
  this = ::operator_new(0x38);
  NewPVPAreaSliderProperties(this);
  return this;
}


/* NewPVPAreaSliderProperties::~NewPVPAreaSliderProperties() */

void __thiscall
NewPVPAreaSliderProperties::~NewPVPAreaSliderProperties(NewPVPAreaSliderProperties *this)

{
  *(undefined ***)this = &PTR_GetClass_0664cee0;
  std::vector<NewPVPGridItemPlacement,std::allocator<NewPVPGridItemPlacement>>::~vector
            ((vector<NewPVPGridItemPlacement,std::allocator<NewPVPGridItemPlacement>> *)
             (this + 0x20));
  NewPVPAreaProperties::~NewPVPAreaProperties((NewPVPAreaProperties *)this);
  return;
}


/* NewPVPAreaSliderProperties::~NewPVPAreaSliderProperties() */

void __thiscall
NewPVPAreaSliderProperties::~NewPVPAreaSliderProperties(NewPVPAreaSliderProperties *this)

{
  ~NewPVPAreaSliderProperties(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaSliderProperties::GatherResourceRequirements(std::set<std::string,
   std::less<std::string >, std::allocator<std::string > >&) const */

void __thiscall
NewPVPAreaSliderProperties::GatherResourceRequirements
          (NewPVPAreaSliderProperties *this,set *param_1)

{
  bool bVar1;
  GroupInfo *pGVar2;
  string *psVar3;
  GridItemType *this_00;
  undefined8 local_30;
  undefined8 local_28;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  GroupInfo aGStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = FUN_034cdaf8(*(undefined8 *)(this + 0x20));
  local_28 = FUN_034cdb48(*(undefined8 *)(this + 0x28));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1) {
    pGVar2 = (GroupInfo *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    Sexy::ResStreamsUnpacker::GroupInfo::GroupInfo(aGStack_18,pGVar2);
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar3);
    this_00 = (GridItemType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
    GridItemType::AddResourceRequirements(this_00,param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    std::pair<std::string_const,Sexy::PILifeValueTable>::~pair
              ((pair<std::string_const,Sexy::PILifeValueTable> *)aGStack_18);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

