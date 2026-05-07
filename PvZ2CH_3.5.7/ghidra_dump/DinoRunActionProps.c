// Class: DinoRunActionProps


/* DinoRunActionProps::GetWaveStartMessage() const */

void DinoRunActionProps::GetWaveStartMessage(void)

{
  long in_x0;
  
  Sexy::ToWString((string *)(in_x0 + 0x40));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoRunActionProps::StaticClassInit() */

void DinoRunActionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinoRunActionProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0494394c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinoRunActionProps::StaticGetClass() */

long * DinoRunActionProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinoRunActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinoRunActionProps::GetClass() const */

long * DinoRunActionProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DinoRunActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinoRunActionProps::GetActionClass() const */

long * DinoRunActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (DinoRunWaveAction::sClass != (long *)0x0) {
    return DinoRunWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  DinoRunWaveAction::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"DinoRunWaveAction",uVar2,DinoRunWaveAction::StaticNew);
  DinoRunWaveAction::StaticClassInit();
  return DinoRunWaveAction::sClass;
}


/* DinoRunActionProps::DinoRunActionProps() */

void __thiscall DinoRunActionProps::DinoRunActionProps(DinoRunActionProps *this)

{
  size_t in_x2;
  
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_069129a0;
  Set8BytesTo0((string *)(this + 0x40));
  std::string::append((string *)(this + 0x40),"[WARNING_DINO_RUN]",in_x2);
  *(undefined4 *)(this + 0x48) = 3;
  *(undefined4 *)(this + 0x4c) = 0x40000000;
  return;
}


/* DinoRunActionProps::StaticNew() */

DinoRunActionProps * DinoRunActionProps::StaticNew(void)

{
  DinoRunActionProps *this;
  
  this = ::operator_new(0x50);
  DinoRunActionProps(this);
  return this;
}


/* DinoRunActionProps::~DinoRunActionProps() */

void __thiscall DinoRunActionProps::~DinoRunActionProps(DinoRunActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_069129a0;
  std::string::~string((string *)(this + 0x40));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* DinoRunActionProps::~DinoRunActionProps() */

void __thiscall DinoRunActionProps::~DinoRunActionProps(DinoRunActionProps *this)

{
  ~DinoRunActionProps(this);
  AK::FreeHook(this);
  return;
}

