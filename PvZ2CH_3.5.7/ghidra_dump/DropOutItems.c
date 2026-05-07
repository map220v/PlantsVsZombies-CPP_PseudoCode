// Class: DropOutItems


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropOutItems::StaticClassInit() */

void DropOutItems::StaticClassInit(void)

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
    std::string::string(asStack_10,"DropOutItemData");
    (*pcVar3)(plVar2,asStack_10,FUN_0451ac00,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DropOutItemGroup");
    (*pcVar3)(plVar2,asStack_10,FUN_045209d0,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"DropOutItems");
    (*pcVar3)(plVar2,asStack_10,FUN_04520bc8,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DropOutItems::StaticGetClass() */

long * DropOutItems::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DropOutItems",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DropOutItems::GetClass() const */

long * DropOutItems::GetClass(void)

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
  (*pcVar3)(plVar1,"DropOutItems",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DropOutItems::DropOutItems() */

void __thiscall DropOutItems::DropOutItems(DropOutItems *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06857bf0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  return;
}


/* DropOutItems::StaticNew() */

DropOutItems * DropOutItems::StaticNew(void)

{
  DropOutItems *this;
  
  this = ::operator_new(0x20);
  DropOutItems(this);
  return this;
}


/* DropOutItems::~DropOutItems() */

void __thiscall DropOutItems::~DropOutItems(DropOutItems *this)

{
  *(undefined ***)this = &PTR_GetClass_06857bf0;
  std::vector<DropOutItemGroup,std::allocator<DropOutItemGroup>>::~vector
            ((vector<DropOutItemGroup,std::allocator<DropOutItemGroup>> *)(this + 8));
  nop();
  return;
}


/* DropOutItems::~DropOutItems() */

void __thiscall DropOutItems::~DropOutItems(DropOutItems *this)

{
  ~DropOutItems(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropOutItems::GetDropItemByGroupId(std::string const&) */

void DropOutItems::GetDropItemByGroupId(string *param_1)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  string *in_x1;
  string *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 8));
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 8));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar2) {
      std::string::string(in_x8,"");
      nop();
LAB_04521a64:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    psVar3 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = std::operator==(psVar3,in_x1);
    if (cVar1 != '\0') {
      DropOutItemGroup::RandGetDropItem();
      goto LAB_04521a64;
    }
    FUN_0451f1d8((exception_ptr *)&local_18);
  } while( true );
}

