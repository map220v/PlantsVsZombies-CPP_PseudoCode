// Class: EffectObject_StrawburstPlantfoodProps


/* EffectObject_StrawburstPlantfoodProps::~EffectObject_StrawburstPlantfoodProps() */

void __thiscall
EffectObject_StrawburstPlantfoodProps::~EffectObject_StrawburstPlantfoodProps
          (EffectObject_StrawburstPlantfoodProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0681ec80;
  EffectObjectPropertySheet::~EffectObjectPropertySheet((EffectObjectPropertySheet *)this);
  return;
}


/* EffectObject_StrawburstPlantfoodProps::~EffectObject_StrawburstPlantfoodProps() */

void __thiscall
EffectObject_StrawburstPlantfoodProps::~EffectObject_StrawburstPlantfoodProps
          (EffectObject_StrawburstPlantfoodProps *this)

{
  ~EffectObject_StrawburstPlantfoodProps(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_StrawburstPlantfoodProps::StaticClassInit() */

void EffectObject_StrawburstPlantfoodProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObject_StrawburstPlantfoodProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04268874,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_StrawburstPlantfoodProps::StaticGetClass() */

long * EffectObject_StrawburstPlantfoodProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectObject_StrawburstPlantfoodProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_StrawburstPlantfoodProps::GetClass() const */

long * EffectObject_StrawburstPlantfoodProps::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectObject_StrawburstPlantfoodProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_StrawburstPlantfoodProps::EffectObject_StrawburstPlantfoodProps() */

void __thiscall
EffectObject_StrawburstPlantfoodProps::EffectObject_StrawburstPlantfoodProps
          (EffectObject_StrawburstPlantfoodProps *this)

{
  EffectObjectPropertySheet::EffectObjectPropertySheet((EffectObjectPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0681ec80;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


/* EffectObject_StrawburstPlantfoodProps::StaticNew() */

EffectObject_StrawburstPlantfoodProps * EffectObject_StrawburstPlantfoodProps::StaticNew(void)

{
  EffectObject_StrawburstPlantfoodProps *this;
  
  this = ::operator_new(0x38);
  EffectObject_StrawburstPlantfoodProps(this);
  return this;
}

