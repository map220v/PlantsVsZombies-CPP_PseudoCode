// Class: StingerLocationData


/* StingerLocationData::~StingerLocationData() */

void __thiscall StingerLocationData::~StingerLocationData(StingerLocationData *this)

{
  *(undefined ***)this = &PTR_GetClass_0690b5b0;
  nop();
  return;
}


/* StingerLocationData::~StingerLocationData() */

void __thiscall StingerLocationData::~StingerLocationData(StingerLocationData *this)

{
  ~StingerLocationData(this);
  AK::FreeHook(this);
  return;
}


/* StingerLocationData::StingerLocationData() */

void __thiscall StingerLocationData::StingerLocationData(StingerLocationData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0690b5b0;
  return;
}


/* StingerLocationData::StaticNew() */

StingerLocationData * StingerLocationData::StaticNew(void)

{
  StingerLocationData *this;
  
  this = ::operator_new(8);
  StingerLocationData(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StingerLocationData::StaticClassInit() */

void StingerLocationData::StaticClassInit(void)

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
    std::string::string(asStack_10,"StingerLocationStateData");
    (*pcVar2)(plVar1,asStack_10,FUN_0484d78c,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StingerLocationData::StaticGetClass() */

long * StingerLocationData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"StingerLocationData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* StingerLocationData::GetClass() const */

long * StingerLocationData::GetClass(void)

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
  (*pcVar3)(plVar1,"StingerLocationData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

