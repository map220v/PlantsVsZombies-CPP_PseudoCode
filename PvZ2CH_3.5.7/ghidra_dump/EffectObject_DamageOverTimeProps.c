// Class: EffectObject_DamageOverTimeProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_DamageOverTimeProps::StaticClassInit() */

void EffectObject_DamageOverTimeProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObject_DamageOverTimeProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03cd9a58,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_DamageOverTimeProps::StaticGetClass() */

long * EffectObject_DamageOverTimeProps::StaticGetClass(void)

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
  uVar2 = EffectObjectPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_DamageOverTimeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_DamageOverTimeProps::GetClass() const */

long * EffectObject_DamageOverTimeProps::GetClass(void)

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
  uVar2 = EffectObjectPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"EffectObject_DamageOverTimeProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_DamageOverTimeProps::EffectObject_DamageOverTimeProps() */

void __thiscall
EffectObject_DamageOverTimeProps::EffectObject_DamageOverTimeProps
          (EffectObject_DamageOverTimeProps *this)

{
  EffectObjectPropertySheet::EffectObjectPropertySheet((EffectObjectPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_067600b0;
  Set8BytesTo0(this + 0x30);
  Set8BytesTo0(this + 0x38);
  Set8BytesTo0(this + 0x40);
  Set8BytesTo0(this + 0x48);
  Set8BytesTo0(this + 0x50);
  Sexy::Insets::Insets((Insets *)(this + 0x5c));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  return;
}


/* EffectObject_DamageOverTimeProps::StaticNew() */

EffectObject_DamageOverTimeProps * EffectObject_DamageOverTimeProps::StaticNew(void)

{
  EffectObject_DamageOverTimeProps *this;
  
  this = ::operator_new(0x88);
  EffectObject_DamageOverTimeProps(this);
  return this;
}


/* EffectObject_DamageOverTimeProps::~EffectObject_DamageOverTimeProps() */

void __thiscall
EffectObject_DamageOverTimeProps::~EffectObject_DamageOverTimeProps
          (EffectObject_DamageOverTimeProps *this)

{
  *(undefined ***)this = &PTR_GetClass_067600b0;
  std::vector<DamageTypeFlags,std::allocator<DamageTypeFlags>>::~vector
            ((vector<DamageTypeFlags,std::allocator<DamageTypeFlags>> *)(this + 0x70));
  std::string::~string((string *)(this + 0x50));
  std::string::~string((string *)(this + 0x48));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x38));
  std::string::~string((string *)(this + 0x30));
  EffectObjectPropertySheet::~EffectObjectPropertySheet((EffectObjectPropertySheet *)this);
  return;
}


/* EffectObject_DamageOverTimeProps::~EffectObject_DamageOverTimeProps() */

void __thiscall
EffectObject_DamageOverTimeProps::~EffectObject_DamageOverTimeProps
          (EffectObject_DamageOverTimeProps *this)

{
  ~EffectObject_DamageOverTimeProps(this);
  AK::FreeHook(this);
  return;
}

