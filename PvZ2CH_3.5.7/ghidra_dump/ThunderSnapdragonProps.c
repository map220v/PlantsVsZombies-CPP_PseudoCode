// Class: ThunderSnapdragonProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ThunderSnapdragonProps::StaticClassInit() */

void ThunderSnapdragonProps::StaticClassInit(void)

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
    std::string::string(asStack_10,"ThunderSnapdragonProps");
    (*pcVar2)(plVar1,asStack_10,FUN_04299538,0x2d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ThunderSnapdragonProps::StaticGetClass() */

long * ThunderSnapdragonProps::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ThunderSnapdragonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ThunderSnapdragonProps::GetClass() const */

long * ThunderSnapdragonProps::GetClass(void)

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
  (*pcVar3)(plVar1,"ThunderSnapdragonProps",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ThunderSnapdragonProps::ThunderSnapdragonProps() */

void __thiscall ThunderSnapdragonProps::ThunderSnapdragonProps(ThunderSnapdragonProps *this)

{
  size_t in_x2;
  
  PlantPropertySheet::PlantPropertySheet((PlantPropertySheet *)this);
  *(undefined ***)this = &PTR_GetClass_06827e60;
  Set8BytesTo0((string *)(this + 0x2c0));
  *(undefined4 *)(this + 0x2b8) = 0x3f800000;
  *(undefined4 *)(this + 700) = 0x3f800000;
  std::string::append((string *)(this + 0x2c0),"field",in_x2);
  *(undefined4 *)(this + 0x2c8) = 0x3e4ccccd;
  return;
}


/* ThunderSnapdragonProps::StaticNew() */

ThunderSnapdragonProps * ThunderSnapdragonProps::StaticNew(void)

{
  ThunderSnapdragonProps *this;
  
  this = ::operator_new(0x2d0);
  ThunderSnapdragonProps(this);
  return this;
}


/* ThunderSnapdragonProps::~ThunderSnapdragonProps() */

void __thiscall ThunderSnapdragonProps::~ThunderSnapdragonProps(ThunderSnapdragonProps *this)

{
  *(undefined ***)this = &PTR_GetClass_06827e60;
  std::string::~string((string *)(this + 0x2c0));
  PlantPropertySheet::~PlantPropertySheet((PlantPropertySheet *)this);
  return;
}


/* ThunderSnapdragonProps::~ThunderSnapdragonProps() */

void __thiscall ThunderSnapdragonProps::~ThunderSnapdragonProps(ThunderSnapdragonProps *this)

{
  ~ThunderSnapdragonProps(this);
  AK::FreeHook(this);
  return;
}

