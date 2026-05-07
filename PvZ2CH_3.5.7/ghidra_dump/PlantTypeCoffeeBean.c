// Class: PlantTypeCoffeeBean


/* PlantTypeCoffeeBean::StaticGetClass() */

long * PlantTypeCoffeeBean::StaticGetClass(void)

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
  uVar2 = PlantType::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypeCoffeeBean",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeCoffeeBean::GetClass() const */

long * PlantTypeCoffeeBean::GetClass(void)

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
  uVar2 = PlantType::StaticGetClass();
  (*pcVar3)(plVar1,"PlantTypeCoffeeBean",uVar2,StaticNew);
  return sClass;
}


/* PlantTypeCoffeeBean::PlantTypeCoffeeBean() */

void __thiscall PlantTypeCoffeeBean::PlantTypeCoffeeBean(PlantTypeCoffeeBean *this)

{
  PlantType::PlantType((PlantType *)this);
  *(undefined ***)this = &PTR_GetClass_0680c610;
  return;
}


/* PlantTypeCoffeeBean::StaticNew() */

PlantTypeCoffeeBean * PlantTypeCoffeeBean::StaticNew(void)

{
  PlantTypeCoffeeBean *this;
  
  this = ::operator_new(0x138);
  PlantTypeCoffeeBean(this);
  return this;
}


/* PlantTypeCoffeeBean::~PlantTypeCoffeeBean() */

void __thiscall PlantTypeCoffeeBean::~PlantTypeCoffeeBean(PlantTypeCoffeeBean *this)

{
  *(undefined ***)this = &PTR_GetClass_0680c610;
  PlantType::~PlantType((PlantType *)this);
  return;
}


/* PlantTypeCoffeeBean::~PlantTypeCoffeeBean() */

void __thiscall PlantTypeCoffeeBean::~PlantTypeCoffeeBean(PlantTypeCoffeeBean *this)

{
  ~PlantTypeCoffeeBean(this);
  AK::FreeHook(this);
  return;
}

