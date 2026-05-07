// Class: HappyVaseBreakerTaskPassSpecialData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HappyVaseBreakerTaskPassSpecialData::StaticClassInit() */

void HappyVaseBreakerTaskPassSpecialData::StaticClassInit(void)

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
    std::string::string(asStack_10,"HappyVaseBreakerSpecialLevel");
    (*pcVar3)(plVar2,asStack_10,FUN_03a74bcc,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"HappyVaseBreakerTaskPassSpecialData");
    (*pcVar3)(plVar2,asStack_10,FUN_03a75bdc,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HappyVaseBreakerTaskPassSpecialData::StaticGetClass() */

long * HappyVaseBreakerTaskPassSpecialData::StaticGetClass(void)

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
  uVar2 = HappyVaseBreakerTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"HappyVaseBreakerTaskPassSpecialData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HappyVaseBreakerTaskPassSpecialData::GetClass() const */

long * HappyVaseBreakerTaskPassSpecialData::GetClass(void)

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
  uVar2 = HappyVaseBreakerTaskData::StaticGetClass();
  (*pcVar3)(plVar1,"HappyVaseBreakerTaskPassSpecialData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HappyVaseBreakerTaskPassSpecialData::HappyVaseBreakerTaskPassSpecialData() */

void __thiscall
HappyVaseBreakerTaskPassSpecialData::HappyVaseBreakerTaskPassSpecialData
          (HappyVaseBreakerTaskPassSpecialData *this)

{
  HappyVaseBreakerTaskData::HappyVaseBreakerTaskData((HappyVaseBreakerTaskData *)this);
  *(undefined ***)this = &PTR_GetClass_0670c7f0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  return;
}


/* HappyVaseBreakerTaskPassSpecialData::StaticNew() */

HappyVaseBreakerTaskPassSpecialData * HappyVaseBreakerTaskPassSpecialData::StaticNew(void)

{
  HappyVaseBreakerTaskPassSpecialData *this;
  
  this = ::operator_new(0x78);
  HappyVaseBreakerTaskPassSpecialData(this);
  return this;
}


/* HappyVaseBreakerTaskPassSpecialData::~HappyVaseBreakerTaskPassSpecialData() */

void __thiscall
HappyVaseBreakerTaskPassSpecialData::~HappyVaseBreakerTaskPassSpecialData
          (HappyVaseBreakerTaskPassSpecialData *this)

{
  *(undefined ***)this = &PTR_GetClass_0670c7f0;
  std::vector<HappyVaseBreakerSpecialLevel,std::allocator<HappyVaseBreakerSpecialLevel>>::~vector
            ((vector<HappyVaseBreakerSpecialLevel,std::allocator<HappyVaseBreakerSpecialLevel>> *)
             (this + 0x58));
  HappyVaseBreakerTaskData::~HappyVaseBreakerTaskData((HappyVaseBreakerTaskData *)this);
  return;
}


/* HappyVaseBreakerTaskPassSpecialData::~HappyVaseBreakerTaskPassSpecialData() */

void __thiscall
HappyVaseBreakerTaskPassSpecialData::~HappyVaseBreakerTaskPassSpecialData
          (HappyVaseBreakerTaskPassSpecialData *this)

{
  ~HappyVaseBreakerTaskPassSpecialData(this);
  AK::FreeHook(this);
  return;
}

