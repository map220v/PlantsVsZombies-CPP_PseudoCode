// Class: WaveActionSnowBallProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveActionSnowBallProps::StaticClassInit() */

void WaveActionSnowBallProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"SnowBallData");
    (*pcVar3)(plVar2,asStack_10,FUN_0346e0e8,8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WaveActionSnowBallProps");
    (*pcVar3)(plVar2,asStack_10,FUN_0346eb4c,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveActionSnowBallProps::StaticGetClass() */

long * WaveActionSnowBallProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"WaveActionSnowBallProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionSnowBallProps::GetClass() const */

long * WaveActionSnowBallProps::GetClass(void)

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
  (*pcVar3)(plVar1,"WaveActionSnowBallProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveActionSnowBallProps::GetActionClass() const */

long * WaveActionSnowBallProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (WaveActionSnowBall::sClass != (long *)0x0) {
    return WaveActionSnowBall::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  WaveActionSnowBall::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"WaveActionSnowBall",uVar2,WaveActionSnowBall::StaticNew);
  WaveActionSnowBall::StaticClassInit();
  return WaveActionSnowBall::sClass;
}


/* WaveActionSnowBallProps::WaveActionSnowBallProps() */

void __thiscall WaveActionSnowBallProps::WaveActionSnowBallProps(WaveActionSnowBallProps *this)

{
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_0663a5a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* WaveActionSnowBallProps::StaticNew() */

WaveActionSnowBallProps * WaveActionSnowBallProps::StaticNew(void)

{
  WaveActionSnowBallProps *this;
  
  this = ::operator_new(0x58);
  WaveActionSnowBallProps(this);
  return this;
}


/* WaveActionSnowBallProps::~WaveActionSnowBallProps() */

void __thiscall WaveActionSnowBallProps::~WaveActionSnowBallProps(WaveActionSnowBallProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0663a5a0;
  std::vector<SnowBallData,std::allocator<SnowBallData>>::~vector
            ((vector<SnowBallData,std::allocator<SnowBallData>> *)(this + 0x40));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* WaveActionSnowBallProps::~WaveActionSnowBallProps() */

void __thiscall WaveActionSnowBallProps::~WaveActionSnowBallProps(WaveActionSnowBallProps *this)

{
  ~WaveActionSnowBallProps(this);
  AK::FreeHook(this);
  return;
}

