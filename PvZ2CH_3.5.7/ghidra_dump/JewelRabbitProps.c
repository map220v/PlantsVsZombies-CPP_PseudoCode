// Class: JewelRabbitProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JewelRabbitProps::StaticClassInit() */

void JewelRabbitProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"JewelRabbitProps");
    (*pcVar2)(plVar1,asStack_10,FUN_0362d9ac,0x2e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* JewelRabbitProps::StaticGetClass() */

long * JewelRabbitProps::StaticGetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"JewelRabbitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JewelRabbitProps::GetClass() const */

long * JewelRabbitProps::GetClass(void)

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
  uVar2 = PlantPropertySheet::StaticGetClass();
  (*pcVar3)(plVar1,"JewelRabbitProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* JewelRabbitProps::JewelRabbitProps() */

void __thiscall JewelRabbitProps::JewelRabbitProps(JewelRabbitProps *this)

{
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined4 *)(this + 700) = 0x41500000;
  *(undefined ***)this = &PTR_GetClass_0666cb60;
  *(undefined4 *)(this + 0x2c4) = 0x3f000000;
  *(undefined4 *)(this + 0x2b8) = 0x418c0000;
  *(undefined4 *)(this + 0x2c0) = 0x44960000;
  *(undefined4 *)(this + 0x2c8) = 0x3dcccccd;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x2d0));
  return;
}


/* JewelRabbitProps::StaticNew() */

JewelRabbitProps * JewelRabbitProps::StaticNew(void)

{
  JewelRabbitProps *this;
  
  this = ::operator_new(0x2e8);
  JewelRabbitProps(this);
  return this;
}


/* JewelRabbitProps::~JewelRabbitProps() */

void __thiscall JewelRabbitProps::~JewelRabbitProps(JewelRabbitProps *this)

{
  *(undefined ***)this = &PTR_GetClass_0666cb60;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x2d0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* JewelRabbitProps::~JewelRabbitProps() */

void __thiscall JewelRabbitProps::~JewelRabbitProps(JewelRabbitProps *this)

{
  ~JewelRabbitProps(this);
  AK::FreeHook(this);
  return;
}

