// Class: GachaActivityInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GachaActivityInfo::StaticClassInit() */

void GachaActivityInfo::StaticClassInit(void)

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
    std::string::string(asStack_10,"GachaActivityItemInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03df230c,0x18,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"GachaActivityInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03df4c00,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GachaActivityInfo::StaticGetClass() */

long * GachaActivityInfo::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GachaActivityInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GachaActivityInfo::GetClass() const */

long * GachaActivityInfo::GetClass(void)

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
  (*pcVar3)(plVar1,"GachaActivityInfo",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GachaActivityInfo::GachaActivityInfo() */

void __thiscall GachaActivityInfo::GachaActivityInfo(GachaActivityInfo *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0677ff00;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  return;
}


/* GachaActivityInfo::StaticNew() */

GachaActivityInfo * GachaActivityInfo::StaticNew(void)

{
  GachaActivityInfo *this;
  
  this = ::operator_new(0x38);
  GachaActivityInfo(this);
  return this;
}


/* GachaActivityInfo::~GachaActivityInfo() */

void __thiscall GachaActivityInfo::~GachaActivityInfo(GachaActivityInfo *this)

{
  *(undefined ***)this = &PTR_GetClass_0677ff00;
  std::vector<GachaActivityItemInfo,std::allocator<GachaActivityItemInfo>>::~vector
            ((vector<GachaActivityItemInfo,std::allocator<GachaActivityItemInfo>> *)(this + 0x20));
  std::vector<S2C_NewGachaInfo,std::allocator<S2C_NewGachaInfo>>::~vector
            ((vector<S2C_NewGachaInfo,std::allocator<S2C_NewGachaInfo>> *)(this + 8));
  nop();
  return;
}


/* GachaActivityInfo::~GachaActivityInfo() */

void __thiscall GachaActivityInfo::~GachaActivityInfo(GachaActivityInfo *this)

{
  ~GachaActivityInfo(this);
  AK::FreeHook(this);
  return;
}

