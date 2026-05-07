// Class: PowerPropsRedStingerLocationData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PowerPropsRedStingerLocationData::StaticClassInit() */

void PowerPropsRedStingerLocationData::StaticClassInit(void)

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
    std::string::string(asStack_10,"PowerPropsRedStingerLocationData");
    (*pcVar2)(plVar1,asStack_10,FUN_03fa27f4,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PowerPropsRedStingerLocationData::PowerPropsRedStingerLocationData() */

void __thiscall
PowerPropsRedStingerLocationData::PowerPropsRedStingerLocationData
          (PowerPropsRedStingerLocationData *this)

{
  PowerPropertySheet::PowerPropertySheet((PowerPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067a5ef0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  return;
}


/* PowerPropsRedStingerLocationData::StaticNew() */

PowerPropsRedStingerLocationData * PowerPropsRedStingerLocationData::StaticNew(void)

{
  PowerPropsRedStingerLocationData *this;
  
  this = ::operator_new(0x30);
  PowerPropsRedStingerLocationData(this);
  return this;
}


/* PowerPropsRedStingerLocationData::~PowerPropsRedStingerLocationData() */

void __thiscall
PowerPropsRedStingerLocationData::~PowerPropsRedStingerLocationData
          (PowerPropsRedStingerLocationData *this)

{
  *(undefined ***)this = &PTR_GetClass_067a5ef0;
  std::vector<StingerLocationStateData,std::allocator<StingerLocationStateData>>::~vector
            ((vector<StingerLocationStateData,std::allocator<StingerLocationStateData>> *)
             (this + 0x18));
  PowerPropertySheet::~PowerPropertySheet((PowerPropertySheet *)this);
  return;
}


/* PowerPropsRedStingerLocationData::~PowerPropsRedStingerLocationData() */

void __thiscall
PowerPropsRedStingerLocationData::~PowerPropsRedStingerLocationData
          (PowerPropsRedStingerLocationData *this)

{
  ~PowerPropsRedStingerLocationData(this);
  AK::FreeHook(this);
  return;
}


/* PowerPropsRedStingerLocationData::StaticGetClass() */

long * PowerPropsRedStingerLocationData::StaticGetClass(void)

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
  uVar2 = PowerPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PowerPropsRedStingerLocationData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PowerPropsRedStingerLocationData::GetClass() const */

long * PowerPropsRedStingerLocationData::GetClass(void)

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
  uVar2 = PowerPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"PowerPropsRedStingerLocationData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}

