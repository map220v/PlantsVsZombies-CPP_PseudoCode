// Class: ZombiePotionActionProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePotionActionProps::StaticClassInit() */

void ZombiePotionActionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"PotionData");
    (*pcVar3)(plVar2,asStack_10,FUN_03d1eed0,0x10,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ZombiePotionActionProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03d1f300,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePotionActionProps::StaticGetClass() */

long * ZombiePotionActionProps::StaticGetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePotionActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePotionActionProps::GetClass() const */

long * ZombiePotionActionProps::GetClass(void)

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
  uVar2 = WaveActionProperties::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePotionActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePotionActionProps::GetActionClass() const */

long * ZombiePotionActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (ZombiePotionAction::sClass != (long *)0x0) {
    return ZombiePotionAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  ZombiePotionAction::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePotionAction",uVar2,ZombiePotionAction::StaticNew);
  ZombiePotionAction::StaticClassInit();
  return ZombiePotionAction::sClass;
}


/* ZombiePotionActionProps::ZombiePotionActionProps() */

void __thiscall ZombiePotionActionProps::ZombiePotionActionProps(ZombiePotionActionProps *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06765770;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* ZombiePotionActionProps::StaticNew() */

ZombiePotionActionProps * ZombiePotionActionProps::StaticNew(void)

{
  ZombiePotionActionProps *this;
  
  this = ::operator_new(0x58);
  ZombiePotionActionProps(this);
  return this;
}


/* ZombiePotionActionProps::~ZombiePotionActionProps() */

void __thiscall ZombiePotionActionProps::~ZombiePotionActionProps(ZombiePotionActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06765770;
  std::vector<PotionData,std::allocator<PotionData>>::~vector
            ((vector<PotionData,std::allocator<PotionData>> *)(this + 0x40));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* ZombiePotionActionProps::~ZombiePotionActionProps() */

void __thiscall ZombiePotionActionProps::~ZombiePotionActionProps(ZombiePotionActionProps *this)

{
  ~ZombiePotionActionProps(this);
  AK::FreeHook(this);
  return;
}

