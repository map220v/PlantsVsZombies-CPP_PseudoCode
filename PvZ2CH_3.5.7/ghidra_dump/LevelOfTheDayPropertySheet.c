// Class: LevelOfTheDayPropertySheet


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelOfTheDayPropertySheet::StaticClassInit() */

void LevelOfTheDayPropertySheet::StaticClassInit(void)

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
    std::string::string(asStack_10,"LevelOfTheDayPropertySheet");
    (*pcVar2)(plVar1,asStack_10,FUN_049b7be0,0xb0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LevelOfTheDayPropertySheet::StaticGetClass() */

long * LevelOfTheDayPropertySheet::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"LevelOfTheDayPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelOfTheDayPropertySheet::GetClass() const */

long * LevelOfTheDayPropertySheet::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"LevelOfTheDayPropertySheet",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LevelOfTheDayPropertySheet::LevelOfTheDayPropertySheet() */

void __thiscall
LevelOfTheDayPropertySheet::LevelOfTheDayPropertySheet(LevelOfTheDayPropertySheet *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06925320;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  Set8BytesTo0(this + 0x28);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x80));
  Set8BytesTo0(this + 0x98);
  Set8BytesTo0(this + 0xa0);
  Set8BytesTo0(this + 0xa8);
  return;
}


/* LevelOfTheDayPropertySheet::StaticNew() */

LevelOfTheDayPropertySheet * LevelOfTheDayPropertySheet::StaticNew(void)

{
  LevelOfTheDayPropertySheet *this;
  
  this = ::operator_new(0xb0);
  LevelOfTheDayPropertySheet(this);
  return this;
}


/* LevelOfTheDayPropertySheet::~LevelOfTheDayPropertySheet() */

void __thiscall
LevelOfTheDayPropertySheet::~LevelOfTheDayPropertySheet(LevelOfTheDayPropertySheet *this)

{
  *(undefined ***)this = &PTR_GetClass_06925320;
  std::string::~string((string *)(this + 0xa8));
  std::string::~string((string *)(this + 0xa0));
  std::string::~string((string *)(this + 0x98));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x80));
  std::vector<HolidayEventProperties,std::allocator<HolidayEventProperties>>::~vector
            ((vector<HolidayEventProperties,std::allocator<HolidayEventProperties>> *)(this + 0x68))
  ;
  std::vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>>::~vector
            ((vector<LevelOfTheDay_RewardItemType,std::allocator<LevelOfTheDay_RewardItemType>> *)
             (this + 0x50));
  std::vector<LevelOfTheDaySchedule,std::allocator<LevelOfTheDaySchedule>>::~vector
            ((vector<LevelOfTheDaySchedule,std::allocator<LevelOfTheDaySchedule>> *)(this + 0x38));
  std::string::~string((string *)(this + 0x28));
  std::vector<Sexy::RtWeakPtr<ZombieType>,std::allocator<Sexy::RtWeakPtr<ZombieType>>>::~vector
            ((vector<Sexy::RtWeakPtr<ZombieType>,std::allocator<Sexy::RtWeakPtr<ZombieType>>> *)
             (this + 0x10));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* LevelOfTheDayPropertySheet::~LevelOfTheDayPropertySheet() */

void __thiscall
LevelOfTheDayPropertySheet::~LevelOfTheDayPropertySheet(LevelOfTheDayPropertySheet *this)

{
  ~LevelOfTheDayPropertySheet(this);
  AK::FreeHook(this);
  return;
}

