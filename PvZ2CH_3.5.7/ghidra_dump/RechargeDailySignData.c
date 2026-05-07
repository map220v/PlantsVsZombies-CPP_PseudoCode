// Class: RechargeDailySignData


/* RechargeDailySignData::RechargeDailySignData(RechargeDailySignData const&) */

void __thiscall
RechargeDailySignData::RechargeDailySignData
          (RechargeDailySignData *this,RechargeDailySignData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0698a4b0;
  std::
  vector<std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>,std::allocator<std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>>>
  ::vector((vector<std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>,std::allocator<std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>>>
            *)(this + 8),(vector *)(param_1 + 8));
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  return;
}


/* RechargeDailySignData::~RechargeDailySignData() */

void __thiscall RechargeDailySignData::~RechargeDailySignData(RechargeDailySignData *this)

{
  *(undefined ***)this = &PTR_GetClass_0698a4b0;
  std::string::~string((string *)(this + 0x30));
  std::
  vector<std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>,std::allocator<std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>>>
  ::~vector((vector<std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>,std::allocator<std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>>>
             *)(this + 8));
  nop();
  return;
}


/* RechargeDailySignData::~RechargeDailySignData() */

void __thiscall RechargeDailySignData::~RechargeDailySignData(RechargeDailySignData *this)

{
  ~RechargeDailySignData(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeDailySignData::StaticClassInit() */

void RechargeDailySignData::StaticClassInit(void)

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
    std::string::string(asStack_10,"RechargeDailySignDayReward");
    (*pcVar3)(plVar2,asStack_10,FUN_04c4dd0c,0xc,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"RechargeDailySignData");
    (*pcVar3)(plVar2,asStack_10,FUN_04c4f5ac,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeDailySignData::StaticGetClass() */

long * RechargeDailySignData::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"RechargeDailySignData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RechargeDailySignData::GetClass() const */

long * RechargeDailySignData::GetClass(void)

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
  (*pcVar3)(plVar1,"RechargeDailySignData",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RechargeDailySignData::RechargeDailySignData() */

void __thiscall RechargeDailySignData::RechargeDailySignData(RechargeDailySignData *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_0698a4b0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 8));
  Set8BytesTo0(this + 0x30);
  std::
  vector<std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>,std::allocator<std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>>>
  ::clear((vector<std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>,std::allocator<std::vector<RechargeDailySignDayReward,std::allocator<RechargeDailySignDayReward>>>>
           *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* RechargeDailySignData::StaticNew() */

RechargeDailySignData * RechargeDailySignData::StaticNew(void)

{
  RechargeDailySignData *this;
  
  this = ::operator_new(0x38);
  RechargeDailySignData(this);
  return this;
}

