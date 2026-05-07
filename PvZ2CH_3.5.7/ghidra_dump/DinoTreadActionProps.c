// Class: DinoTreadActionProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DinoTreadActionProps::StaticClassInit() */

void DinoTreadActionProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"DinoTreadActionProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04942ae4,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* DinoTreadActionProps::StaticGetClass() */

long * DinoTreadActionProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"DinoTreadActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinoTreadActionProps::GetClass() const */

long * DinoTreadActionProps::GetClass(void)

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
  (*pcVar3)(plVar1,"DinoTreadActionProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* DinoTreadActionProps::GetActionClass() const */

long * DinoTreadActionProps::GetActionClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (DinoTreadWaveAction::sClass != (long *)0x0) {
    return DinoTreadWaveAction::sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  DinoTreadWaveAction::sClass = plVar1;
  uVar2 = WaveAction::StaticGetClass();
  (*pcVar3)(plVar1,"DinoTreadWaveAction",uVar2,DinoTreadWaveAction::StaticNew);
  DinoTreadWaveAction::StaticClassInit();
  return DinoTreadWaveAction::sClass;
}


/* DinoTreadActionProps::DinoTreadActionProps() */

void __thiscall DinoTreadActionProps::DinoTreadActionProps(DinoTreadActionProps *this)

{
  size_t in_x2;
  
  WaveActionProperties::WaveActionProperties((WaveActionProperties *)this);
  *(undefined ***)this = &PTR_GetClass_06912850;
  Set8BytesTo0((string *)(this + 0x40));
  std::string::append((string *)(this + 0x40),"[WARNING_DINO_TREAD]",in_x2);
  *(undefined4 *)(this + 0x48) = 3;
  *(undefined4 *)(this + 0x4c) = 2;
  *(undefined4 *)(this + 0x50) = 6;
  *(undefined4 *)(this + 0x54) = 0x40000000;
  return;
}


/* DinoTreadActionProps::StaticNew() */

DinoTreadActionProps * DinoTreadActionProps::StaticNew(void)

{
  DinoTreadActionProps *this;
  
  this = ::operator_new(0x58);
  DinoTreadActionProps(this);
  return this;
}


/* DinoTreadActionProps::~DinoTreadActionProps() */

void __thiscall DinoTreadActionProps::~DinoTreadActionProps(DinoTreadActionProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06912850;
  std::string::~string((string *)(this + 0x40));
  WaveActionProperties::~WaveActionProperties((WaveActionProperties *)this);
  return;
}


/* DinoTreadActionProps::~DinoTreadActionProps() */

void __thiscall DinoTreadActionProps::~DinoTreadActionProps(DinoTreadActionProps *this)

{
  ~DinoTreadActionProps(this);
  AK::FreeHook(this);
  return;
}

