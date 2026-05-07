// Class: ComponentVisualStretcherProps


/* ComponentVisualStretcherProps::~ComponentVisualStretcherProps() */

void __thiscall
ComponentVisualStretcherProps::~ComponentVisualStretcherProps(ComponentVisualStretcherProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06735cd0;
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* ComponentVisualStretcherProps::~ComponentVisualStretcherProps() */

void __thiscall
ComponentVisualStretcherProps::~ComponentVisualStretcherProps(ComponentVisualStretcherProps *this)

{
  ~ComponentVisualStretcherProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentVisualStretcherProps::StaticClassInit() */

void ComponentVisualStretcherProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ComponentVisualStretcherProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b8d7a0,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentVisualStretcherProps::StaticGetClass() */

long * ComponentVisualStretcherProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ComponentVisualStretcherProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentVisualStretcherProps::GetClass() const */

long * ComponentVisualStretcherProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ComponentVisualStretcherProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentVisualStretcherProps::TEMPNAMEPLACEHOLDERVALUE(ComponentVisualStretcherProps const&) */

ComponentVisualStretcherProps * __thiscall
ComponentVisualStretcherProps::operator=
          (ComponentVisualStretcherProps *this,ComponentVisualStretcherProps *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  PropertySheetBase::operator=((PropertySheetBase *)this,(PropertySheetBase *)param_1);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_05475e00(this + 0x18,param_1 + 0x18);
  thunk_FUN_05475e00(this + 0x20,param_1 + 0x20);
  thunk_FUN_05475e00(this + 0x28,param_1 + 0x28);
  thunk_FUN_05475e00(this + 0x30,param_1 + 0x30);
  thunk_FUN_05475e00(this + 0x38,param_1 + 0x38);
  thunk_FUN_05475e00(this + 0x40,param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x48) = uVar2;
  *(undefined8 *)(this + 0x50) = uVar1;
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentVisualStretcherProps::ComponentVisualStretcherProps() */

void __thiscall
ComponentVisualStretcherProps::ComponentVisualStretcherProps(ComponentVisualStretcherProps *this)

{
  long lVar1;
  size_t in_x2;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_06735cd0;
  Set8BytesTo0((string *)(this + 0x18));
  Set8BytesTo0((string *)(this + 0x20));
  Set8BytesTo0((string *)(this + 0x28));
  Set8BytesTo0((string *)(this + 0x30));
  Set8BytesTo0((string *)(this + 0x38));
  Set8BytesTo0((string *)(this + 0x40));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x48));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x50));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x58));
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  std::string::append((string *)(this + 0x18),"",in_x2);
  std::string::append((string *)(this + 0x20),"",in_x2);
  std::string::append((string *)(this + 0x28),"",in_x2);
  std::string::append((string *)(this + 0x30),"",in_x2);
  std::string::append((string *)(this + 0x38),"",in_x2);
  std::string::append((string *)(this + 0x40),"",in_x2);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  *(undefined8 *)(this + 0x48) = local_10;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  *(undefined8 *)(this + 0x50) = local_10;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x58) = local_10;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentVisualStretcherProps::StaticNew() */

ComponentVisualStretcherProps * ComponentVisualStretcherProps::StaticNew(void)

{
  ComponentVisualStretcherProps *this;
  
  this = ::operator_new(0x60);
  ComponentVisualStretcherProps(this);
  return this;
}

