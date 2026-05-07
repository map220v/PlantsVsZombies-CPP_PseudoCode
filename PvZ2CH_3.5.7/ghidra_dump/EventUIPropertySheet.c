// Class: EventUIPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventUIPropertySheet::StaticClassInit() */

void EventUIPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"EventUIEntryConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_038d4540,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"EventUIConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_038d5bec,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"EventBoardConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_038d4130,0x14,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"PieceConfig");
    (*pcVar3)(plVar2,asStack_10,FUN_038d5d3c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"EventUIPropertySheet");
    (*pcVar3)(plVar2,asStack_10,FUN_038d7348,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EventUIPropertySheet::StaticGetClass() */

long * EventUIPropertySheet::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EventUIPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EventUIPropertySheet::GetClass() const */

long * EventUIPropertySheet::GetClass(void)

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
  (*pcVar3)(plVar1,"EventUIPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EventUIPropertySheet::GetEventUIEntryConfigByIndex(int) */

long __thiscall
EventUIPropertySheet::GetEventUIEntryConfigByIndex(EventUIPropertySheet *this,int param_1)

{
  long lVar1;
  
  lVar1 = FUN_038d43c8(*(undefined8 *)(this + 8),(long)param_1);
  return lVar1 + 8;
}


/* EventUIPropertySheet::GetConfigSize() */

void __thiscall EventUIPropertySheet::GetConfigSize(EventUIPropertySheet *this)

{
  FUN_038d43d4(*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10));
  return;
}


/* EventUIPropertySheet::GetPieceConfig() */

EventUIPropertySheet * __thiscall EventUIPropertySheet::GetPieceConfig(EventUIPropertySheet *this)

{
  return this + 0x34;
}


/* EventUIPropertySheet::EventUIPropertySheet() */

void __thiscall EventUIPropertySheet::EventUIPropertySheet(EventUIPropertySheet *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_066bab50;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  GachaItemInfo::GachaItemInfo((GachaItemInfo *)(this + 0x20));
  PieceConfig::PieceConfig((PieceConfig *)(this + 0x34));
  return;
}


/* EventUIPropertySheet::StaticNew() */

EventUIPropertySheet * EventUIPropertySheet::StaticNew(void)

{
  EventUIPropertySheet *this;
  
  this = ::operator_new(0x48);
  EventUIPropertySheet(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventUIPropertySheet::GetEventUIEntryConfig(int) */

void __thiscall EventUIPropertySheet::GetEventUIEntryConfig(EventUIPropertySheet *this,int param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 8);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_1;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = FUN_038d76dc(uVar2,uVar3,local_24);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    puVar5 = (undefined *)(lVar4 + 8);
  }
  else {
    puVar5 = &DAT_06ab7b70;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}


/* EventUIPropertySheet::~EventUIPropertySheet() */

void __thiscall EventUIPropertySheet::~EventUIPropertySheet(EventUIPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_066bab50;
  std::vector<EventUIConfig,std::allocator<EventUIConfig>>::~vector
            ((vector<EventUIConfig,std::allocator<EventUIConfig>> *)(this + 8));
  nop();
  return;
}


/* EventUIPropertySheet::~EventUIPropertySheet() */

void __thiscall EventUIPropertySheet::~EventUIPropertySheet(EventUIPropertySheet *this)

{
  ~EventUIPropertySheet(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventUIPropertySheet::Init() */

void __thiscall EventUIPropertySheet::Init(EventUIPropertySheet *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  RtObject *this_00;
  EventUIPropertySheet *pEVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x9d);
  do {
    bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar3) {
LAB_038d84cc:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
    if (bVar3) {
      this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pEVar5 = Sexy::RtObject::Cast<EventUIPropertySheet>(this_00);
      if (pEVar5 != (EventUIPropertySheet *)0x0) {
        std::vector<EventUIConfig,std::allocator<EventUIConfig>>::operator=
                  ((vector<EventUIConfig,std::allocator<EventUIConfig>> *)(this + 8),
                   (vector *)(pEVar5 + 8));
        uVar1 = *(undefined8 *)(pEVar5 + 0x28);
        uVar4 = *(undefined8 *)(pEVar5 + 0x34);
        uVar2 = *(undefined8 *)(pEVar5 + 0x3c);
        *(undefined8 *)(this + 0x20) = *(undefined8 *)(pEVar5 + 0x20);
        *(undefined8 *)(this + 0x28) = uVar1;
        *(undefined4 *)(this + 0x30) = *(undefined4 *)(pEVar5 + 0x30);
        *(undefined8 *)(this + 0x34) = uVar4;
        *(undefined8 *)(this + 0x3c) = uVar2;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
        goto LAB_038d84cc;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
  } while( true );
}

