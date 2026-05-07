// Class: EffectObject_GardenerGrassProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectObject_GardenerGrassProps::StaticClassInit() */

void EffectObject_GardenerGrassProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectObject_GardenerGrassProps");
    (*pcVar2)(plVar1,asStack_10,FUN_03b161b8,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectObject_GardenerGrassProps::StaticGetClass() */

long * EffectObject_GardenerGrassProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EffectObject_GardenerGrassProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_GardenerGrassProps::GetClass() const */

long * EffectObject_GardenerGrassProps::GetClass(void)

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
  (*pcVar3)(plVar1,"EffectObject_GardenerGrassProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectObject_GardenerGrassProps::EffectObject_GardenerGrassProps() */

void __thiscall
EffectObject_GardenerGrassProps::EffectObject_GardenerGrassProps
          (EffectObject_GardenerGrassProps *this)

{
  EffectObjectPropertySheet::EffectObjectPropertySheet((EffectObjectPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_0672ce80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* EffectObject_GardenerGrassProps::StaticNew() */

EffectObject_GardenerGrassProps * EffectObject_GardenerGrassProps::StaticNew(void)

{
  EffectObject_GardenerGrassProps *this;
  
  this = ::operator_new(0x48);
  EffectObject_GardenerGrassProps(this);
  return this;
}


/* EffectObject_GardenerGrassProps::~EffectObject_GardenerGrassProps() */

void __thiscall
EffectObject_GardenerGrassProps::~EffectObject_GardenerGrassProps
          (EffectObject_GardenerGrassProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0672ce80;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x30));
  EffectObjectPropertySheet::~EffectObjectPropertySheet((EffectObjectPropertySheet *)this);
  return;
}


/* EffectObject_GardenerGrassProps::~EffectObject_GardenerGrassProps() */

void __thiscall
EffectObject_GardenerGrassProps::~EffectObject_GardenerGrassProps
          (EffectObject_GardenerGrassProps *this)

{
  ~EffectObject_GardenerGrassProps(this);
  AK::FreeHook(this);
  return;
}

