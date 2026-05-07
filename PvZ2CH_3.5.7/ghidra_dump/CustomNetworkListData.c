// Class: CustomNetworkListData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CustomNetworkListData::StaticClassInit() */

void CustomNetworkListData::StaticClassInit(void)

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
    std::string::string(asStack_10,"CustomNetworkPreviewData");
    (*pcVar3)(plVar2,asStack_10,FUN_0358faf8,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"CustomNetworkListData");
    (*pcVar3)(plVar2,asStack_10,FUN_0359e734,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CustomNetworkListData::StaticGetClass() */

long * CustomNetworkListData::StaticGetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"CustomNetworkListData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomNetworkListData::GetClass() const */

long * CustomNetworkListData::GetClass(void)

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
  uVar2 = INetworkData::StaticGetClass();
  (*pcVar3)(plVar1,"CustomNetworkListData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CustomNetworkListData::CustomNetworkListData() */

void __thiscall CustomNetworkListData::CustomNetworkListData(CustomNetworkListData *this)

{
  INetworkData::INetworkData((INetworkData *)this);
  *(undefined ***)this = &PTR_GetClass_0665dd30;
  *(undefined ***)(this + 8) = &PTR__CustomNetworkListData_0665dd98;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* CustomNetworkListData::StaticNew() */

CustomNetworkListData * CustomNetworkListData::StaticNew(void)

{
  CustomNetworkListData *this;
  
  this = ::operator_new(0x38);
  CustomNetworkListData(this);
  return this;
}


/* CustomNetworkListData::~CustomNetworkListData() */

void __thiscall CustomNetworkListData::~CustomNetworkListData(CustomNetworkListData *this)

{
  *(undefined ***)this = &PTR_GetClass_0665dd30;
  *(undefined ***)(this + 8) = &PTR__CustomNetworkListData_0665dd98;
  std::vector<CustomNetworkPreviewData,std::allocator<CustomNetworkPreviewData>>::~vector
            ((vector<CustomNetworkPreviewData,std::allocator<CustomNetworkPreviewData>> *)
             (this + 0x18));
  INetworkData::~INetworkData((INetworkData *)this);
  return;
}


/* non-virtual thunk to CustomNetworkListData::~CustomNetworkListData() */

void __thiscall CustomNetworkListData::~CustomNetworkListData(CustomNetworkListData *this)

{
  ~CustomNetworkListData(this + -8);
  return;
}


/* CustomNetworkListData::~CustomNetworkListData() */

void __thiscall CustomNetworkListData::~CustomNetworkListData(CustomNetworkListData *this)

{
  ~CustomNetworkListData(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CustomNetworkListData::~CustomNetworkListData() */

void __thiscall CustomNetworkListData::~CustomNetworkListData(CustomNetworkListData *this)

{
  ~CustomNetworkListData(this + -8);
  return;
}


/* CustomNetworkListData::TEMPNAMEPLACEHOLDERVALUE(CustomNetworkListData const&) */

CustomNetworkListData * __thiscall
CustomNetworkListData::operator=(CustomNetworkListData *this,CustomNetworkListData *param_1)

{
  INetworkData::operator=((INetworkData *)this,(INetworkData *)param_1);
  std::vector<CustomNetworkPreviewData,std::allocator<CustomNetworkPreviewData>>::operator=
            ((vector<CustomNetworkPreviewData,std::allocator<CustomNetworkPreviewData>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return this;
}


/* CustomNetworkListData::CustomNetworkListData(CustomNetworkListData const&) */

void __thiscall
CustomNetworkListData::CustomNetworkListData
          (CustomNetworkListData *this,CustomNetworkListData *param_1)

{
  INetworkData::INetworkData((INetworkData *)this,(INetworkData *)param_1);
  *(undefined ***)this = &PTR_GetClass_0665dd30;
  *(undefined ***)(this + 8) = &PTR__CustomNetworkListData_0665dd98;
  std::vector<CustomNetworkPreviewData,std::allocator<CustomNetworkPreviewData>>::vector
            ((vector<CustomNetworkPreviewData,std::allocator<CustomNetworkPreviewData>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return;
}

