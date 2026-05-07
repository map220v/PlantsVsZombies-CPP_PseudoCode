// Class: ZombieBumperCarProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieBumperCarProps::StaticClassInit() */

void ZombieBumperCarProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChargeDegreeRange");
    (*pcVar3)(plVar2,asStack_10,FUN_033d38e8,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ChargeInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_033d6018,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombieBumperCarProps");
    (*pcVar3)(plVar2,asStack_10,FUN_033d8278,0x308,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieBumperCarProps::StaticGetClass() */

long * ZombieBumperCarProps::StaticGetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieBumperCarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBumperCarProps::GetClass() const */

long * ZombieBumperCarProps::GetClass(void)

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
  uVar2 = ZombiePropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieBumperCarProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieBumperCarProps::ZombieBumperCarProps() */

void __thiscall ZombieBumperCarProps::ZombieBumperCarProps(ZombieBumperCarProps *this)

{
  ZombiePropertySheet::ZombiePropertySheet((ZombiePropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06619950;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x214) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x218));
  DVec3::DVec3((DVec3 *)(this + 0x228));
  DVec3::DVec3((DVec3 *)(this + 0x234));
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x24c) = 0;
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined4 *)(this + 0x254) = 0;
  DVec3::DVec3((DVec3 *)(this + 600));
  DVec3::DVec3((DVec3 *)(this + 0x264));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x270));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x288));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2a0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2b8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2e8));
  *(undefined4 *)(this + 0x304) = 0;
  *(undefined4 *)(this + 0x300) = 0;
  return;
}


/* ZombieBumperCarProps::StaticNew() */

ZombieBumperCarProps * ZombieBumperCarProps::StaticNew(void)

{
  ZombieBumperCarProps *this;
  
  this = ::operator_new(0x308);
  ZombieBumperCarProps(this);
  return this;
}


/* ZombieBumperCarProps::~ZombieBumperCarProps() */

void __thiscall ZombieBumperCarProps::~ZombieBumperCarProps(ZombieBumperCarProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06619950;
  std::vector<ChargeInfo,std::allocator<ChargeInfo>>::~vector
            ((vector<ChargeInfo,std::allocator<ChargeInfo>> *)(this + 0x2e8));
  std::vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>>::~vector
            ((vector<ChargeDegreeRange,std::allocator<ChargeDegreeRange>> *)(this + 0x2d0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2b8));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2a0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x288));
  ZombiePropertySheet::~ZombiePropertySheet((ZombiePropertySheet *)this);
  return;
}


/* ZombieBumperCarProps::~ZombieBumperCarProps() */

void __thiscall ZombieBumperCarProps::~ZombieBumperCarProps(ZombieBumperCarProps *this)

{
  ~ZombieBumperCarProps(this);
  AK::FreeHook(this);
  return;
}

