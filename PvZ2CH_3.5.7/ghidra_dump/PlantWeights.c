// Class: PlantWeights


/* PlantWeights::~PlantWeights() */

void __thiscall PlantWeights::~PlantWeights(PlantWeights *this)

{
  *(undefined ***)this = &PTR_GetClass_067fdd50;
  std::string::~string((string *)(this + 0x10));
  ObjectTypeDescriptor::~ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  return;
}


/* PlantWeights::~PlantWeights() */

void __thiscall PlantWeights::~PlantWeights(PlantWeights *this)

{
  ~PlantWeights(this);
  AK::FreeHook(this);
  return;
}


/* PlantWeights::PlantWeights() */

void __thiscall PlantWeights::PlantWeights(PlantWeights *this)

{
  size_t in_x2;
  
  ObjectTypeDescriptor::ObjectTypeDescriptor((ObjectTypeDescriptor *)this);
  *(undefined ***)this = &PTR_GetClass_067fdd50;
  Set8BytesTo0((string *)(this + 0x10));
  *(undefined4 *)(this + 0x18) = 0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  return;
}


/* PlantWeights::StaticNew() */

PlantWeights * PlantWeights::StaticNew(void)

{
  PlantWeights *this;
  
  this = ::operator_new(0x20);
  PlantWeights(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantWeights::StaticClassInit() */

void PlantWeights::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantWeights");
    (*pcVar2)(plVar1,asStack_10,FUN_041a0e84,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantWeights::StaticGetClass() */

long * PlantWeights::StaticGetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWeights",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWeights::GetClass() const */

long * PlantWeights::GetClass(void)

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
  uVar2 = ObjectTypeDescriptor::StaticGetClass();
  (*pcVar3)(plVar1,"PlantWeights",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantWeights::PlantWeights(PlantWeights const&) */

void __thiscall PlantWeights::PlantWeights(PlantWeights *this,PlantWeights *param_1)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined ***)this = &PTR_GetClass_067fdd50;
  FUN_05475d88(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}


/* PlantWeights::PlantWeights(PlantWeights&&) */

void __thiscall PlantWeights::PlantWeights(PlantWeights *this,PlantWeights *param_1)

{
  ObjectTypeDescriptor::ObjectTypeDescriptor
            ((ObjectTypeDescriptor *)this,(ObjectTypeDescriptor *)param_1);
  *(undefined ***)this = &PTR_GetClass_067fdd50;
  FUN_05474148(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return;
}

